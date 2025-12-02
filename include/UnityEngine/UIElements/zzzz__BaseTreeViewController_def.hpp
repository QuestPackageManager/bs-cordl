#pragma once
// IWYU pragma private; include "UnityEngine/UIElements/BaseTreeViewController.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "Unity/Hierarchy/zzzz__HierarchyFlattenedNodeChildren_def.hpp"
#include "Unity/Hierarchy/zzzz__HierarchyFlattenedNode_def.hpp"
#include "Unity/Hierarchy/zzzz__HierarchyFlattened_def.hpp"
#include "Unity/Hierarchy/zzzz__HierarchyNodeChildren_def.hpp"
#include "Unity/Hierarchy/zzzz__HierarchyNode_def.hpp"
#include "Unity/Profiling/zzzz__ProfilerMarker_def.hpp"
#include "UnityEngine/UIElements/zzzz__CollectionViewController_def.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(BaseTreeViewController)
namespace System::Collections::Generic {
template <typename TKey, typename TValue> class Dictionary_2;
}
namespace System::Collections::Generic {
template <typename T> class IEnumerable_1;
}
namespace System::Collections::Generic {
template <typename T> class IEnumerator_1;
}
namespace System::Collections::Generic {
template <typename T> class List_1;
}
namespace System::Collections {
class IEnumerable;
}
namespace System::Collections {
class IEnumerator;
}
namespace System::Collections {
class IList;
}
namespace System {
template <typename T> class Action_1;
}
namespace System {
class IDisposable;
}
namespace System {
class Object;
}
namespace Unity::Hierarchy {
class HierarchyFlattened;
}
namespace Unity::Hierarchy {
struct HierarchyNode;
}
namespace Unity::Hierarchy {
class HierarchyViewModel;
}
namespace Unity::Hierarchy {
class Hierarchy;
}
namespace Unity::Hierarchy {
template <typename T> class IHierarchyProperty_1;
}
namespace UnityEngine::UIElements {
class BaseTreeViewController__GetAllItemIds_d__23;
}
namespace UnityEngine::UIElements {
class BaseTreeViewController__GetChildrenIdsByIndex_d__41;
}
namespace UnityEngine::UIElements {
class BaseTreeViewController__GetChildrenIds_d__25;
}
namespace UnityEngine::UIElements {
class BaseTreeView;
}
namespace UnityEngine::UIElements {
template <typename T> class ChangeEvent_1;
}
namespace UnityEngine::UIElements {
class PointerUpEvent;
}
namespace UnityEngine::UIElements {
class ReusableCollectionItem;
}
namespace UnityEngine::UIElements {
class ReusableTreeViewItem;
}
namespace UnityEngine::UIElements {
class TreeViewExpansionChangedArgs;
}
// Forward declare root types
namespace UnityEngine::UIElements {
class BaseTreeViewController;
}
namespace UnityEngine::UIElements {
class BaseTreeViewController__GetAllItemIds_d__23;
}
namespace UnityEngine::UIElements {
class BaseTreeViewController__GetChildrenIdsByIndex_d__41;
}
namespace UnityEngine::UIElements {
class BaseTreeViewController__GetChildrenIds_d__25;
}
// Write type traits
MARK_REF_PTR_T(::UnityEngine::UIElements::BaseTreeViewController);
MARK_REF_PTR_T(::UnityEngine::UIElements::BaseTreeViewController__GetAllItemIds_d__23);
MARK_REF_PTR_T(::UnityEngine::UIElements::BaseTreeViewController__GetChildrenIdsByIndex_d__41);
MARK_REF_PTR_T(::UnityEngine::UIElements::BaseTreeViewController__GetChildrenIds_d__25);
// Dependencies System.Object, Unity.Hierarchy.HierarchyFlattened::Enumerator, Unity.Hierarchy.HierarchyFlattenedNode, Unity.Hierarchy.HierarchyFlattenedNodeChildren,
// Unity.Hierarchy.HierarchyFlattenedNodeChildren::Enumerator, Unity.Hierarchy.HierarchyNode
namespace UnityEngine::UIElements {
// Is value type: false
// CS Name: UnityEngine.UIElements.BaseTreeViewController/<GetAllItemIds>d__23
class CORDL_TYPE BaseTreeViewController__GetAllItemIds_d__23 : public ::System::Object {
public:
  // Declarations
  __declspec(property(get = System_Collections_Generic_IEnumerator_System_Int32__get_Current)) int32_t System_Collections_Generic_IEnumerator_System_Int32__Current;

  __declspec(property(get = System_Collections_IEnumerator_get_Current)) ::System::Object* System_Collections_IEnumerator_Current;

  /// @brief Field <>1__state, offset 0x10, size 0x4
  __declspec(property(get = __cordl_internal_get___1__state, put = __cordl_internal_set___1__state)) int32_t __1__state;

  /// @brief Field <>2__current, offset 0x14, size 0x4
  __declspec(property(get = __cordl_internal_get___2__current, put = __cordl_internal_set___2__current)) int32_t __2__current;

  /// @brief Field <>3__rootIds, offset 0x28, size 0x8
  __declspec(property(get = __cordl_internal_get___3__rootIds, put = __cordl_internal_set___3__rootIds)) ::System::Collections::Generic::IEnumerable_1<int32_t>* __3__rootIds;

  /// @brief Field <>4__this, offset 0x30, size 0x8
  __declspec(property(get = __cordl_internal_get___4__this, put = __cordl_internal_set___4__this)) ::UnityEngine::UIElements::BaseTreeViewController* __4__this;

  /// @brief Field <>l__initialThreadId, offset 0x18, size 0x4
  __declspec(property(get = __cordl_internal_get___l__initialThreadId, put = __cordl_internal_set___l__initialThreadId)) int32_t __l__initialThreadId;

  /// @brief Field <>s__1, offset 0x38, size 0x20
  __declspec(property(get = __cordl_internal_get___s__1, put = __cordl_internal_set___s__1)) ::Unity::Hierarchy::HierarchyFlattened_Enumerator __s__1;

  /// @brief Field <>s__3, offset 0x78, size 0x8
  __declspec(property(get = __cordl_internal_get___s__3, put = __cordl_internal_set___s__3)) ::System::Collections::Generic::IEnumerator_1<int32_t>* __s__3;

  /// @brief Field <>s__6, offset 0xa0, size 0x38
  __declspec(property(get = __cordl_internal_get___s__6, put = __cordl_internal_set___s__6)) ::Unity::Hierarchy::HierarchyFlattenedNodeChildren_Enumerator __s__6;

  /// @brief Field <flattenedNodeChildren>5__5, offset 0x88, size 0x18
  __declspec(property(get = __cordl_internal_get__flattenedNodeChildren_5__5,
                      put = __cordl_internal_set__flattenedNodeChildren_5__5)) ::Unity::Hierarchy::HierarchyFlattenedNodeChildren _flattenedNodeChildren_5__5;

  /// @brief Field <flattenedNode>5__2, offset 0x58, size 0x1c
  __declspec(property(get = __cordl_internal_get__flattenedNode_5__2, put = __cordl_internal_set__flattenedNode_5__2)) ::Unity::Hierarchy::HierarchyFlattenedNode _flattenedNode_5__2;

  /// @brief Field <id>5__4, offset 0x80, size 0x4
  __declspec(property(get = __cordl_internal_get__id_5__4, put = __cordl_internal_set__id_5__4)) int32_t _id_5__4;

  /// @brief Field <node>5__7, offset 0xd8, size 0x8
  __declspec(property(get = __cordl_internal_get__node_5__7, put = __cordl_internal_set__node_5__7)) ::Unity::Hierarchy::HierarchyNode _node_5__7;

  /// @brief Field rootIds, offset 0x20, size 0x8
  __declspec(property(get = __cordl_internal_get_rootIds, put = __cordl_internal_set_rootIds)) ::System::Collections::Generic::IEnumerable_1<int32_t>* rootIds;

  /// @brief Convert operator to "::System::Collections::Generic::IEnumerable_1<int32_t>"
  constexpr operator ::System::Collections::Generic::IEnumerable_1<int32_t>*() noexcept;

  /// @brief Convert operator to "::System::Collections::Generic::IEnumerator_1<int32_t>"
  constexpr operator ::System::Collections::Generic::IEnumerator_1<int32_t>*() noexcept;

