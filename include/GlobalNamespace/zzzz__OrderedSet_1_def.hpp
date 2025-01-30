#pragma once
// IWYU pragma private; include "GlobalNamespace/OrderedSet_1.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/Collections/Generic/zzzz__IEnumerable_1_def.hpp"
#include "System/Collections/Generic/zzzz__IEnumerator_1_def.hpp"
#include "System/Collections/zzzz__IEnumerable_def.hpp"
#include "System/Collections/zzzz__IEnumerator_def.hpp"
#include "System/zzzz__IDisposable_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(OrderedSet_1)
namespace GlobalNamespace {
template <typename T> class OrderedSet_1_Node;
}
namespace GlobalNamespace {
template <typename T> struct OrderedSet_1_ProcessOrder;
}
namespace GlobalNamespace {
template <typename T> class OrderedSet_1__GetEnumerator_d__23;
}
namespace System::Collections::Generic {
template <typename TKey, typename TValue> class Dictionary_2;
}
namespace System::Collections::Generic {
template <typename T> class IEnumerator_1;
}
namespace System::Collections {
class IEnumerator;
}
namespace System {
template <typename T> class Comparison_1;
}
namespace System {
class Object;
}
// Forward declare root types
namespace GlobalNamespace {
template <typename T> struct OrderedSet_1_ProcessOrder;
}
namespace GlobalNamespace {
template <typename T> class OrderedSet_1;
}
namespace GlobalNamespace {
template <typename T> class OrderedSet_1_Node;
}
namespace GlobalNamespace {
template <typename T> class OrderedSet_1__GetEnumerator_d__23;
}
// Write type traits
MARK_GEN_VAL_T(::GlobalNamespace::OrderedSet_1_ProcessOrder);
MARK_GEN_REF_PTR_T(::GlobalNamespace::OrderedSet_1);
MARK_GEN_REF_PTR_T(::GlobalNamespace::OrderedSet_1_Node);
MARK_GEN_REF_PTR_T(::GlobalNamespace::OrderedSet_1__GetEnumerator_d__23);
// Dependencies
namespace GlobalNamespace {
// cpp template
template <typename T>
// Is value type: true
// CS Name: OrderedSet`1/ProcessOrder<T>
struct CORDL_TYPE OrderedSet_1_ProcessOrder {
public:
  // Declarations
  using __CORDL_BACKING_ENUM_TYPE = int32_t;

  /// @brief Nested struct __OrderedSet_1_ProcessOrder_Unwrapped
  enum struct __OrderedSet_1_ProcessOrder_Unwrapped : int32_t {
    __E_Lifo = static_cast<int32_t>(0x0),
    __E_Fifo = static_cast<int32_t>(0x1),
    __E_DontCare = static_cast<int32_t>(0x2),
  };

  /// @brief Conversion into unwrapped enum value
  constexpr operator __OrderedSet_1_ProcessOrder_Unwrapped() const noexcept {
    return static_cast<__OrderedSet_1_ProcessOrder_Unwrapped>(this->value__);
  }

  /// @brief Conversion into unwrapped enum value
  constexpr explicit operator int32_t() const noexcept {
    return static_cast<int32_t>(this->value__);
  }

  // Ctor Parameters []
  // @brief default ctor
  constexpr OrderedSet_1_ProcessOrder();

  // Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
  constexpr OrderedSet_1_ProcessOrder(int32_t value__) noexcept;

  /// @brief Field DontCare value: I32(2)
  static ::GlobalNamespace::OrderedSet_1_ProcessOrder<T> const DontCare;

  /// @brief Field Fifo value: I32(1)
  static ::GlobalNamespace::OrderedSet_1_ProcessOrder<T> const Fifo;

  /// @brief Field Lifo value: I32(0)
  static ::GlobalNamespace::OrderedSet_1_ProcessOrder<T> const Lifo;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 14911 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x4 };

  /// @brief Field value__, offset: 0x0, size: 0x4, def value: None
  int32_t value__;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace GlobalNamespace
// Dependencies System.Object
namespace GlobalNamespace {
// cpp template
template <typename T>
// Is value type: false
// CS Name: OrderedSet`1/Node<T>
class CORDL_TYPE OrderedSet_1_Node : public ::System::Object {
public:
  // Declarations
  /// @brief Field clearCount, offset 0x2c, size 0x4
  __declspec(property(get = __cordl_internal_get_clearCount, put = __cordl_internal_set_clearCount)) int32_t clearCount;

