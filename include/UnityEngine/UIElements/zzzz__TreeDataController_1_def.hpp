#pragma once
// IWYU pragma private; include "UnityEngine/UIElements/TreeDataController_1.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/Collections/Generic/zzzz__IEnumerable_1_def.hpp"
#include "System/Collections/Generic/zzzz__IEnumerator_1_def.hpp"
#include "System/Collections/zzzz__IEnumerable_def.hpp"
#include "System/Collections/zzzz__IEnumerator_def.hpp"
#include "System/zzzz__IDisposable_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "UnityEngine/UIElements/zzzz__TreeData_1_def.hpp"
#include "UnityEngine/UIElements/zzzz__TreeViewItemData_1_def.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(TreeDataController_1)
namespace System::Collections::Generic {
template <typename T> class IEnumerable_1;
}
namespace System::Collections::Generic {
template <typename T> class IEnumerator_1;
}
namespace System::Collections::Generic {
template <typename T> class IList_1;
}
namespace System::Collections::Generic {
template <typename T> class Stack_1;
}
namespace System::Collections {
class IEnumerator;
}
namespace System {
class Object;
}
namespace UnityEngine::UIElements {
template <typename T> class TreeDataController_1__GetAllItemIds_d__13;
}
namespace UnityEngine::UIElements {
template <typename T> class TreeDataController_1__GetItemIds_d__9;
}
namespace UnityEngine::UIElements {
template <typename T> struct TreeViewItemData_1;
}
// Forward declare root types
namespace UnityEngine::UIElements {
template <typename T> class TreeDataController_1;
}
namespace UnityEngine::UIElements {
template <typename T> class TreeDataController_1__GetAllItemIds_d__13;
}
namespace UnityEngine::UIElements {
template <typename T> class TreeDataController_1__GetItemIds_d__9;
}
// Write type traits
MARK_GEN_REF_PTR_T(::UnityEngine::UIElements::TreeDataController_1);
MARK_GEN_REF_PTR_T(::UnityEngine::UIElements::TreeDataController_1__GetAllItemIds_d__13);
MARK_GEN_REF_PTR_T(::UnityEngine::UIElements::TreeDataController_1__GetItemIds_d__9);
// Dependencies System.Collections.Generic.IEnumerable`1<T>, System.Collections.Generic.IEnumerator`1<T>, System.Collections.IEnumerable, System.Collections.IEnumerator, System.IDisposable,
// System.Object
namespace UnityEngine::UIElements {
// cpp template
template <typename T>
// Is value type: false
// CS Name: UnityEngine.UIElements.TreeDataController`1/<GetAllItemIds>d__13<T>
class CORDL_TYPE TreeDataController_1__GetAllItemIds_d__13 : public ::System::Object {
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
  __declspec(property(get = __cordl_internal_get___4__this, put = __cordl_internal_set___4__this)) ::UnityEngine::UIElements::TreeDataController_1<T>* __4__this;

  /// @brief Field <>l__initialThreadId, offset 0x18, size 0x4
  __declspec(property(get = __cordl_internal_get___l__initialThreadId, put = __cordl_internal_set___l__initialThreadId)) int32_t __l__initialThreadId;

  /// @brief Field <currentItemId>5__3, offset 0x44, size 0x4
  __declspec(property(get = __cordl_internal_get__currentItemId_5__3, put = __cordl_internal_set__currentItemId_5__3)) int32_t _currentItemId_5__3;

  /// @brief Field <currentIterator>5__1, offset 0x38, size 0x8
  __declspec(property(get = __cordl_internal_get__currentIterator_5__1,
                      put = __cordl_internal_set__currentIterator_5__1)) ::System::Collections::Generic::IEnumerator_1<int32_t>* _currentIterator_5__1;

  /// @brief Field <hasNext>5__2, offset 0x40, size 0x1
  __declspec(property(get = __cordl_internal_get__hasNext_5__2, put = __cordl_internal_set__hasNext_5__2)) bool _hasNext_5__2;

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

  /// @brief Method MoveNext, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
  inline bool MoveNext();

  static inline ::UnityEngine::UIElements::TreeDataController_1__GetAllItemIds_d__13<T>* New_ctor(int32_t __1__state);

  /// @brief Method System.Collections.Generic.IEnumerable<System.Int32>.GetEnumerator, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
  inline ::System::Collections::Generic::IEnumerator_1<int32_t>* System_Collections_Generic_IEnumerable_System_Int32__GetEnumerator();