  /// @brief Convert operator to "::System::Collections::IEnumerable"
  constexpr operator ::System::Collections::IEnumerable*() noexcept;

  /// @brief Convert operator to "::System::Collections::IEnumerator"
  constexpr operator ::System::Collections::IEnumerator*() noexcept;

  /// @brief Convert operator to "::System::IDisposable"
  constexpr operator ::System::IDisposable*() noexcept;

  /// @brief Method MoveNext, addr 0x6a1d854, size 0x670, virtual true, abstract: false, final true
  inline bool MoveNext();

  static inline ::UnityEngine::UIElements::BaseTreeViewController__GetAllItemIds_d__23* New_ctor(int32_t __1__state);

  /// @brief Method System.Collections.Generic.IEnumerable<System.Int32>.GetEnumerator, addr 0x6a1dfdc, size 0xa0, virtual true, abstract: false, final true
  inline ::System::Collections::Generic::IEnumerator_1<int32_t>* System_Collections_Generic_IEnumerable_System_Int32__GetEnumerator();

  /// @brief Method System.Collections.Generic.IEnumerator<System.Int32>.get_Current, addr 0x6a1df78, size 0x8, virtual true, abstract: false, final true
  inline int32_t System_Collections_Generic_IEnumerator_System_Int32__get_Current();

  /// @brief Method System.Collections.IEnumerable.GetEnumerator, addr 0x6a1e07c, size 0x4, virtual true, abstract: false, final true
  inline ::System::Collections::IEnumerator* System_Collections_IEnumerable_GetEnumerator();

  /// @brief Method System.Collections.IEnumerator.Reset, addr 0x6a1df80, size 0x38, virtual true, abstract: false, final true
  inline void System_Collections_IEnumerator_Reset();

  /// @brief Method System.Collections.IEnumerator.get_Current, addr 0x6a1dfb8, size 0x24, virtual true, abstract: false, final true
  inline ::System::Object* System_Collections_IEnumerator_get_Current();

  /// @brief Method System.IDisposable.Dispose, addr 0x6a1d828, size 0x2c, virtual true, abstract: false, final true
  inline void System_IDisposable_Dispose();

  constexpr int32_t const& __cordl_internal_get___1__state() const;

  constexpr int32_t& __cordl_internal_get___1__state();

  constexpr int32_t const& __cordl_internal_get___2__current() const;

  constexpr int32_t& __cordl_internal_get___2__current();

  constexpr ::System::Collections::Generic::IEnumerable_1<int32_t>* const& __cordl_internal_get___3__rootIds() const;

  constexpr ::System::Collections::Generic::IEnumerable_1<int32_t>*& __cordl_internal_get___3__rootIds();

  constexpr ::UnityEngine::UIElements::BaseTreeViewController* const& __cordl_internal_get___4__this() const;

  constexpr ::UnityEngine::UIElements::BaseTreeViewController*& __cordl_internal_get___4__this();

  constexpr int32_t const& __cordl_internal_get___l__initialThreadId() const;

  constexpr int32_t& __cordl_internal_get___l__initialThreadId();

  constexpr ::Unity::Hierarchy::HierarchyFlattened_Enumerator const& __cordl_internal_get___s__1() const;

  constexpr ::Unity::Hierarchy::HierarchyFlattened_Enumerator& __cordl_internal_get___s__1();

  constexpr ::System::Collections::Generic::IEnumerator_1<int32_t>* const& __cordl_internal_get___s__3() const;

  constexpr ::System::Collections::Generic::IEnumerator_1<int32_t>*& __cordl_internal_get___s__3();

  constexpr ::Unity::Hierarchy::HierarchyFlattenedNodeChildren_Enumerator const& __cordl_internal_get___s__6() const;

  constexpr ::Unity::Hierarchy::HierarchyFlattenedNodeChildren_Enumerator& __cordl_internal_get___s__6();

  constexpr ::Unity::Hierarchy::HierarchyFlattenedNodeChildren const& __cordl_internal_get__flattenedNodeChildren_5__5() const;

  constexpr ::Unity::Hierarchy::HierarchyFlattenedNodeChildren& __cordl_internal_get__flattenedNodeChildren_5__5();

  constexpr ::Unity::Hierarchy::HierarchyFlattenedNode const& __cordl_internal_get__flattenedNode_5__2() const;

  constexpr ::Unity::Hierarchy::HierarchyFlattenedNode& __cordl_internal_get__flattenedNode_5__2();

  constexpr int32_t const& __cordl_internal_get__id_5__4() const;

  constexpr int32_t& __cordl_internal_get__id_5__4();

  constexpr ::Unity::Hierarchy::HierarchyNode const& __cordl_internal_get__node_5__7() const;

  constexpr ::Unity::Hierarchy::HierarchyNode& __cordl_internal_get__node_5__7();

  constexpr ::System::Collections::Generic::IEnumerable_1<int32_t>* const& __cordl_internal_get_rootIds() const;

  constexpr ::System::Collections::Generic::IEnumerable_1<int32_t>*& __cordl_internal_get_rootIds();

  constexpr void __cordl_internal_set___1__state(int32_t value);

  constexpr void __cordl_internal_set___2__current(int32_t value);

  constexpr void __cordl_internal_set___3__rootIds(::System::Collections::Generic::IEnumerable_1<int32_t>* value);

  constexpr void __cordl_internal_set___4__this(::UnityEngine::UIElements::BaseTreeViewController* value);

  constexpr void __cordl_internal_set___l__initialThreadId(int32_t value);

  constexpr void __cordl_internal_set___s__1(::Unity::Hierarchy::HierarchyFlattened_Enumerator value);

  constexpr void __cordl_internal_set___s__3(::System::Collections::Generic::IEnumerator_1<int32_t>* value);

  constexpr void __cordl_internal_set___s__6(::Unity::Hierarchy::HierarchyFlattenedNodeChildren_Enumerator value);

  constexpr void __cordl_internal_set__flattenedNodeChildren_5__5(::Unity::Hierarchy::HierarchyFlattenedNodeChildren value);

  constexpr void __cordl_internal_set__flattenedNode_5__2(::Unity::Hierarchy::HierarchyFlattenedNode value);

  constexpr void __cordl_internal_set__id_5__4(int32_t value);

  constexpr void __cordl_internal_set__node_5__7(::Unity::Hierarchy::HierarchyNode value);

  constexpr void __cordl_internal_set_rootIds(::System::Collections::Generic::IEnumerable_1<int32_t>* value);

  /// @brief Method <>m__Finally1, addr 0x6a1dec4, size 0xb4, virtual false, abstract: false, final false
  inline void __m__Finally1();

  /// @brief Method .ctor, addr 0x6a1a100, size 0x20, virtual false, abstract: false, final false
  inline void _ctor(int32_t __1__state);

  /// @brief Convert to "::System::Collections::Generic::IEnumerable_1<int32_t>"
  constexpr ::System::Collections::Generic::IEnumerable_1<int32_t>* i___System__Collections__Generic__IEnumerable_1_int32_t_() noexcept;

  /// @brief Convert to "::System::Collections::Generic::IEnumerator_1<int32_t>"
  constexpr ::System::Collections::Generic::IEnumerator_1<int32_t>* i___System__Collections__Generic__IEnumerator_1_int32_t_() noexcept;

  /// @brief Convert to "::System::Collections::IEnumerable"
  constexpr ::System::Collections::IEnumerable* i___System__Collections__IEnumerable() noexcept;

  /// @brief Convert to "::System::Collections::IEnumerator"
  constexpr ::System::Collections::IEnumerator* i___System__Collections__IEnumerator() noexcept;

  /// @brief Convert to "::System::IDisposable"
  constexpr ::System::IDisposable* i___System__IDisposable() noexcept;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr BaseTreeViewController__GetAllItemIds_d__23();

public:
  // Ctor Parameters [CppParam { name: "", ty: "BaseTreeViewController__GetAllItemIds_d__23", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  BaseTreeViewController__GetAllItemIds_d__23(BaseTreeViewController__GetAllItemIds_d__23&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "BaseTreeViewController__GetAllItemIds_d__23", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  BaseTreeViewController__GetAllItemIds_d__23(BaseTreeViewController__GetAllItemIds_d__23 const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 4075 };