  /// @brief Field isRemoved, offset 0x28, size 0x1
  __declspec(property(get = __cordl_internal_get_isRemoved, put = __cordl_internal_set_isRemoved)) bool isRemoved;

  /// @brief Field next, offset 0x20, size 0x8
  __declspec(property(get = __cordl_internal_get_next, put = __cordl_internal_set_next)) ::GlobalNamespace::OrderedSet_1_Node<T>* next;

  /// @brief Field previous, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get_previous, put = __cordl_internal_set_previous)) ::GlobalNamespace::OrderedSet_1_Node<T>* previous;

  /// @brief Field value, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get_value, put = __cordl_internal_set_value)) T value;

  static inline ::GlobalNamespace::OrderedSet_1_Node<T>* New_ctor(T value, int32_t clearCount);

  constexpr int32_t const& __cordl_internal_get_clearCount() const;

  constexpr int32_t& __cordl_internal_get_clearCount();

  constexpr bool const& __cordl_internal_get_isRemoved() const;

  constexpr bool& __cordl_internal_get_isRemoved();

  constexpr ::GlobalNamespace::OrderedSet_1_Node<T>* const& __cordl_internal_get_next() const;

  constexpr ::GlobalNamespace::OrderedSet_1_Node<T>*& __cordl_internal_get_next();

  constexpr ::GlobalNamespace::OrderedSet_1_Node<T>* const& __cordl_internal_get_previous() const;

  constexpr ::GlobalNamespace::OrderedSet_1_Node<T>*& __cordl_internal_get_previous();

  constexpr T const& __cordl_internal_get_value() const;

  constexpr T& __cordl_internal_get_value();

  constexpr void __cordl_internal_set_clearCount(int32_t value);

  constexpr void __cordl_internal_set_isRemoved(bool value);

  constexpr void __cordl_internal_set_next(::GlobalNamespace::OrderedSet_1_Node<T>* value);

  constexpr void __cordl_internal_set_previous(::GlobalNamespace::OrderedSet_1_Node<T>* value);

  constexpr void __cordl_internal_set_value(T value);

  /// @brief Method .ctor, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline void _ctor(T value, int32_t clearCount);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr OrderedSet_1_Node();

public:
  // Ctor Parameters [CppParam { name: "", ty: "OrderedSet_1_Node", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  OrderedSet_1_Node(OrderedSet_1_Node&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "OrderedSet_1_Node", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  OrderedSet_1_Node(OrderedSet_1_Node const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 14912 };

  /// @brief Field value, offset: 0x10, size: 0x8, def value: None
  T ___value;

  /// @brief Field previous, offset: 0x18, size: 0x8, def value: None
  ::GlobalNamespace::OrderedSet_1_Node<T>* ___previous;

  /// @brief Field next, offset: 0x20, size: 0x8, def value: None
  ::GlobalNamespace::OrderedSet_1_Node<T>* ___next;

  /// @brief Field isRemoved, offset: 0x28, size: 0x1, def value: None
  bool ___isRemoved;

  /// @brief Field clearCount, offset: 0x2c, size: 0x4, def value: None
  int32_t ___clearCount;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace GlobalNamespace
// Dependencies System.Collections.Generic.IEnumerator`1<T>, System.Collections.IEnumerator, System.IDisposable, System.Object
namespace GlobalNamespace {
// cpp template
template <typename T>
// Is value type: false
// CS Name: OrderedSet`1/<GetEnumerator>d__23<T>
class CORDL_TYPE OrderedSet_1__GetEnumerator_d__23 : public ::System::Object {
public:
  // Declarations
  __declspec(property(get = System_Collections_Generic_IEnumerator_T__get_Current)) T System_Collections_Generic_IEnumerator_T__Current;

  __declspec(property(get = System_Collections_IEnumerator_get_Current)) ::System::Object* System_Collections_IEnumerator_Current;

  /// @brief Field <>1__state, offset 0x10, size 0x4
  __declspec(property(get = __cordl_internal_get___1__state, put = __cordl_internal_set___1__state)) int32_t __1__state;

  /// @brief Field <>2__current, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get___2__current, put = __cordl_internal_set___2__current)) T __2__current;

  /// @brief Field <>4__this, offset 0x20, size 0x8
  __declspec(property(get = __cordl_internal_get___4__this, put = __cordl_internal_set___4__this)) ::GlobalNamespace::OrderedSet_1<T>* __4__this;

  /// @brief Field <next>5__2, offset 0x28, size 0x8
  __declspec(property(get = __cordl_internal_get__next_5__2, put = __cordl_internal_set__next_5__2)) ::GlobalNamespace::OrderedSet_1_Node<T>* _next_5__2;

