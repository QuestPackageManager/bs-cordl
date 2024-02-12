#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/Linq/zzzz__Buffer_1_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(OrderedEnumerable_1)
namespace System::Collections::Generic {
template <typename T> class IComparer_1;
}
namespace System::Collections::Generic {
template <typename T> class IEnumerable_1;
}
namespace System::Collections::Generic {
template <typename T> class IEnumerator_1;
}
namespace System::Collections {
class IEnumerable;
}
namespace System::Collections {
class IEnumerator;
}
namespace System::Linq {
template <typename TElement> class EnumerableSorter_1;
}
namespace System::Linq {
template <typename TElement> class IOrderedEnumerable_1;
}
namespace System::Linq {
template <typename TElement> class __OrderedEnumerable_1___GetEnumerator_d__1;
}
namespace System {
template <typename T, typename TResult> class Func_2;
}
namespace System {
class IDisposable;
}
namespace System {
class Object;
}
// Forward declare root types
namespace System::Linq {
template <typename TElement> class OrderedEnumerable_1;
}
namespace System::Linq {
template <typename TElement> class __OrderedEnumerable_1___GetEnumerator_d__1;
}
// Write type traits
MARK_GEN_REF_PTR_T(::System::Linq::OrderedEnumerable_1);
MARK_GEN_REF_PTR_T(::System::Linq::__OrderedEnumerable_1___GetEnumerator_d__1);
// Type: ::<GetEnumerator>d__1
// SizeInfo { instance_size: 72, native_size: 68, calculated_instance_size: 72, calculated_native_size: 68, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace System::Linq {
// cpp template
template <typename TElement>
// Is value type: false
// Dependencies: [TypeDefinitionIndex(TypeDefinitionIndex(2613)), TypeDefinitionIndex(TypeDefinitionIndex(14308)), GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(14308), inst:
// 960 })] Self: TypeDefinitionIndex(TypeDefinitionIndex(14303)) CS Name: ::OrderedEnumerable`1::<GetEnumerator>d__1<TElement>*
class CORDL_TYPE __OrderedEnumerable_1___GetEnumerator_d__1 : public ::System::Object {
public:
  // Declarations
  /// @brief Field <>1__state, offset 0x10, size 0x4
  __declspec(property(get = __cordl_internal_get___1__state, put = __cordl_internal_set___1__state)) int32_t __1__state;

  /// @brief Field <>2__current, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get___2__current, put = __cordl_internal_set___2__current)) TElement __2__current;

  /// @brief Field <>4__this, offset 0x20, size 0x8
  __declspec(property(get = __cordl_internal_get___4__this, put = __cordl_internal_set___4__this))::System::Linq::OrderedEnumerable_1<TElement>* __4__this;

  /// @brief Field <buffer>5__2, offset 0x28, size 0x10
  __declspec(property(get = __cordl_internal_get__buffer_5__2, put = __cordl_internal_set__buffer_5__2))::System::Linq::Buffer_1<TElement> _buffer_5__2;

  /// @brief Field <map>5__3, offset 0x38, size 0x8
  __declspec(property(get = __cordl_internal_get__map_5__3, put = __cordl_internal_set__map_5__3))::ArrayW<int32_t, ::Array<int32_t>*> _map_5__3;

  /// @brief Field <i>5__4, offset 0x40, size 0x4
  __declspec(property(get = __cordl_internal_get__i_5__4, put = __cordl_internal_set__i_5__4)) int32_t _i_5__4;

  __declspec(property(get = System_Collections_Generic_IEnumerator_TElement__get_Current)) TElement System_Collections_Generic_IEnumerator_TElement__Current;

  __declspec(property(get = System_Collections_IEnumerator_get_Current))::System::Object* System_Collections_IEnumerator_Current;

  /// @brief Convert operator to "::System::Collections::Generic::IEnumerator_1<TElement>"
  constexpr operator ::System::Collections::Generic::IEnumerator_1<TElement>*() noexcept;

  /// @brief Convert to "::System::Collections::Generic::IEnumerator_1<TElement>"
  constexpr ::System::Collections::Generic::IEnumerator_1<TElement>* i___System__Collections__Generic__IEnumerator_1_TElement_() noexcept;

  /// @brief Convert operator to "::System::IDisposable"
  constexpr operator ::System::IDisposable*() noexcept;

  /// @brief Convert to "::System::IDisposable"
  constexpr ::System::IDisposable* i___System__IDisposable() noexcept;