  /// @brief Method System.Collections.Generic.IEnumerator<System.Int32>.get_Current, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
  inline int32_t System_Collections_Generic_IEnumerator_System_Int32__get_Current();

  /// @brief Method System.Collections.IEnumerable.GetEnumerator, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
  inline ::System::Collections::IEnumerator* System_Collections_IEnumerable_GetEnumerator();

  /// @brief Method System.Collections.IEnumerator.Reset, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
  inline void System_Collections_IEnumerator_Reset();

  /// @brief Method System.Collections.IEnumerator.get_Current, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
  inline ::System::Object* System_Collections_IEnumerator_get_Current();

  /// @brief Method System.IDisposable.Dispose, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
  inline void System_IDisposable_Dispose();

  constexpr int32_t const& __cordl_internal_get___1__state() const;

  constexpr int32_t& __cordl_internal_get___1__state();

  constexpr int32_t const& __cordl_internal_get___2__current() const;

  constexpr int32_t& __cordl_internal_get___2__current();

  constexpr ::System::Collections::Generic::IEnumerable_1<int32_t>* const& __cordl_internal_get___3__rootIds() const;

  constexpr ::System::Collections::Generic::IEnumerable_1<int32_t>*& __cordl_internal_get___3__rootIds();

  constexpr ::UnityEngine::UIElements::TreeDataController_1<T>* const& __cordl_internal_get___4__this() const;

  constexpr ::UnityEngine::UIElements::TreeDataController_1<T>*& __cordl_internal_get___4__this();

  constexpr int32_t const& __cordl_internal_get___l__initialThreadId() const;

  constexpr int32_t& __cordl_internal_get___l__initialThreadId();

  constexpr int32_t const& __cordl_internal_get__currentItemId_5__3() const;

  constexpr int32_t& __cordl_internal_get__currentItemId_5__3();

  constexpr ::System::Collections::Generic::IEnumerator_1<int32_t>* const& __cordl_internal_get__currentIterator_5__1() const;

  constexpr ::System::Collections::Generic::IEnumerator_1<int32_t>*& __cordl_internal_get__currentIterator_5__1();

  constexpr bool const& __cordl_internal_get__hasNext_5__2() const;

  constexpr bool& __cordl_internal_get__hasNext_5__2();

  constexpr ::System::Collections::Generic::IEnumerable_1<int32_t>* const& __cordl_internal_get_rootIds() const;

  constexpr ::System::Collections::Generic::IEnumerable_1<int32_t>*& __cordl_internal_get_rootIds();

  constexpr void __cordl_internal_set___1__state(int32_t value);

  constexpr void __cordl_internal_set___2__current(int32_t value);

  constexpr void __cordl_internal_set___3__rootIds(::System::Collections::Generic::IEnumerable_1<int32_t>* value);

  constexpr void __cordl_internal_set___4__this(::UnityEngine::UIElements::TreeDataController_1<T>* value);

  constexpr void __cordl_internal_set___l__initialThreadId(int32_t value);

  constexpr void __cordl_internal_set__currentItemId_5__3(int32_t value);

  constexpr void __cordl_internal_set__currentIterator_5__1(::System::Collections::Generic::IEnumerator_1<int32_t>* value);

  constexpr void __cordl_internal_set__hasNext_5__2(bool value);

  constexpr void __cordl_internal_set_rootIds(::System::Collections::Generic::IEnumerable_1<int32_t>* value);

  /// @brief Method .ctor, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
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
  constexpr TreeDataController_1__GetAllItemIds_d__13();

public:
  // Ctor Parameters [CppParam { name: "", ty: "TreeDataController_1__GetAllItemIds_d__13", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  TreeDataController_1__GetAllItemIds_d__13(TreeDataController_1__GetAllItemIds_d__13&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "TreeDataController_1__GetAllItemIds_d__13", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  TreeDataController_1__GetAllItemIds_d__13(TreeDataController_1__GetAllItemIds_d__13 const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 5472 };

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
  ::UnityEngine::UIElements::TreeDataController_1<T>* _____4__this;

  /// @brief Field <currentIterator>5__1, offset: 0x38, size: 0x8, def value: None
  ::System::Collections::Generic::IEnumerator_1<int32_t>* ____currentIterator_5__1;

  /// @brief Field <hasNext>5__2, offset: 0x40, size: 0x1, def value: None
  bool ____hasNext_5__2;