  /// @brief Convert operator to "::System::Collections::Generic::IEnumerator_1<T>"
  constexpr operator ::System::Collections::Generic::IEnumerator_1<T>*() noexcept;

  /// @brief Convert operator to "::System::Collections::IEnumerator"
  constexpr operator ::System::Collections::IEnumerator*() noexcept;

  /// @brief Convert operator to "::System::IDisposable"
  constexpr operator ::System::IDisposable*() noexcept;

  /// @brief Method MoveNext, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
  inline bool MoveNext();

  static inline ::GlobalNamespace::OrderedSet_1__GetEnumerator_d__23<T>* New_ctor(int32_t __1__state);

  /// @brief Method System.Collections.Generic.IEnumerator<T>.get_Current, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
  inline T System_Collections_Generic_IEnumerator_T__get_Current();

  /// @brief Method System.Collections.IEnumerator.Reset, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
  inline void System_Collections_IEnumerator_Reset();

  /// @brief Method System.Collections.IEnumerator.get_Current, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
  inline ::System::Object* System_Collections_IEnumerator_get_Current();

  /// @brief Method System.IDisposable.Dispose, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
  inline void System_IDisposable_Dispose();

  constexpr int32_t const& __cordl_internal_get___1__state() const;

  constexpr int32_t& __cordl_internal_get___1__state();

  constexpr T const& __cordl_internal_get___2__current() const;

  constexpr T& __cordl_internal_get___2__current();

  constexpr ::GlobalNamespace::OrderedSet_1<T>* const& __cordl_internal_get___4__this() const;

  constexpr ::GlobalNamespace::OrderedSet_1<T>*& __cordl_internal_get___4__this();

  constexpr ::GlobalNamespace::OrderedSet_1_Node<T>* const& __cordl_internal_get__next_5__2() const;

  constexpr ::GlobalNamespace::OrderedSet_1_Node<T>*& __cordl_internal_get__next_5__2();

  constexpr void __cordl_internal_set___1__state(int32_t value);

  constexpr void __cordl_internal_set___2__current(T value);

  constexpr void __cordl_internal_set___4__this(::GlobalNamespace::OrderedSet_1<T>* value);

  constexpr void __cordl_internal_set__next_5__2(::GlobalNamespace::OrderedSet_1_Node<T>* value);

  /// @brief Method .ctor, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline void _ctor(int32_t __1__state);

  /// @brief Convert to "::System::Collections::Generic::IEnumerator_1<T>"
  constexpr ::System::Collections::Generic::IEnumerator_1<T>* i___System__Collections__Generic__IEnumerator_1_T_() noexcept;

  /// @brief Convert to "::System::Collections::IEnumerator"
  constexpr ::System::Collections::IEnumerator* i___System__Collections__IEnumerator() noexcept;

  /// @brief Convert to "::System::IDisposable"
  constexpr ::System::IDisposable* i___System__IDisposable() noexcept;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr OrderedSet_1__GetEnumerator_d__23();

public:
  // Ctor Parameters [CppParam { name: "", ty: "OrderedSet_1__GetEnumerator_d__23", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  OrderedSet_1__GetEnumerator_d__23(OrderedSet_1__GetEnumerator_d__23&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "OrderedSet_1__GetEnumerator_d__23", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  OrderedSet_1__GetEnumerator_d__23(OrderedSet_1__GetEnumerator_d__23 const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 14913 };

  /// @brief Field <>1__state, offset: 0x10, size: 0x4, def value: None
  int32_t _____1__state;

  /// @brief Field <>2__current, offset: 0x18, size: 0x8, def value: None
  T _____2__current;

  /// @brief Field <>4__this, offset: 0x20, size: 0x8, def value: None
  ::GlobalNamespace::OrderedSet_1<T>* _____4__this;

  /// @brief Field <next>5__2, offset: 0x28, size: 0x8, def value: None
  ::GlobalNamespace::OrderedSet_1_Node<T>* ____next_5__2;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace GlobalNamespace
// Dependencies OrderedSet`1::ProcessOrder<T>, System.Collections.Generic.IEnumerable`1<T>, System.Collections.IEnumerable, System.Object
namespace GlobalNamespace {
// cpp template
template <typename T>
// Is value type: false
// CS Name: OrderedSet`1<T>
class CORDL_TYPE OrderedSet_1 : public ::System::Object {
public:
  // Declarations
  using Node = ::GlobalNamespace::OrderedSet_1_Node<T>;