  /// @brief Field <>1__state, offset: 0x10, size: 0x4, def value: None
  int32_t _____1__state;

  /// @brief Field <>2__current, offset: 0x14, size: 0x4, def value: None
  int32_t _____2__current;

  /// @brief Field <>l__initialThreadId, offset: 0x18, size: 0x4, def value: None
  int32_t _____l__initialThreadId;

  /// @brief Field rootIds, offset: 0x20, size: 0x8, def value: None
  ::System::Collections::Generic::IEnumerable_1<int32_t>* ___rootIds;

  /// @brief Field <>3__rootIds, offset: 0x28, size: 0x8, def value: None
  ::System::Collections::Generic::IEnumerable_1<int32_t>* _____3__rootIds;

  /// @brief Field <>4__this, offset: 0x30, size: 0x8, def value: None
  ::UnityEngine::UIElements::BaseTreeViewController* _____4__this;

  /// @brief Field <>s__1, offset: 0x38, size: 0x20, def value: None
  ::Unity::Hierarchy::HierarchyFlattened_Enumerator _____s__1;

  /// @brief Field <flattenedNode>5__2, offset: 0x58, size: 0x1c, def value: None
  ::Unity::Hierarchy::HierarchyFlattenedNode ____flattenedNode_5__2;

  /// @brief Field <>s__3, offset: 0x78, size: 0x8, def value: None
  ::System::Collections::Generic::IEnumerator_1<int32_t>* _____s__3;

  /// @brief Field <id>5__4, offset: 0x80, size: 0x4, def value: None
  int32_t ____id_5__4;

  /// @brief Field <flattenedNodeChildren>5__5, offset: 0x88, size: 0x18, def value: None
  ::Unity::Hierarchy::HierarchyFlattenedNodeChildren ____flattenedNodeChildren_5__5;

  /// @brief Field <>s__6, offset: 0xa0, size: 0x38, def value: None
  ::Unity::Hierarchy::HierarchyFlattenedNodeChildren_Enumerator _____s__6;

  /// @brief Field <node>5__7, offset: 0xd8, size: 0x8, def value: None
  ::Unity::Hierarchy::HierarchyNode ____node_5__7;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::UIElements::BaseTreeViewController__GetAllItemIds_d__23, _____1__state) == 0x10, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::BaseTreeViewController__GetAllItemIds_d__23, _____2__current) == 0x14, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::BaseTreeViewController__GetAllItemIds_d__23, _____l__initialThreadId) == 0x18, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::BaseTreeViewController__GetAllItemIds_d__23, ___rootIds) == 0x20, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::BaseTreeViewController__GetAllItemIds_d__23, _____3__rootIds) == 0x28, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::BaseTreeViewController__GetAllItemIds_d__23, _____4__this) == 0x30, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::BaseTreeViewController__GetAllItemIds_d__23, _____s__1) == 0x38, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::BaseTreeViewController__GetAllItemIds_d__23, ____flattenedNode_5__2) == 0x58, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::BaseTreeViewController__GetAllItemIds_d__23, _____s__3) == 0x78, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::BaseTreeViewController__GetAllItemIds_d__23, ____id_5__4) == 0x80, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::BaseTreeViewController__GetAllItemIds_d__23, ____flattenedNodeChildren_5__5) == 0x88, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::BaseTreeViewController__GetAllItemIds_d__23, _____s__6) == 0xa0, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::BaseTreeViewController__GetAllItemIds_d__23, ____node_5__7) == 0xd8, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::UnityEngine::UIElements::BaseTreeViewController__GetAllItemIds_d__23, 0xe0>, "Size mismatch!");

} // namespace UnityEngine::UIElements
// Dependencies System.Object, Unity.Hierarchy.HierarchyNode, Unity.Hierarchy.HierarchyNodeChildren, Unity.Hierarchy.HierarchyNodeChildren::Enumerator
namespace UnityEngine::UIElements {
// Is value type: false
// CS Name: UnityEngine.UIElements.BaseTreeViewController/<GetChildrenIds>d__25
class CORDL_TYPE BaseTreeViewController__GetChildrenIds_d__25 : public ::System::Object {
public:
  // Declarations
  __declspec(property(get = System_Collections_Generic_IEnumerator_System_Int32__get_Current)) int32_t System_Collections_Generic_IEnumerator_System_Int32__Current;

  __declspec(property(get = System_Collections_IEnumerator_get_Current)) ::System::Object* System_Collections_IEnumerator_Current;

  /// @brief Field <>1__state, offset 0x10, size 0x4
  __declspec(property(get = __cordl_internal_get___1__state, put = __cordl_internal_set___1__state)) int32_t __1__state;

  /// @brief Field <>2__current, offset 0x14, size 0x4
  __declspec(property(get = __cordl_internal_get___2__current, put = __cordl_internal_set___2__current)) int32_t __2__current;

  /// @brief Field <>3__id, offset 0x20, size 0x4
  __declspec(property(get = __cordl_internal_get___3__id, put = __cordl_internal_set___3__id)) int32_t __3__id;

  /// @brief Field <>4__this, offset 0x28, size 0x8
  __declspec(property(get = __cordl_internal_get___4__this, put = __cordl_internal_set___4__this)) ::UnityEngine::UIElements::BaseTreeViewController* __4__this;

  /// @brief Field <>l__initialThreadId, offset 0x18, size 0x4
  __declspec(property(get = __cordl_internal_get___l__initialThreadId, put = __cordl_internal_set___l__initialThreadId)) int32_t __l__initialThreadId;

  /// @brief Field <>s__3, offset 0x50, size 0x20
  __declspec(property(get = __cordl_internal_get___s__3, put = __cordl_internal_set___s__3)) ::Unity::Hierarchy::HierarchyNodeChildren_Enumerator __s__3;

  /// @brief Field <nodeById>5__1, offset 0x30, size 0x8
  __declspec(property(get = __cordl_internal_get__nodeById_5__1, put = __cordl_internal_set__nodeById_5__1)) ::Unity::Hierarchy::HierarchyNode _nodeById_5__1;

  /// @brief Field <node>5__4, offset 0x70, size 0x8
  __declspec(property(get = __cordl_internal_get__node_5__4, put = __cordl_internal_set__node_5__4)) ::Unity::Hierarchy::HierarchyNode _node_5__4;

  /// @brief Field <nodes>5__2, offset 0x38, size 0x18
  __declspec(property(get = __cordl_internal_get__nodes_5__2, put = __cordl_internal_set__nodes_5__2)) ::Unity::Hierarchy::HierarchyNodeChildren _nodes_5__2;

  /// @brief Field id, offset 0x1c, size 0x4
  __declspec(property(get = __cordl_internal_get_id, put = __cordl_internal_set_id)) int32_t id;

  /// @brief Convert operator to "::System::Collections::Generic::IEnumerable_1<int32_t>"
  constexpr operator ::System::Collections::Generic::IEnumerable_1<int32_t>*() noexcept;

  /// @brief Convert operator to "::System::Collections::Generic::IEnumerator_1<int32_t>"
  constexpr operator ::System::Collections::Generic::IEnumerator_1<int32_t>*() noexcept;

  /// @brief Convert operator to "::System::Collections::IEnumerable"
  constexpr operator ::System::Collections::IEnumerable*() noexcept;

  /// @brief Convert operator to "::System::Collections::IEnumerator"
  constexpr operator ::System::Collections::IEnumerator*() noexcept;

  /// @brief Convert operator to "::System::IDisposable"
  constexpr operator ::System::IDisposable*() noexcept;

  /// @brief Method MoveNext, addr 0x6a1e084, size 0x27c, virtual true, abstract: false, final true
  inline bool MoveNext();

  static inline ::UnityEngine::UIElements::BaseTreeViewController__GetChildrenIds_d__25* New_ctor(int32_t __1__state);

  /// @brief Method System.Collections.Generic.IEnumerable<System.Int32>.GetEnumerator, addr 0x6a1e364, size 0xa0, virtual true, abstract: false, final true
  inline ::System::Collections::Generic::IEnumerator_1<int32_t>* System_Collections_Generic_IEnumerable_System_Int32__GetEnumerator();

  /// @brief Method System.Collections.Generic.IEnumerator<System.Int32>.get_Current, addr 0x6a1e300, size 0x8, virtual true, abstract: false, final true
  inline int32_t System_Collections_Generic_IEnumerator_System_Int32__get_Current();