  /// @brief Convert operator to "::System::Collections::IEnumerator"
  constexpr operator ::System::Collections::IEnumerator*() noexcept;

  /// @brief Convert to "::System::Collections::IEnumerator"
  constexpr ::System::Collections::IEnumerator* i___System__Collections__IEnumerator() noexcept;

  constexpr int32_t& __cordl_internal_get___1__state();

  constexpr int32_t const& __cordl_internal_get___1__state() const;

  constexpr void __cordl_internal_set___1__state(int32_t value);

  constexpr TElement& __cordl_internal_get___2__current();

  constexpr TElement const& __cordl_internal_get___2__current() const;

  constexpr void __cordl_internal_set___2__current(TElement value);

  constexpr ::System::Linq::OrderedEnumerable_1<TElement>*& __cordl_internal_get___4__this();

  constexpr ::cordl_internals::to_const_pointer<::System::Linq::OrderedEnumerable_1<TElement>*> const& __cordl_internal_get___4__this() const;

  constexpr void __cordl_internal_set___4__this(::System::Linq::OrderedEnumerable_1<TElement>* value);

  constexpr ::System::Linq::Buffer_1<TElement>& __cordl_internal_get__buffer_5__2();

  constexpr ::System::Linq::Buffer_1<TElement> const& __cordl_internal_get__buffer_5__2() const;

  constexpr void __cordl_internal_set__buffer_5__2(::System::Linq::Buffer_1<TElement> value);

  constexpr ::ArrayW<int32_t, ::Array<int32_t>*>& __cordl_internal_get__map_5__3();

  constexpr ::ArrayW<int32_t, ::Array<int32_t>*> const& __cordl_internal_get__map_5__3() const;

  constexpr void __cordl_internal_set__map_5__3(::ArrayW<int32_t, ::Array<int32_t>*> value);

  constexpr int32_t& __cordl_internal_get__i_5__4();

  constexpr int32_t const& __cordl_internal_get__i_5__4() const;

  constexpr void __cordl_internal_set__i_5__4(int32_t value);

  static inline ::System::Linq::__OrderedEnumerable_1___GetEnumerator_d__1<TElement>* New_ctor(int32_t __1__state);

  /// @brief Method .ctor, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline void _ctor(int32_t __1__state);

  /// @brief Method System.IDisposable.Dispose, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
  inline void System_IDisposable_Dispose();

  /// @brief Method MoveNext, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
  inline bool MoveNext();

  /// @brief Method System.Collections.Generic.IEnumerator<TElement>.get_Current, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
  inline TElement System_Collections_Generic_IEnumerator_TElement__get_Current();

  /// @brief Method System.Collections.IEnumerator.Reset, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
  inline void System_Collections_IEnumerator_Reset();

  /// @brief Method System.Collections.IEnumerator.get_Current, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
  inline ::System::Object* System_Collections_IEnumerator_get_Current();

  // Ctor Parameters [CppParam { name: "", ty: "__OrderedEnumerable_1___GetEnumerator_d__1", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __OrderedEnumerable_1___GetEnumerator_d__1(__OrderedEnumerable_1___GetEnumerator_d__1&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__OrderedEnumerable_1___GetEnumerator_d__1", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __OrderedEnumerable_1___GetEnumerator_d__1(__OrderedEnumerable_1___GetEnumerator_d__1 const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __OrderedEnumerable_1___GetEnumerator_d__1();

public:
  /// @brief Field <>1__state, offset: 0x10, size: 0x4, def value: None
  int32_t _____1__state;

  /// @brief Field <>2__current, offset: 0x18, size: 0x8, def value: None
  TElement _____2__current;

  /// @brief Field <>4__this, offset: 0x20, size: 0x8, def value: None
  ::System::Linq::OrderedEnumerable_1<TElement>* _____4__this;

  /// @brief Field <buffer>5__2, offset: 0x28, size: 0x10, def value: None
  ::System::Linq::Buffer_1<TElement> ____buffer_5__2;

  /// @brief Field <map>5__3, offset: 0x38, size: 0x8, def value: None
  ::ArrayW<int32_t, ::Array<int32_t>*> ____map_5__3;