  /// @brief Field <currentItemId>5__3, offset: 0x44, size: 0x4, def value: None
  int32_t ____currentItemId_5__3;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace UnityEngine::UIElements
// Dependencies System.Collections.Generic.IEnumerable`1<T>, System.Collections.Generic.IEnumerator`1<T>, System.Collections.IEnumerable, System.Collections.IEnumerator, System.IDisposable,
// System.Object, UnityEngine.UIElements.TreeViewItemData`1<T>
namespace UnityEngine::UIElements {
// cpp template
template <typename T>
// Is value type: false
// CS Name: UnityEngine.UIElements.TreeDataController`1/<GetItemIds>d__9<T>
class CORDL_TYPE TreeDataController_1__GetItemIds_d__9 : public ::System::Object {
public:
  // Declarations
  __declspec(property(get = System_Collections_Generic_IEnumerator_System_Int32__get_Current)) int32_t System_Collections_Generic_IEnumerator_System_Int32__Current;

  __declspec(property(get = System_Collections_IEnumerator_get_Current)) ::System::Object* System_Collections_IEnumerator_Current;

  /// @brief Field <>1__state, offset 0x10, size 0x4
  __declspec(property(get = __cordl_internal_get___1__state, put = __cordl_internal_set___1__state)) int32_t __1__state;

  /// @brief Field <>2__current, offset 0x14, size 0x4
  __declspec(property(get = __cordl_internal_get___2__current, put = __cordl_internal_set___2__current)) int32_t __2__current;

  /// @brief Field <>3__items, offset 0x28, size 0x8
  __declspec(property(get = __cordl_internal_get___3__items,
                      put = __cordl_internal_set___3__items)) ::System::Collections::Generic::IEnumerable_1<::UnityEngine::UIElements::TreeViewItemData_1<T>>* __3__items;

  /// @brief Field <>l__initialThreadId, offset 0x18, size 0x4
  __declspec(property(get = __cordl_internal_get___l__initialThreadId, put = __cordl_internal_set___l__initialThreadId)) int32_t __l__initialThreadId;

  /// @brief Field <>s__1, offset 0x30, size 0x8
  __declspec(property(get = __cordl_internal_get___s__1, put = __cordl_internal_set___s__1)) ::System::Collections::Generic::IEnumerator_1<::UnityEngine::UIElements::TreeViewItemData_1<T>>* __s__1;

  /// @brief Field <item>5__2, offset 0x38, size 0x18
  __declspec(property(get = __cordl_internal_get__item_5__2, put = __cordl_internal_set__item_5__2)) ::UnityEngine::UIElements::TreeViewItemData_1<T> _item_5__2;

  /// @brief Field items, offset 0x20, size 0x8
  __declspec(property(get = __cordl_internal_get_items, put = __cordl_internal_set_items)) ::System::Collections::Generic::IEnumerable_1<::UnityEngine::UIElements::TreeViewItemData_1<T>>* items;

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

  /// @brief Method MoveNext, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
  inline bool MoveNext();

  static inline ::UnityEngine::UIElements::TreeDataController_1__GetItemIds_d__9<T>* New_ctor(int32_t __1__state);

  /// @brief Method System.Collections.Generic.IEnumerable<System.Int32>.GetEnumerator, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
  inline ::System::Collections::Generic::IEnumerator_1<int32_t>* System_Collections_Generic_IEnumerable_System_Int32__GetEnumerator();

  /// @brief Method System.Collections.Generic.IEnumerator<System.Int32>.get_Current, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
  inline int32_t System_Collections_Generic_IEnumerator_System_Int32__get_Current();

  /// @brief Method System.Collections.IEnumerable.GetEnumerator, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
  inline ::System::Collections::IEnumerator* System_Collections_IEnumerable_GetEnumerator();

  /// @brief Method System.Collections.IEnumerator.Reset, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
  inline void System_Collections_IEnumerator_Reset();

  /// @brief Method System.Collections.IEnumerator.get_Current, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
  inline ::System::Object* System_Collections_IEnumerator_get_Current();

  /// @brief Method System.IDisposable.Dispose, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
  inline void System_IDisposable_Dispose();

  constexpr int32_t const& __cordl_internal_get___1__state() const;

  constexpr int32_t& __cordl_internal_get___1__state();

  constexpr int32_t const& __cordl_internal_get___2__current() const;

  constexpr int32_t& __cordl_internal_get___2__current();

  constexpr ::System::Collections::Generic::IEnumerable_1<::UnityEngine::UIElements::TreeViewItemData_1<T>>* const& __cordl_internal_get___3__items() const;