  /// @brief Method System.Collections.IEnumerable.GetEnumerator, addr 0x6a1e404, size 0x4, virtual true, abstract: false, final true
  inline ::System::Collections::IEnumerator* System_Collections_IEnumerable_GetEnumerator();

  /// @brief Method System.Collections.IEnumerator.Reset, addr 0x6a1e308, size 0x38, virtual true, abstract: false, final true
  inline void System_Collections_IEnumerator_Reset();

  /// @brief Method System.Collections.IEnumerator.get_Current, addr 0x6a1e340, size 0x24, virtual true, abstract: false, final true
  inline ::System::Object* System_Collections_IEnumerator_get_Current();

  /// @brief Method System.IDisposable.Dispose, addr 0x6a1e080, size 0x4, virtual true, abstract: false, final true
  inline void System_IDisposable_Dispose();

  constexpr int32_t const& __cordl_internal_get___1__state() const;

  constexpr int32_t& __cordl_internal_get___1__state();

  constexpr int32_t const& __cordl_internal_get___2__current() const;

  constexpr int32_t& __cordl_internal_get___2__current();

  constexpr int32_t const& __cordl_internal_get___3__id() const;

  constexpr int32_t& __cordl_internal_get___3__id();

  constexpr ::UnityEngine::UIElements::BaseTreeViewController* const& __cordl_internal_get___4__this() const;

  constexpr ::UnityEngine::UIElements::BaseTreeViewController*& __cordl_internal_get___4__this();

  constexpr int32_t const& __cordl_internal_get___l__initialThreadId() const;

  constexpr int32_t& __cordl_internal_get___l__initialThreadId();

  constexpr ::Unity::Hierarchy::HierarchyNodeChildren_Enumerator const& __cordl_internal_get___s__3() const;

  constexpr ::Unity::Hierarchy::HierarchyNodeChildren_Enumerator& __cordl_internal_get___s__3();

  constexpr ::Unity::Hierarchy::HierarchyNode const& __cordl_internal_get__nodeById_5__1() const;

  constexpr ::Unity::Hierarchy::HierarchyNode& __cordl_internal_get__nodeById_5__1();

  constexpr ::Unity::Hierarchy::HierarchyNode const& __cordl_internal_get__node_5__4() const;

  constexpr ::Unity::Hierarchy::HierarchyNode& __cordl_internal_get__node_5__4();

  constexpr ::Unity::Hierarchy::HierarchyNodeChildren const& __cordl_internal_get__nodes_5__2() const;

  constexpr ::Unity::Hierarchy::HierarchyNodeChildren& __cordl_internal_get__nodes_5__2();

  constexpr int32_t const& __cordl_internal_get_id() const;

  constexpr int32_t& __cordl_internal_get_id();

  constexpr void __cordl_internal_set___1__state(int32_t value);

  constexpr void __cordl_internal_set___2__current(int32_t value);

  constexpr void __cordl_internal_set___3__id(int32_t value);

  constexpr void __cordl_internal_set___4__this(::UnityEngine::UIElements::BaseTreeViewController* value);

  constexpr void __cordl_internal_set___l__initialThreadId(int32_t value);

  constexpr void __cordl_internal_set___s__3(::Unity::Hierarchy::HierarchyNodeChildren_Enumerator value);

  constexpr void __cordl_internal_set__nodeById_5__1(::Unity::Hierarchy::HierarchyNode value);

  constexpr void __cordl_internal_set__node_5__4(::Unity::Hierarchy::HierarchyNode value);

  constexpr void __cordl_internal_set__nodes_5__2(::Unity::Hierarchy::HierarchyNodeChildren value);

  constexpr void __cordl_internal_set_id(int32_t value);

  /// @brief Method .ctor, addr 0x6a1a404, size 0x20, virtual false, abstract: false, final false
  inline void _ctor(int32_t __1__state);

  /// @brief Convert to "::System::Collections::Generic::IEnumerable_1<int32_t>"
  constexpr ::System::Collections::Generic::IEnumerable_1<int32_t>* i___System__Collections__Generic__IEnumerable_1_int32_t_() noexcept;

  /// @brief Convert to "::System::Collections::Generic::IEnumerator_1<int32_t>"
  constexpr ::System::Collections::Generic::IEnumerator_1<int32_t>* i___System__Collections__Generic__IEnumerator_1_int32_t_() noexcept;

  /// @brief Convert to "::System::Collections::IEnumerable"
  constexpr ::System::Collections::IEnumerable* i___System__Collections__IEnumerable() noexcept;

  /// @brief Convert to "::System::Collections::IEnumerator"
  constexpr ::System::Collections::IEnumerator* i___System__Collections__IEnumerator() noexcept;

  /// @brief Convert to "::System::IDisposable"
  constexpr ::System::IDisposable* i___System__IDisposable() noexcept;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr BaseTreeViewController__GetChildrenIds_d__25();

public:
  // Ctor Parameters [CppParam { name: "", ty: "BaseTreeViewController__GetChildrenIds_d__25", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  BaseTreeViewController__GetChildrenIds_d__25(BaseTreeViewController__GetChildrenIds_d__25&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "BaseTreeViewController__GetChildrenIds_d__25", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  BaseTreeViewController__GetChildrenIds_d__25(BaseTreeViewController__GetChildrenIds_d__25 const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 4076 };

  /// @brief Field <>1__state, offset: 0x10, size: 0x4, def value: None
  int32_t _____1__state;

  /// @brief Field <>2__current, offset: 0x14, size: 0x4, def value: None
  int32_t _____2__current;

  /// @brief Field <>l__initialThreadId, offset: 0x18, size: 0x4, def value: None
  int32_t _____l__initialThreadId;

  /// @brief Field id, offset: 0x1c, size: 0x4, def value: None
  int32_t ___id;

  /// @brief Field <>3__id, offset: 0x20, size: 0x4, def value: None
  int32_t _____3__id;

  /// @brief Field <>4__this, offset: 0x28, size: 0x8, def value: None
  ::UnityEngine::UIElements::BaseTreeViewController* _____4__this;

  /// @brief Field <nodeById>5__1, offset: 0x30, size: 0x8, def value: None
  ::Unity::Hierarchy::HierarchyNode ____nodeById_5__1;

  /// @brief Field <nodes>5__2, offset: 0x38, size: 0x18, def value: None
  ::Unity::Hierarchy::HierarchyNodeChildren ____nodes_5__2;

  /// @brief Field <>s__3, offset: 0x50, size: 0x20, def value: None
  ::Unity::Hierarchy::HierarchyNodeChildren_Enumerator _____s__3;

  /// @brief Field <node>5__4, offset: 0x70, size: 0x8, def value: None
  ::Unity::Hierarchy::HierarchyNode ____node_5__4;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::UIElements::BaseTreeViewController__GetChildrenIds_d__25, _____1__state) == 0x10, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::BaseTreeViewController__GetChildrenIds_d__25, _____2__current) == 0x14, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::BaseTreeViewController__GetChildrenIds_d__25, _____l__initialThreadId) == 0x18, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::BaseTreeViewController__GetChildrenIds_d__25, ___id) == 0x1c, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::BaseTreeViewController__GetChildrenIds_d__25, _____3__id) == 0x20, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::BaseTreeViewController__GetChildrenIds_d__25, _____4__this) == 0x28, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::BaseTreeViewController__GetChildrenIds_d__25, ____nodeById_5__1) == 0x30, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::BaseTreeViewController__GetChildrenIds_d__25, ____nodes_5__2) == 0x38, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::BaseTreeViewController__GetChildrenIds_d__25, _____s__3) == 0x50, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::BaseTreeViewController__GetChildrenIds_d__25, ____node_5__4) == 0x70, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::UnityEngine::UIElements::BaseTreeViewController__GetChildrenIds_d__25, 0x78>, "Size mismatch!");

} // namespace UnityEngine::UIElements
// Dependencies System.Object, Unity.Hierarchy.HierarchyNode, Unity.Hierarchy.HierarchyNodeChildren, Unity.Hierarchy.HierarchyNodeChildren::Enumerator
namespace UnityEngine::UIElements {
// Is value type: false
// CS Name: UnityEngine.UIElements.BaseTreeViewController/<GetChildrenIdsByIndex>d__41
class CORDL_TYPE BaseTreeViewController__GetChildrenIdsByIndex_d__41 : public ::System::Object {
public:
  // Declarations
  __declspec(property(get = System_Collections_Generic_IEnumerator_System_Int32__get_Current)) int32_t System_Collections_Generic_IEnumerator_System_Int32__Current;