  /// @brief Field <i>5__4, offset: 0x40, size: 0x4, def value: None
  int32_t ____i_5__4;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace System::Linq
// Type: System.Linq::OrderedEnumerable`1
// SizeInfo { instance_size: 24, native_size: 24, calculated_instance_size: 24, calculated_native_size: 24, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace System::Linq {
// cpp template
template <typename TElement>
// Is value type: false
// Dependencies: [TypeDefinitionIndex(TypeDefinitionIndex(2613))]
// Self: TypeDefinitionIndex(TypeDefinitionIndex(14304))
// CS Name: ::System.Linq::OrderedEnumerable`1<TElement>*
class CORDL_TYPE OrderedEnumerable_1 : public ::System::Object {
public:
  // Declarations
  using _GetEnumerator_d__1 = ::System::Linq::__OrderedEnumerable_1___GetEnumerator_d__1<TElement>;

  /// @brief Field source, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get_source, put = __cordl_internal_set_source))::System::Collections::Generic::IEnumerable_1<TElement>* source;

  /// @brief Convert operator to "::System::Linq::IOrderedEnumerable_1<TElement>"
  constexpr operator ::System::Linq::IOrderedEnumerable_1<TElement>*() noexcept;

  /// @brief Convert to "::System::Linq::IOrderedEnumerable_1<TElement>"
  constexpr ::System::Linq::IOrderedEnumerable_1<TElement>* i___System__Linq__IOrderedEnumerable_1_TElement_() noexcept;

  /// @brief Convert operator to "::System::Collections::Generic::IEnumerable_1<TElement>"
  constexpr operator ::System::Collections::Generic::IEnumerable_1<TElement>*() noexcept;

  /// @brief Convert to "::System::Collections::Generic::IEnumerable_1<TElement>"
  constexpr ::System::Collections::Generic::IEnumerable_1<TElement>* i___System__Collections__Generic__IEnumerable_1_TElement_() noexcept;

  /// @brief Convert operator to "::System::Collections::IEnumerable"
  constexpr operator ::System::Collections::IEnumerable*() noexcept;

  /// @brief Convert to "::System::Collections::IEnumerable"
  constexpr ::System::Collections::IEnumerable* i___System__Collections__IEnumerable() noexcept;

  constexpr ::System::Collections::Generic::IEnumerable_1<TElement>*& __cordl_internal_get_source();

  constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::IEnumerable_1<TElement>*> const& __cordl_internal_get_source() const;

  constexpr void __cordl_internal_set_source(::System::Collections::Generic::IEnumerable_1<TElement>* value);

  /// @brief Method GetEnumerator, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
  inline ::System::Collections::Generic::IEnumerator_1<TElement>* GetEnumerator();

  /// @brief Method GetEnumerableSorter, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline ::System::Linq::EnumerableSorter_1<TElement>* GetEnumerableSorter(::System::Linq::EnumerableSorter_1<TElement>* next);

  /// @brief Method System.Collections.IEnumerable.GetEnumerator, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
  inline ::System::Collections::IEnumerator* System_Collections_IEnumerable_GetEnumerator();

  /// @brief Method System.Linq.IOrderedEnumerable<TElement>.CreateOrderedEnumerable, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
  template <typename TKey>
  inline ::System::Linq::IOrderedEnumerable_1<TElement>* System_Linq_IOrderedEnumerable_TElement__CreateOrderedEnumerable(::System::Func_2<TElement, TKey>* keySelector,
                                                                                                                          ::System::Collections::Generic::IComparer_1<TKey>* comparer, bool descending);

  static inline ::System::Linq::OrderedEnumerable_1<TElement>* New_ctor();

  /// @brief Method .ctor, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline void _ctor();

  // Ctor Parameters [CppParam { name: "", ty: "OrderedEnumerable_1", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  OrderedEnumerable_1(OrderedEnumerable_1&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "OrderedEnumerable_1", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  OrderedEnumerable_1(OrderedEnumerable_1 const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr OrderedEnumerable_1();

public:
  /// @brief Field source, offset: 0x10, size: 0x8, def value: None
  ::System::Collections::Generic::IEnumerable_1<TElement>* ___source;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace System::Linq
DEFINE_IL2CPP_ARG_TYPE_GENERIC_CLASS(::System::Linq::OrderedEnumerable_1, "System.Linq", "OrderedEnumerable`1");
DEFINE_IL2CPP_ARG_TYPE_GENERIC_CLASS(::System::Linq::__OrderedEnumerable_1___GetEnumerator_d__1, "System.Linq", "OrderedEnumerable`1/<GetEnumerator>d__1");