  constexpr ::System::Collections::Generic::IEnumerable_1<::UnityEngine::UIElements::TreeViewItemData_1<T>>*& __cordl_internal_get___3__items();

  constexpr int32_t const& __cordl_internal_get___l__initialThreadId() const;

  constexpr int32_t& __cordl_internal_get___l__initialThreadId();

  constexpr ::System::Collections::Generic::IEnumerator_1<::UnityEngine::UIElements::TreeViewItemData_1<T>>* const& __cordl_internal_get___s__1() const;

  constexpr ::System::Collections::Generic::IEnumerator_1<::UnityEngine::UIElements::TreeViewItemData_1<T>>*& __cordl_internal_get___s__1();

  constexpr ::UnityEngine::UIElements::TreeViewItemData_1<T> const& __cordl_internal_get__item_5__2() const;

  constexpr ::UnityEngine::UIElements::TreeViewItemData_1<T>& __cordl_internal_get__item_5__2();

  constexpr ::System::Collections::Generic::IEnumerable_1<::UnityEngine::UIElements::TreeViewItemData_1<T>>* const& __cordl_internal_get_items() const;

  constexpr ::System::Collections::Generic::IEnumerable_1<::UnityEngine::UIElements::TreeViewItemData_1<T>>*& __cordl_internal_get_items();

  constexpr void __cordl_internal_set___1__state(int32_t value);

  constexpr void __cordl_internal_set___2__current(int32_t value);

  constexpr void __cordl_internal_set___3__items(::System::Collections::Generic::IEnumerable_1<::UnityEngine::UIElements::TreeViewItemData_1<T>>* value);

  constexpr void __cordl_internal_set___l__initialThreadId(int32_t value);

  constexpr void __cordl_internal_set___s__1(::System::Collections::Generic::IEnumerator_1<::UnityEngine::UIElements::TreeViewItemData_1<T>>* value);

  constexpr void __cordl_internal_set__item_5__2(::UnityEngine::UIElements::TreeViewItemData_1<T> value);

  constexpr void __cordl_internal_set_items(::System::Collections::Generic::IEnumerable_1<::UnityEngine::UIElements::TreeViewItemData_1<T>>* value);

  /// @brief Method <>m__Finally1, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline void __m__Finally1();

  /// @brief Method .ctor, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
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
  constexpr TreeDataController_1__GetItemIds_d__9();

public:
  // Ctor Parameters [CppParam { name: "", ty: "TreeDataController_1__GetItemIds_d__9", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  TreeDataController_1__GetItemIds_d__9(TreeDataController_1__GetItemIds_d__9&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "TreeDataController_1__GetItemIds_d__9", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  TreeDataController_1__GetItemIds_d__9(TreeDataController_1__GetItemIds_d__9 const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 5473 };

  /// @brief Field <>1__state, offset: 0x10, size: 0x4, def value: None
  int32_t _____1__state;

  /// @brief Field <>2__current, offset: 0x14, size: 0x4, def value: None
  int32_t _____2__current;

  /// @brief Field <>l__initialThreadId, offset: 0x18, size: 0x4, def value: None
  int32_t _____l__initialThreadId;

  /// @brief Field items, offset: 0x20, size: 0x8, def value: None
  ::System::Collections::Generic::IEnumerable_1<::UnityEngine::UIElements::TreeViewItemData_1<T>>* ___items;

  /// @brief Field <>3__items, offset: 0x28, size: 0x8, def value: None
  ::System::Collections::Generic::IEnumerable_1<::UnityEngine::UIElements::TreeViewItemData_1<T>>* _____3__items;

  /// @brief Field <>s__1, offset: 0x30, size: 0x8, def value: None
  ::System::Collections::Generic::IEnumerator_1<::UnityEngine::UIElements::TreeViewItemData_1<T>>* _____s__1;

  /// @brief Field <item>5__2, offset: 0x38, size: 0x18, def value: None
  ::UnityEngine::UIElements::TreeViewItemData_1<T> ____item_5__2;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace UnityEngine::UIElements
// Dependencies System.Object, UnityEngine.UIElements.TreeData`1<T>
namespace UnityEngine::UIElements {
// cpp template
template <typename T>
// Is value type: false
// CS Name: UnityEngine.UIElements.TreeDataController`1<T>
class CORDL_TYPE TreeDataController_1 : public ::System::Object {
public:
  // Declarations
  using _GetAllItemIds_d__13 = ::UnityEngine::UIElements::TreeDataController_1__GetAllItemIds_d__13<T>;