  __declspec(property(get = System_Collections_IEnumerator_get_Current)) ::System::Object* System_Collections_IEnumerator_Current;

  /// @brief Field <>1__state, offset 0x10, size 0x4
  __declspec(property(get = __cordl_internal_get___1__state, put = __cordl_internal_set___1__state)) int32_t __1__state;

  /// @brief Field <>2__current, offset 0x14, size 0x4
  __declspec(property(get = __cordl_internal_get___2__current, put = __cordl_internal_set___2__current)) int32_t __2__current;

  /// @brief Field <>3__index, offset 0x20, size 0x4
  __declspec(property(get = __cordl_internal_get___3__index, put = __cordl_internal_set___3__index)) int32_t __3__index;

  /// @brief Field <>4__this, offset 0x28, size 0x8
  __declspec(property(get = __cordl_internal_get___4__this, put = __cordl_internal_set___4__this)) ::UnityEngine::UIElements::BaseTreeViewController* __4__this;

  /// @brief Field <>l__initialThreadId, offset 0x18, size 0x4
  __declspec(property(get = __cordl_internal_get___l__initialThreadId, put = __cordl_internal_set___l__initialThreadId)) int32_t __l__initialThreadId;

  /// @brief Field <>s__2, offset 0x48, size 0x20
  __declspec(property(get = __cordl_internal_get___s__2, put = __cordl_internal_set___s__2)) ::Unity::Hierarchy::HierarchyNodeChildren_Enumerator __s__2;

  /// @brief Field <node>5__3, offset 0x68, size 0x8
  __declspec(property(get = __cordl_internal_get__node_5__3, put = __cordl_internal_set__node_5__3)) ::Unity::Hierarchy::HierarchyNode _node_5__3;

  /// @brief Field <nodes>5__1, offset 0x30, size 0x18
  __declspec(property(get = __cordl_internal_get__nodes_5__1, put = __cordl_internal_set__nodes_5__1)) ::Unity::Hierarchy::HierarchyNodeChildren _nodes_5__1;

  /// @brief Field index, offset 0x1c, size 0x4
  __declspec(property(get = __cordl_internal_get_index, put = __cordl_internal_set_index)) int32_t index;

  /// @brief Convert operator to "::System::Collections::Generic::IEnumerable_1<int32_t>"
  constexpr operator ::System::Collections::Generic::IEnumerable_1<int32_t>*() noexcept;

  /// @brief Convert operator to "::System::Collections::Generic::IEnumerator_1<int32_t>"
  constexpr operator ::System::Collections::Generic::IEnumerator_1<int32_t>*() noexcept;

  /// @brief Convert operator to "::System::Collections::IEnumerable"
  constexpr operator ::System::Collections::IEnumerable*() noexcept;

  /// @brief Convert operator to "::System::Collections::IEnumerator"
  constexpr operator ::System::Collections::IEnumerator*() noexcept;

  /// @brief Convert operator to "::System::IDisposable"
  constexpr operator ::System::IDisposable*() noexcept;

  /// @brief Method MoveNext, addr 0x6a1e40c, size 0x210, virtual true, abstract: false, final true
  inline bool MoveNext();

  static inline ::UnityEngine::UIElements::BaseTreeViewController__GetChildrenIdsByIndex_d__41* New_ctor(int32_t __1__state);

  /// @brief Method System.Collections.Generic.IEnumerable<System.Int32>.GetEnumerator, addr 0x6a1e680, size 0xa0, virtual true, abstract: false, final true
  inline ::System::Collections::Generic::IEnumerator_1<int32_t>* System_Collections_Generic_IEnumerable_System_Int32__GetEnumerator();

  /// @brief Method System.Collections.Generic.IEnumerator<System.Int32>.get_Current, addr 0x6a1e61c, size 0x8, virtual true, abstract: false, final true
  inline int32_t System_Collections_Generic_IEnumerator_System_Int32__get_Current();

  /// @brief Method System.Collections.IEnumerable.GetEnumerator, addr 0x6a1e720, size 0x4, virtual true, abstract: false, final true
  inline ::System::Collections::IEnumerator* System_Collections_IEnumerable_GetEnumerator();

  /// @brief Method System.Collections.IEnumerator.Reset, addr 0x6a1e624, size 0x38, virtual true, abstract: false, final true
  inline void System_Collections_IEnumerator_Reset();

  /// @brief Method System.Collections.IEnumerator.get_Current, addr 0x6a1e65c, size 0x24, virtual true, abstract: false, final true
  inline ::System::Object* System_Collections_IEnumerator_get_Current();

  /// @brief Method System.IDisposable.Dispose, addr 0x6a1e408, size 0x4, virtual true, abstract: false, final true
  inline void System_IDisposable_Dispose();

  constexpr int32_t const& __cordl_internal_get___1__state() const;

  constexpr int32_t& __cordl_internal_get___1__state();

  constexpr int32_t const& __cordl_internal_get___2__current() const;

  constexpr int32_t& __cordl_internal_get___2__current();

  constexpr int32_t const& __cordl_internal_get___3__index() const;

  constexpr int32_t& __cordl_internal_get___3__index();

  constexpr ::UnityEngine::UIElements::BaseTreeViewController* const& __cordl_internal_get___4__this() const;

  constexpr ::UnityEngine::UIElements::BaseTreeViewController*& __cordl_internal_get___4__this();

  constexpr int32_t const& __cordl_internal_get___l__initialThreadId() const;

  constexpr int32_t& __cordl_internal_get___l__initialThreadId();

  constexpr ::Unity::Hierarchy::HierarchyNodeChildren_Enumerator const& __cordl_internal_get___s__2() const;

  constexpr ::Unity::Hierarchy::HierarchyNodeChildren_Enumerator& __cordl_internal_get___s__2();

  constexpr ::Unity::Hierarchy::HierarchyNode const& __cordl_internal_get__node_5__3() const;

  constexpr ::Unity::Hierarchy::HierarchyNode& __cordl_internal_get__node_5__3();

  constexpr ::Unity::Hierarchy::HierarchyNodeChildren const& __cordl_internal_get__nodes_5__1() const;

  constexpr ::Unity::Hierarchy::HierarchyNodeChildren& __cordl_internal_get__nodes_5__1();

  constexpr int32_t const& __cordl_internal_get_index() const;

  constexpr int32_t& __cordl_internal_get_index();

  constexpr void __cordl_internal_set___1__state(int32_t value);

  constexpr void __cordl_internal_set___2__current(int32_t value);

  constexpr void __cordl_internal_set___3__index(int32_t value);

  constexpr void __cordl_internal_set___4__this(::UnityEngine::UIElements::BaseTreeViewController* value);

  constexpr void __cordl_internal_set___l__initialThreadId(int32_t value);

  constexpr void __cordl_internal_set___s__2(::Unity::Hierarchy::HierarchyNodeChildren_Enumerator value);

  constexpr void __cordl_internal_set__node_5__3(::Unity::Hierarchy::HierarchyNode value);

  constexpr void __cordl_internal_set__nodes_5__1(::Unity::Hierarchy::HierarchyNodeChildren value);

  constexpr void __cordl_internal_set_index(int32_t value);

  /// @brief Method .ctor, addr 0x6a1c3f0, size 0x20, virtual false, abstract: false, final false
  inline void _ctor(int32_t __1__state);

  /// @brief Convert to "::System::Collections::Generic::IEnumerable_1<int32_t>"
  constexpr ::System::Collections::Generic::IEnumerable_1<int32_t>* i___System__Collections__Generic__IEnumerable_1_int32_t_() noexcept;

  /// @brief Convert to "::System::Collections::Generic::IEnumerator_1<int32_t>"
  constexpr ::System::Collections::Generic::IEnumerator_1<int32_t>* i___System__Collections__Generic__IEnumerator_1_int32_t_() noexcept;

  /// @brief Convert to "::System::Collections::IEnumerable"
  constexpr ::System::Collections::IEnumerable* i___System__Collections__IEnumerable() noexcept;