  using ProcessOrder = ::GlobalNamespace::OrderedSet_1_ProcessOrder<T>;

  using _GetEnumerator_d__23 = ::GlobalNamespace::OrderedSet_1__GetEnumerator_d__23<T>;

  /// @brief Field _clearCount, offset 0x38, size 0x4
  __declspec(property(get = __cordl_internal_get__clearCount, put = __cordl_internal_set__clearCount)) int32_t _clearCount;

  /// @brief Field _comparison, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get__comparison, put = __cordl_internal_set__comparison)) ::System::Comparison_1<T>* _comparison;

  /// @brief Field _head, offset 0x28, size 0x8
  __declspec(property(get = __cordl_internal_get__head, put = __cordl_internal_set__head)) ::GlobalNamespace::OrderedSet_1_Node<T>* _head;

  /// @brief Field _processOrder, offset 0x18, size 0x4
  __declspec(property(get = __cordl_internal_get__processOrder, put = __cordl_internal_set__processOrder)) ::GlobalNamespace::OrderedSet_1_ProcessOrder<T> _processOrder;

  /// @brief Field _sortIndices, offset 0x20, size 0x8
  __declspec(property(get = __cordl_internal_get__sortIndices,
                      put = __cordl_internal_set__sortIndices)) ::System::Collections::Generic::Dictionary_2<T, ::GlobalNamespace::OrderedSet_1_Node<T>*>* _sortIndices;

  /// @brief Field _tail, offset 0x30, size 0x8
  __declspec(property(get = __cordl_internal_get__tail, put = __cordl_internal_set__tail)) ::GlobalNamespace::OrderedSet_1_Node<T>* _tail;

  __declspec(property(get = get_count)) int32_t count;

  /// @brief Convert operator to "::System::Collections::Generic::IEnumerable_1<T>"
  constexpr operator ::System::Collections::Generic::IEnumerable_1<T>*() noexcept;

  /// @brief Convert operator to "::System::Collections::IEnumerable"
  constexpr operator ::System::Collections::IEnumerable*() noexcept;

  /// @brief Method Add, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline void Add(T item);

  /// @brief Method AppendNode, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline void AppendNode(::GlobalNamespace::OrderedSet_1_Node<T>* node);

  /// @brief Method AppendNodeUnchecked, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline void AppendNodeUnchecked(::GlobalNamespace::OrderedSet_1_Node<T>* node);

  /// @brief Method Clear, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline void Clear();

  /// @brief Method Contains, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline bool Contains(T item);

  /// @brief Method GetEnumerator, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
  inline ::System::Collections::Generic::IEnumerator_1<T>* GetEnumerator();

  /// @brief Method GetFirstOrDefault, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline T GetFirstOrDefault();

  static inline ::GlobalNamespace::OrderedSet_1<T>* New_ctor(::System::Comparison_1<T>* comparison, ::GlobalNamespace::OrderedSet_1_ProcessOrder<T> processOrder);

  /// @brief Method PrependNode, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline void PrependNode(::GlobalNamespace::OrderedSet_1_Node<T>* node);

  /// @brief Method PrependNodeUnchecked, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline void PrependNodeUnchecked(::GlobalNamespace::OrderedSet_1_Node<T>* node);

  /// @brief Method Remove, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline bool Remove(T item);

  /// @brief Method RemoveNode, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline void RemoveNode(::GlobalNamespace::OrderedSet_1_Node<T>* node);

  /// @brief Method SwapNodes, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline void SwapNodes(::GlobalNamespace::OrderedSet_1_Node<T>* previous, ::GlobalNamespace::OrderedSet_1_Node<T>* next);

  /// @brief Method System.Collections.IEnumerable.GetEnumerator, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
  inline ::System::Collections::IEnumerator* System_Collections_IEnumerable_GetEnumerator();

  /// @brief Method TryGetFirst, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline bool TryGetFirst(::ByRef<T> value);

  /// @brief Method UpdateSortedPosition, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline void UpdateSortedPosition(T item);

  /// @brief Method UpdateSortedPosition, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline void UpdateSortedPosition(::GlobalNamespace::OrderedSet_1_Node<T>* node);

  constexpr int32_t const& __cordl_internal_get__clearCount() const;

  constexpr int32_t& __cordl_internal_get__clearCount();

  constexpr ::System::Comparison_1<T>* const& __cordl_internal_get__comparison() const;

  constexpr ::System::Comparison_1<T>*& __cordl_internal_get__comparison();