  using _GetItemIds_d__9 = ::UnityEngine::UIElements::TreeDataController_1__GetItemIds_d__9<T>;

  /// @brief Field m_IteratorStack, offset 0x30, size 0x8
  __declspec(property(get = __cordl_internal_get_m_IteratorStack,
                      put = __cordl_internal_set_m_IteratorStack)) ::System::Collections::Generic::Stack_1<::System::Collections::Generic::IEnumerator_1<int32_t>*>* m_IteratorStack;

  /// @brief Field m_TreeData, offset 0x10, size 0x20
  __declspec(property(get = __cordl_internal_get_m_TreeData, put = __cordl_internal_set_m_TreeData)) ::UnityEngine::UIElements::TreeData_1<T> m_TreeData;

  /// @brief Method GetAllItemIds, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline ::System::Collections::Generic::IEnumerable_1<int32_t>* GetAllItemIds(::System::Collections::Generic::IEnumerable_1<int32_t>* rootIds);

  /// @brief Method GetChildrenIds, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline ::System::Collections::Generic::IEnumerable_1<int32_t>* GetChildrenIds(int32_t id);

  /// @brief Method GetDataForId, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline T GetDataForId(int32_t id);

  /// @brief Method GetItemIds, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  static inline ::System::Collections::Generic::IEnumerable_1<int32_t>* GetItemIds(::System::Collections::Generic::IEnumerable_1<::UnityEngine::UIElements::TreeViewItemData_1<T>>* items);

  /// @brief Method GetParentId, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline int32_t GetParentId(int32_t id);

  /// @brief Method HasChildren, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline bool HasChildren(int32_t id);

  /// @brief Method IsChildOf, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline bool IsChildOf(int32_t childId, int32_t id);

  /// @brief Method Move, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline void Move(int32_t id, int32_t newParentId, int32_t childIndex);

  static inline ::UnityEngine::UIElements::TreeDataController_1<T>* New_ctor();

  /// @brief Method SetRootItems, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline void SetRootItems(::System::Collections::Generic::IList_1<::UnityEngine::UIElements::TreeViewItemData_1<T>>* rootItems);

  constexpr ::System::Collections::Generic::Stack_1<::System::Collections::Generic::IEnumerator_1<int32_t>*>* const& __cordl_internal_get_m_IteratorStack() const;

  constexpr ::System::Collections::Generic::Stack_1<::System::Collections::Generic::IEnumerator_1<int32_t>*>*& __cordl_internal_get_m_IteratorStack();

  constexpr ::UnityEngine::UIElements::TreeData_1<T> const& __cordl_internal_get_m_TreeData() const;

  constexpr ::UnityEngine::UIElements::TreeData_1<T>& __cordl_internal_get_m_TreeData();

  constexpr void __cordl_internal_set_m_IteratorStack(::System::Collections::Generic::Stack_1<::System::Collections::Generic::IEnumerator_1<int32_t>*>* value);

  constexpr void __cordl_internal_set_m_TreeData(::UnityEngine::UIElements::TreeData_1<T> value);

  /// @brief Method .ctor, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr TreeDataController_1();

public:
  // Ctor Parameters [CppParam { name: "", ty: "TreeDataController_1", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  TreeDataController_1(TreeDataController_1&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "TreeDataController_1", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  TreeDataController_1(TreeDataController_1 const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 5474 };

  /// @brief Field m_TreeData, offset: 0x10, size: 0x20, def value: None
  ::UnityEngine::UIElements::TreeData_1<T> ___m_TreeData;

  /// @brief Field m_IteratorStack, offset: 0x30, size: 0x8, def value: None
  ::System::Collections::Generic::Stack_1<::System::Collections::Generic::IEnumerator_1<int32_t>*>* ___m_IteratorStack;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace UnityEngine::UIElements
DEFINE_IL2CPP_ARG_TYPE_GENERIC_CLASS(::UnityEngine::UIElements::TreeDataController_1, "UnityEngine.UIElements", "TreeDataController`1");
DEFINE_IL2CPP_ARG_TYPE_GENERIC_CLASS(::UnityEngine::UIElements::TreeDataController_1__GetAllItemIds_d__13, "UnityEngine.UIElements", "TreeDataController`1/<GetAllItemIds>d__13");
DEFINE_IL2CPP_ARG_TYPE_GENERIC_CLASS(::UnityEngine::UIElements::TreeDataController_1__GetItemIds_d__9, "UnityEngine.UIElements", "TreeDataController`1/<GetItemIds>d__9");