  /// @brief Convert to "::System::Collections::IEnumerator"
  constexpr ::System::Collections::IEnumerator* i___System__Collections__IEnumerator() noexcept;

  /// @brief Convert to "::System::IDisposable"
  constexpr ::System::IDisposable* i___System__IDisposable() noexcept;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr BaseTreeViewController__GetChildrenIdsByIndex_d__41();

public:
  // Ctor Parameters [CppParam { name: "", ty: "BaseTreeViewController__GetChildrenIdsByIndex_d__41", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  BaseTreeViewController__GetChildrenIdsByIndex_d__41(BaseTreeViewController__GetChildrenIdsByIndex_d__41&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "BaseTreeViewController__GetChildrenIdsByIndex_d__41", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  BaseTreeViewController__GetChildrenIdsByIndex_d__41(BaseTreeViewController__GetChildrenIdsByIndex_d__41 const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 4077 };

  /// @brief Field <>1__state, offset: 0x10, size: 0x4, def value: None
  int32_t _____1__state;

  /// @brief Field <>2__current, offset: 0x14, size: 0x4, def value: None
  int32_t _____2__current;

  /// @brief Field <>l__initialThreadId, offset: 0x18, size: 0x4, def value: None
  int32_t _____l__initialThreadId;

  /// @brief Field index, offset: 0x1c, size: 0x4, def value: None
  int32_t ___index;

  /// @brief Field <>3__index, offset: 0x20, size: 0x4, def value: None
  int32_t _____3__index;

  /// @brief Field <>4__this, offset: 0x28, size: 0x8, def value: None
  ::UnityEngine::UIElements::BaseTreeViewController* _____4__this;

  /// @brief Field <nodes>5__1, offset: 0x30, size: 0x18, def value: None
  ::Unity::Hierarchy::HierarchyNodeChildren ____nodes_5__1;

  /// @brief Field <>s__2, offset: 0x48, size: 0x20, def value: None
  ::Unity::Hierarchy::HierarchyNodeChildren_Enumerator _____s__2;

  /// @brief Field <node>5__3, offset: 0x68, size: 0x8, def value: None
  ::Unity::Hierarchy::HierarchyNode ____node_5__3;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::UIElements::BaseTreeViewController__GetChildrenIdsByIndex_d__41, _____1__state) == 0x10, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::BaseTreeViewController__GetChildrenIdsByIndex_d__41, _____2__current) == 0x14, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::BaseTreeViewController__GetChildrenIdsByIndex_d__41, _____l__initialThreadId) == 0x18, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::BaseTreeViewController__GetChildrenIdsByIndex_d__41, ___index) == 0x1c, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::BaseTreeViewController__GetChildrenIdsByIndex_d__41, _____3__index) == 0x20, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::BaseTreeViewController__GetChildrenIdsByIndex_d__41, _____4__this) == 0x28, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::BaseTreeViewController__GetChildrenIdsByIndex_d__41, ____nodes_5__1) == 0x30, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::BaseTreeViewController__GetChildrenIdsByIndex_d__41, _____s__2) == 0x48, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::BaseTreeViewController__GetChildrenIdsByIndex_d__41, ____node_5__3) == 0x68, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::UnityEngine::UIElements::BaseTreeViewController__GetChildrenIdsByIndex_d__41, 0x70>, "Size mismatch!");

} // namespace UnityEngine::UIElements
// Dependencies Unity.Profiling.ProfilerMarker, UnityEngine.UIElements.CollectionViewController
namespace UnityEngine::UIElements {
// Is value type: false
// CS Name: UnityEngine.UIElements.BaseTreeViewController
class CORDL_TYPE BaseTreeViewController : public ::UnityEngine::UIElements::CollectionViewController {
public:
  // Declarations
  using _GetAllItemIds_d__23 = ::UnityEngine::UIElements::BaseTreeViewController__GetAllItemIds_d__23;

  using _GetChildrenIdsByIndex_d__41 = ::UnityEngine::UIElements::BaseTreeViewController__GetChildrenIdsByIndex_d__41;

  using _GetChildrenIds_d__25 = ::UnityEngine::UIElements::BaseTreeViewController__GetChildrenIds_d__25;

  /// @brief Field K_ExpandItemByIndex, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF_K_ExpandItemByIndex, put = setStaticF_K_ExpandItemByIndex)) ::Unity::Profiling::ProfilerMarker K_ExpandItemByIndex;

  __declspec(property(get = get_baseTreeView)) ::UnityEngine::UIElements::BaseTreeView* baseTreeView;

  __declspec(property(get = get_hierarchy, put = set_hierarchy)) ::Unity::Hierarchy::Hierarchy* hierarchy;

  /// @brief Field itemExpandedChanged, offset 0x60, size 0x8
  __declspec(property(get = __cordl_internal_get_itemExpandedChanged,
                      put = __cordl_internal_set_itemExpandedChanged)) ::System::Action_1<::UnityEngine::UIElements::TreeViewExpansionChangedArgs*>* itemExpandedChanged;

  __declspec(property(get = get_itemsSource, put = set_itemsSource)) ::System::Collections::IList* itemsSource;

  /// @brief Field m_Hierarchy, offset 0x30, size 0x8
  __declspec(property(get = __cordl_internal_get_m_Hierarchy, put = __cordl_internal_set_m_Hierarchy)) ::Unity::Hierarchy::Hierarchy* m_Hierarchy;

  /// @brief Field m_HierarchyFlattened, offset 0x38, size 0x8
  __declspec(property(get = __cordl_internal_get_m_HierarchyFlattened, put = __cordl_internal_set_m_HierarchyFlattened)) ::Unity::Hierarchy::HierarchyFlattened* m_HierarchyFlattened;

  /// @brief Field m_HierarchyHasPendingChanged, offset 0x58, size 0x1
  __declspec(property(get = __cordl_internal_get_m_HierarchyHasPendingChanged, put = __cordl_internal_set_m_HierarchyHasPendingChanged)) bool m_HierarchyHasPendingChanged;

  /// @brief Field m_HierarchyViewModel, offset 0x40, size 0x8
  __declspec(property(get = __cordl_internal_get_m_HierarchyViewModel, put = __cordl_internal_set_m_HierarchyViewModel)) ::Unity::Hierarchy::HierarchyViewModel* m_HierarchyViewModel;

  /// @brief Field m_IdToNodeDictionary, offset 0x48, size 0x8
  __declspec(property(get = __cordl_internal_get_m_IdToNodeDictionary,
                      put = __cordl_internal_set_m_IdToNodeDictionary)) ::System::Collections::Generic::Dictionary_2<int32_t, ::Unity::Hierarchy::HierarchyNode>* m_IdToNodeDictionary;

  /// @brief Field m_TreeViewDataProperty, offset 0x50, size 0x8
  __declspec(property(get = __cordl_internal_get_m_TreeViewDataProperty, put = __cordl_internal_set_m_TreeViewDataProperty)) ::Unity::Hierarchy::IHierarchyProperty_1<int32_t>* m_TreeViewDataProperty;

  /// @brief Method CanChangeExpandedState, addr 0x6a1c4cc, size 0x8, virtual true, abstract: false, final false
  inline bool CanChangeExpandedState(int32_t id);

  /// @brief Method ClearIdToNodeDictionary, addr 0x6a1d5f0, size 0x54, virtual false, abstract: false, final false
  inline void ClearIdToNodeDictionary();

  /// @brief Method CollapseItem, addr 0x6a1d06c, size 0xd0, virtual false, abstract: false, final false
  inline void CollapseItem(int32_t id, bool collapseAllChildren, bool refresh);

  /// @brief Method CollapseItemByIndex, addr 0x6a1be6c, size 0x6c, virtual false, abstract: false, final false
  inline void CollapseItemByIndex(int32_t index, bool collapseAllChildren, bool refresh);

  /// @brief Method CollapseItemByNode, addr 0x6a1cc00, size 0x46c, virtual false, abstract: false, final false
  inline void CollapseItemByNode(::ByRef<::Unity::Hierarchy::HierarchyNode> node, bool collapseAllChildren, bool refresh);

  /// @brief Method CreateNode, addr 0x6a1d3f4, size 0xb0, virtual false, abstract: false, final false
  inline ::Unity::Hierarchy::HierarchyNode CreateNode(::ByRef<::Unity::Hierarchy::HierarchyNode> parent);