  constexpr ::GlobalNamespace::OrderedSet_1_Node<T>* const& __cordl_internal_get__head() const;

  constexpr ::GlobalNamespace::OrderedSet_1_Node<T>*& __cordl_internal_get__head();

  constexpr ::GlobalNamespace::OrderedSet_1_ProcessOrder<T> const& __cordl_internal_get__processOrder() const;

  constexpr ::GlobalNamespace::OrderedSet_1_ProcessOrder<T>& __cordl_internal_get__processOrder();

  constexpr ::System::Collections::Generic::Dictionary_2<T, ::GlobalNamespace::OrderedSet_1_Node<T>*>* const& __cordl_internal_get__sortIndices() const;

  constexpr ::System::Collections::Generic::Dictionary_2<T, ::GlobalNamespace::OrderedSet_1_Node<T>*>*& __cordl_internal_get__sortIndices();

  constexpr ::GlobalNamespace::OrderedSet_1_Node<T>* const& __cordl_internal_get__tail() const;

  constexpr ::GlobalNamespace::OrderedSet_1_Node<T>*& __cordl_internal_get__tail();

  constexpr void __cordl_internal_set__clearCount(int32_t value);

  constexpr void __cordl_internal_set__comparison(::System::Comparison_1<T>* value);

  constexpr void __cordl_internal_set__head(::GlobalNamespace::OrderedSet_1_Node<T>* value);

  constexpr void __cordl_internal_set__processOrder(::GlobalNamespace::OrderedSet_1_ProcessOrder<T> value);

  constexpr void __cordl_internal_set__sortIndices(::System::Collections::Generic::Dictionary_2<T, ::GlobalNamespace::OrderedSet_1_Node<T>*>* value);

  constexpr void __cordl_internal_set__tail(::GlobalNamespace::OrderedSet_1_Node<T>* value);

  /// @brief Method .ctor, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline void _ctor(::System::Comparison_1<T>* comparison, ::GlobalNamespace::OrderedSet_1_ProcessOrder<T> processOrder);

  /// @brief Method get_count, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline int32_t get_count();

  /// @brief Convert to "::System::Collections::Generic::IEnumerable_1<T>"
  constexpr ::System::Collections::Generic::IEnumerable_1<T>* i___System__Collections__Generic__IEnumerable_1_T_() noexcept;

  /// @brief Convert to "::System::Collections::IEnumerable"
  constexpr ::System::Collections::IEnumerable* i___System__Collections__IEnumerable() noexcept;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr OrderedSet_1();

public:
  // Ctor Parameters [CppParam { name: "", ty: "OrderedSet_1", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  OrderedSet_1(OrderedSet_1&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "OrderedSet_1", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  OrderedSet_1(OrderedSet_1 const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 14914 };

  /// @brief Field _comparison, offset: 0x10, size: 0x8, def value: None
  ::System::Comparison_1<T>* ____comparison;

  /// @brief Field _processOrder, offset: 0x18, size: 0x4, def value: None
  ::GlobalNamespace::OrderedSet_1_ProcessOrder<T> ____processOrder;

  /// @brief Field _sortIndices, offset: 0x20, size: 0x8, def value: None
  ::System::Collections::Generic::Dictionary_2<T, ::GlobalNamespace::OrderedSet_1_Node<T>*>* ____sortIndices;

  /// @brief Field _head, offset: 0x28, size: 0x8, def value: None
  ::GlobalNamespace::OrderedSet_1_Node<T>* ____head;

  /// @brief Field _tail, offset: 0x30, size: 0x8, def value: None
  ::GlobalNamespace::OrderedSet_1_Node<T>* ____tail;

  /// @brief Field _clearCount, offset: 0x38, size: 0x4, def value: None
  int32_t ____clearCount;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace GlobalNamespace
DEFINE_IL2CPP_ARG_TYPE_GENERIC_STRUCT(::GlobalNamespace::OrderedSet_1_ProcessOrder, "", "OrderedSet`1/ProcessOrder");
DEFINE_IL2CPP_ARG_TYPE_GENERIC_CLASS(::GlobalNamespace::OrderedSet_1, "", "OrderedSet`1");
DEFINE_IL2CPP_ARG_TYPE_GENERIC_CLASS(::GlobalNamespace::OrderedSet_1_Node, "", "OrderedSet`1/Node");
DEFINE_IL2CPP_ARG_TYPE_GENERIC_CLASS(::GlobalNamespace::OrderedSet_1__GetEnumerator_d__23, "", "OrderedSet`1/<GetEnumerator>d__23");