  /// @brief Method DisposeHierarchy, addr 0x6a19fc8, size 0x64, virtual false, abstract: false, final false
  inline void DisposeHierarchy();

  /// @brief Method Exists, addr 0x6a1c374, size 0x7c, virtual false, abstract: false, final false
  inline bool Exists(int32_t id);

  /// @brief Method ExpandItem, addr 0x6a1cb30, size 0xd0, virtual false, abstract: false, final false
  inline void ExpandItem(int32_t id, bool expandAllChildren, bool refresh);

  /// @brief Method ExpandItemByIndex, addr 0x6a1bed8, size 0x198, virtual false, abstract: false, final false
  inline void ExpandItemByIndex(int32_t index, bool expandAllChildren, bool refresh);

  /// @brief Method ExpandItemByNode, addr 0x6a1c5dc, size 0x554, virtual false, abstract: false, final false
  inline void ExpandItemByNode(::ByRef<::Unity::Hierarchy::HierarchyNode> node, bool expandAllChildren, bool refresh);

  /// @brief Method Finalize, addr 0x6a19f84, size 0x44, virtual true, abstract: false, final false
  inline void Finalize();

  /// @brief Method GetAllItemIds, addr 0x6a1a088, size 0x78, virtual true, abstract: false, final false
  inline ::System::Collections::Generic::IEnumerable_1<int32_t>* GetAllItemIds(::System::Collections::Generic::IEnumerable_1<int32_t>* rootIds);

  /// @brief Method GetChildIndexForId, addr 0x6a1a70c, size 0x200, virtual false, abstract: false, final false
  inline int32_t GetChildIndexForId(int32_t id);

  /// @brief Method GetChildrenIds, addr 0x6a1a388, size 0x7c, virtual true, abstract: false, final false
  inline ::System::Collections::Generic::IEnumerable_1<int32_t>* GetChildrenIds(int32_t id);

  /// @brief Method GetChildrenIdsByIndex, addr 0x6a1baf4, size 0x7c, virtual false, abstract: false, final false
  inline ::System::Collections::Generic::IEnumerable_1<int32_t>* GetChildrenIdsByIndex(int32_t index);

  /// @brief Method GetExpandedItemIds, addr 0x6a1d13c, size 0x2a8, virtual false, abstract: false, final false
  inline void GetExpandedItemIds(::System::Collections::Generic::List_1<int32_t>* list);

  /// @brief Method GetHierarchyNodeById, addr 0x6a1a2d8, size 0xb0, virtual false, abstract: false, final false
  inline ::Unity::Hierarchy::HierarchyNode GetHierarchyNodeById(int32_t id);

  /// @brief Method GetHierarchyNodeByIndex, addr 0x6a1bb70, size 0x74, virtual false, abstract: false, final false
  inline ::Unity::Hierarchy::HierarchyNode GetHierarchyNodeByIndex(int32_t index);

  /// @brief Method GetIdForIndex, addr 0x6a1c130, size 0x180, virtual true, abstract: false, final false
  inline int32_t GetIdForIndex(int32_t index);

  /// @brief Method GetIndentationDepth, addr 0x6a1c410, size 0xbc, virtual false, abstract: false, final false
  inline int32_t GetIndentationDepth(int32_t id);

  /// @brief Method GetIndentationDepthByIndex, addr 0x6a1ae18, size 0x24, virtual false, abstract: false, final false
  inline int32_t GetIndentationDepthByIndex(int32_t index);

  /// @brief Method GetIndexForId, addr 0x6a1c070, size 0xc0, virtual true, abstract: false, final false
  inline int32_t GetIndexForId(int32_t id);

  /// @brief Method GetParentId, addr 0x6a1a120, size 0x1b8, virtual true, abstract: false, final false
  inline int32_t GetParentId(int32_t id);

  /// @brief Method HasChildren, addr 0x6a1c2dc, size 0x98, virtual true, abstract: false, final false
  inline bool HasChildren(int32_t id);

  /// @brief Method HasChildrenByIndex, addr 0x6a1aec0, size 0x54, virtual false, abstract: false, final false
  inline bool HasChildrenByIndex(int32_t index);

  /// @brief Method InvokeBindItem, addr 0x6a1ad04, size 0x114, virtual true, abstract: false, final false
  inline void InvokeBindItem(::UnityEngine::UIElements::ReusableCollectionItem* reusableItem, int32_t index);

  /// @brief Method InvokeDestroyItem, addr 0x6a1af2c, size 0x148, virtual true, abstract: false, final false
  inline void InvokeDestroyItem(::UnityEngine::UIElements::ReusableCollectionItem* reusableItem);

  /// @brief Method InvokeMakeItem, addr 0x6a1ab58, size 0xc0, virtual true, abstract: false, final false
  inline void InvokeMakeItem(::UnityEngine::UIElements::ReusableCollectionItem* reusableItem);

  /// @brief Method IsChildOf, addr 0x6a1a5c4, size 0x148, virtual false, abstract: false, final false
  inline bool IsChildOf(int32_t childId, int32_t id);

  /// @brief Method IsExpanded, addr 0x6a1c4d4, size 0x108, virtual false, abstract: false, final false
  inline bool IsExpanded(int32_t id);

  /// @brief Method IsExpandedByIndex, addr 0x6a1ae50, size 0x50, virtual false, abstract: false, final false
  inline bool IsExpandedByIndex(int32_t index);

  /// @brief Method IsIndexValid, addr 0x6a1c2b0, size 0x2c, virtual false, abstract: false, final false
  inline bool IsIndexValid(int32_t index);

  /// @brief Method IsViewDataKeyEnabled, addr 0x6a1baa8, size 0x4c, virtual false, abstract: false, final false
  inline bool IsViewDataKeyEnabled();

  /// @brief Method Move, addr 0x6a1a424, size 0x1a0, virtual true, abstract: false, final false
  inline void Move(int32_t id, int32_t newParentId, int32_t childIndex, bool rebuildTree);

  static inline ::UnityEngine::UIElements::BaseTreeViewController* New_ctor();

  /// @brief Method OnItemPointerUp, addr 0x6a1b394, size 0x714, virtual false, abstract: false, final false
  inline void OnItemPointerUp(::UnityEngine::UIElements::PointerUpEvent* evt);

  /// @brief Method OnToggleValueChanged, addr 0x6a1bd18, size 0x154, virtual false, abstract: false, final false
  inline void OnToggleValueChanged(::UnityEngine::UIElements::ChangeEvent_1<bool>* evt);

  /// @brief Method OnViewDataReadyUpdateNodes, addr 0x6a1d644, size 0x168, virtual false, abstract: false, final false
  inline void OnViewDataReadyUpdateNodes();

  /// @brief Method PostInitRegistration, addr 0x6a1ac18, size 0xec, virtual false, abstract: false, final false
  inline void PostInitRegistration(::UnityEngine::UIElements::ReusableTreeViewItem* treeItem);

  /// @brief Method PreRefresh, addr 0x6a1d3e4, size 0x10, virtual true, abstract: false, final false
  inline void PreRefresh();

  /// @brief Method RaiseItemExpandedChanged, addr 0x6a1bc68, size 0xb0, virtual false, abstract: false, final false
  inline void RaiseItemExpandedChanged(int32_t id, bool isExpanded, bool isAppliedToAllChildren);

  /// @brief Method RaiseItemParentChanged, addr 0x6a1ab3c, size 0x1c, virtual false, abstract: false, final false
  inline void RaiseItemParentChanged(int32_t id, int32_t newParentId);

  /// @brief Method UpdateHierarchy, addr 0x6a1bbe4, size 0x84, virtual false, abstract: false, final false
  inline void UpdateHierarchy();

  /// @brief Method UpdateIdToNodeDictionary, addr 0x6a1d4a4, size 0x14c, virtual false, abstract: false, final false
  inline void UpdateIdToNodeDictionary(int32_t id, ::ByRef<::Unity::Hierarchy::HierarchyNode> node, bool isAdd);

  /// @brief Method UpdateSortOrder, addr 0x6a1a90c, size 0x230, virtual false, abstract: false, final false
  inline void UpdateSortOrder(::ByRef<::Unity::Hierarchy::HierarchyNode> newParent, ::ByRef<::Unity::Hierarchy::HierarchyNode> insertedNode, int32_t insertedIndex);

  constexpr ::System::Action_1<::UnityEngine::UIElements::TreeViewExpansionChangedArgs*>* const& __cordl_internal_get_itemExpandedChanged() const;

  constexpr ::System::Action_1<::UnityEngine::UIElements::TreeViewExpansionChangedArgs*>*& __cordl_internal_get_itemExpandedChanged();

  constexpr ::Unity::Hierarchy::Hierarchy* const& __cordl_internal_get_m_Hierarchy() const;

  constexpr ::Unity::Hierarchy::Hierarchy*& __cordl_internal_get_m_Hierarchy();

  constexpr ::Unity::Hierarchy::HierarchyFlattened* const& __cordl_internal_get_m_HierarchyFlattened() const;

  constexpr ::Unity::Hierarchy::HierarchyFlattened*& __cordl_internal_get_m_HierarchyFlattened();

  constexpr bool const& __cordl_internal_get_m_HierarchyHasPendingChanged() const;

  constexpr bool& __cordl_internal_get_m_HierarchyHasPendingChanged();

  constexpr ::Unity::Hierarchy::HierarchyViewModel* const& __cordl_internal_get_m_HierarchyViewModel() const;

  constexpr ::Unity::Hierarchy::HierarchyViewModel*& __cordl_internal_get_m_HierarchyViewModel();

  constexpr ::System::Collections::Generic::Dictionary_2<int32_t, ::Unity::Hierarchy::HierarchyNode>* const& __cordl_internal_get_m_IdToNodeDictionary() const;

  constexpr ::System::Collections::Generic::Dictionary_2<int32_t, ::Unity::Hierarchy::HierarchyNode>*& __cordl_internal_get_m_IdToNodeDictionary();

  constexpr ::Unity::Hierarchy::IHierarchyProperty_1<int32_t>* const& __cordl_internal_get_m_TreeViewDataProperty() const;

  constexpr ::Unity::Hierarchy::IHierarchyProperty_1<int32_t>*& __cordl_internal_get_m_TreeViewDataProperty();

  constexpr void __cordl_internal_set_itemExpandedChanged(::System::Action_1<::UnityEngine::UIElements::TreeViewExpansionChangedArgs*>* value);

  constexpr void __cordl_internal_set_m_Hierarchy(::Unity::Hierarchy::Hierarchy* value);

  constexpr void __cordl_internal_set_m_HierarchyFlattened(::Unity::Hierarchy::HierarchyFlattened* value);

  constexpr void __cordl_internal_set_m_HierarchyHasPendingChanged(bool value);

  constexpr void __cordl_internal_set_m_HierarchyViewModel(::Unity::Hierarchy::HierarchyViewModel* value);

  constexpr void __cordl_internal_set_m_IdToNodeDictionary(::System::Collections::Generic::Dictionary_2<int32_t, ::Unity::Hierarchy::HierarchyNode>* value);

  constexpr void __cordl_internal_set_m_TreeViewDataProperty(::Unity::Hierarchy::IHierarchyProperty_1<int32_t>* value);

  /// @brief Method .ctor, addr 0x6a19d74, size 0xcc, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method add_itemExpandedChanged, addr 0x6a19bf4, size 0xc0, virtual false, abstract: false, final false
  inline void add_itemExpandedChanged(::System::Action_1<::UnityEngine::UIElements::TreeViewExpansionChangedArgs*>* value);

  static inline ::Unity::Profiling::ProfilerMarker getStaticF_K_ExpandItemByIndex();

  /// @brief Method get_baseTreeView, addr 0x6a19b74, size 0x80, virtual false, abstract: false, final false
  inline ::UnityEngine::UIElements::BaseTreeView* get_baseTreeView();

  /// @brief Method get_hierarchy, addr 0x6a1a02c, size 0x8, virtual false, abstract: false, final false
  inline ::Unity::Hierarchy::Hierarchy* get_hierarchy();

  /// @brief Method get_itemsSource, addr 0x6a1a034, size 0x8, virtual true, abstract: false, final false
  inline ::System::Collections::IList* get_itemsSource();

  /// @brief Method remove_itemExpandedChanged, addr 0x6a19cb4, size 0xc0, virtual false, abstract: false, final false
  inline void remove_itemExpandedChanged(::System::Action_1<::UnityEngine::UIElements::TreeViewExpansionChangedArgs*>* value);

  static inline void setStaticF_K_ExpandItemByIndex(::Unity::Profiling::ProfilerMarker value);

  /// @brief Method set_hierarchy, addr 0x6a19e40, size 0x144, virtual false, abstract: false, final false
  inline void set_hierarchy(::Unity::Hierarchy::Hierarchy* value);

  /// @brief Method set_itemsSource, addr 0x6a1a03c, size 0x4c, virtual true, abstract: false, final false
  inline void set_itemsSource(::System::Collections::IList* value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr BaseTreeViewController();

public:
  // Ctor Parameters [CppParam { name: "", ty: "BaseTreeViewController", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  BaseTreeViewController(BaseTreeViewController&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "BaseTreeViewController", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  BaseTreeViewController(BaseTreeViewController const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 4078 };

  /// @brief Field m_Hierarchy, offset: 0x30, size: 0x8, def value: None
  ::Unity::Hierarchy::Hierarchy* ___m_Hierarchy;

  /// @brief Field m_HierarchyFlattened, offset: 0x38, size: 0x8, def value: None
  ::Unity::Hierarchy::HierarchyFlattened* ___m_HierarchyFlattened;

  /// @brief Field m_HierarchyViewModel, offset: 0x40, size: 0x8, def value: None
  ::Unity::Hierarchy::HierarchyViewModel* ___m_HierarchyViewModel;

  /// @brief Field m_IdToNodeDictionary, offset: 0x48, size: 0x8, def value: None
  ::System::Collections::Generic::Dictionary_2<int32_t, ::Unity::Hierarchy::HierarchyNode>* ___m_IdToNodeDictionary;

  /// @brief Field m_TreeViewDataProperty, offset: 0x50, size: 0x8, def value: None
  ::Unity::Hierarchy::IHierarchyProperty_1<int32_t>* ___m_TreeViewDataProperty;

  /// @brief Field m_HierarchyHasPendingChanged, offset: 0x58, size: 0x1, def value: None
  bool ___m_HierarchyHasPendingChanged;

  /// @brief Field itemExpandedChanged, offset: 0x60, size: 0x8, def value: None
  ::System::Action_1<::UnityEngine::UIElements::TreeViewExpansionChangedArgs*>* ___itemExpandedChanged;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::UIElements::BaseTreeViewController, ___m_Hierarchy) == 0x30, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::BaseTreeViewController, ___m_HierarchyFlattened) == 0x38, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::BaseTreeViewController, ___m_HierarchyViewModel) == 0x40, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::BaseTreeViewController, ___m_IdToNodeDictionary) == 0x48, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::BaseTreeViewController, ___m_TreeViewDataProperty) == 0x50, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::BaseTreeViewController, ___m_HierarchyHasPendingChanged) == 0x58, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::BaseTreeViewController, ___itemExpandedChanged) == 0x60, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::UnityEngine::UIElements::BaseTreeViewController, 0x68>, "Size mismatch!");

} // namespace UnityEngine::UIElements
NEED_NO_BOX(::UnityEngine::UIElements::BaseTreeViewController);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::UIElements::BaseTreeViewController*, "UnityEngine.UIElements", "BaseTreeViewController");
NEED_NO_BOX(::UnityEngine::UIElements::BaseTreeViewController__GetAllItemIds_d__23);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::UIElements::BaseTreeViewController__GetAllItemIds_d__23*, "UnityEngine.UIElements", "BaseTreeViewController/<GetAllItemIds>d__23");
NEED_NO_BOX(::UnityEngine::UIElements::BaseTreeViewController__GetChildrenIdsByIndex_d__41);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::UIElements::BaseTreeViewController__GetChildrenIdsByIndex_d__41*, "UnityEngine.UIElements", "BaseTreeViewController/<GetChildrenIdsByIndex>d__41");
NEED_NO_BOX(::UnityEngine::UIElements::BaseTreeViewController__GetChildrenIds_d__25);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::UIElements::BaseTreeViewController__GetChildrenIds_d__25*, "UnityEngine.UIElements", "BaseTreeViewController/<GetChildrenIds>d__25");
