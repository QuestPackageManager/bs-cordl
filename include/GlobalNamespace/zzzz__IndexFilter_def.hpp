#pragma once
// IWYU pragma private; include "GlobalNamespace/IndexFilter.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/Collections/Generic/zzzz__IEnumerable_1_def.hpp"
#include "System/Collections/Generic/zzzz__IEnumerator_1_def.hpp"
#include "System/Collections/Generic/zzzz__IReadOnlyCollection_1_def.hpp"
#include "System/Collections/zzzz__IEnumerable_def.hpp"
#include "System/Collections/zzzz__IEnumerator_def.hpp"
#include "System/zzzz__IDisposable_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "System/zzzz__ValueTuple_3_def.hpp"
#include <cmath>
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(IndexFilter)
namespace GlobalNamespace {
struct IndexFilter_IndexFilterLimitAlsoAffectType;
}
namespace GlobalNamespace {
struct IndexFilter_IndexFilterRandomType;
}
namespace GlobalNamespace {
class IndexFilter__GetEnumerator_d__23;
}
namespace GlobalNamespace {
class IndexFilter__GetValues_d__24;
}
namespace System::Collections::Generic {
template <typename T> class IEnumerable_1;
}
namespace System::Collections::Generic {
template <typename T> class IEnumerator_1;
}
namespace System::Collections {
class IEnumerator;
}
namespace System {
class Object;
}
namespace System {
template <typename T1, typename T2> struct ValueTuple_2;
}
namespace System {
template <typename T1, typename T2, typename T3> struct ValueTuple_3;
}
// Forward declare root types
namespace GlobalNamespace {
struct IndexFilter_IndexFilterLimitAlsoAffectType;
}
namespace GlobalNamespace {
struct IndexFilter_IndexFilterRandomType;
}
namespace GlobalNamespace {
class IndexFilter;
}
namespace GlobalNamespace {
class IndexFilter__GetEnumerator_d__23;
}
namespace GlobalNamespace {
class IndexFilter__GetValues_d__24;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::IndexFilter_IndexFilterLimitAlsoAffectType);
MARK_VAL_T(::GlobalNamespace::IndexFilter_IndexFilterRandomType);
MARK_REF_PTR_T(::GlobalNamespace::IndexFilter);
MARK_REF_PTR_T(::GlobalNamespace::IndexFilter__GetEnumerator_d__23);
MARK_REF_PTR_T(::GlobalNamespace::IndexFilter__GetValues_d__24);
// Dependencies
namespace GlobalNamespace {
// Is value type: true
// CS Name: IndexFilter/IndexFilterRandomType
struct CORDL_TYPE IndexFilter_IndexFilterRandomType {
public:
  // Declarations
  using __CORDL_BACKING_ENUM_TYPE = int32_t;

  /// @brief Nested struct __IndexFilter_IndexFilterRandomType_Unwrapped
  enum struct __IndexFilter_IndexFilterRandomType_Unwrapped : int32_t {
    __E_NoRandom = static_cast<int32_t>(0x0),
    __E_KeepOrder = static_cast<int32_t>(0x1),
    __E_RandomElements = static_cast<int32_t>(0x2),
  };

  /// @brief Conversion into unwrapped enum value
  constexpr operator __IndexFilter_IndexFilterRandomType_Unwrapped() const noexcept {
    return static_cast<__IndexFilter_IndexFilterRandomType_Unwrapped>(this->value__);
  }

  /// @brief Conversion into unwrapped enum value
  constexpr explicit operator int32_t() const noexcept {
    return static_cast<int32_t>(this->value__);
  }

  // Ctor Parameters []
  // @brief default ctor
  constexpr IndexFilter_IndexFilterRandomType();

  // Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
  constexpr IndexFilter_IndexFilterRandomType(int32_t value__) noexcept;

  /// @brief Field KeepOrder value: I32(1)
  static ::GlobalNamespace::IndexFilter_IndexFilterRandomType const KeepOrder;

  /// @brief Field NoRandom value: I32(0)
  static ::GlobalNamespace::IndexFilter_IndexFilterRandomType const NoRandom;

  /// @brief Field RandomElements value: I32(2)
  static ::GlobalNamespace::IndexFilter_IndexFilterRandomType const RandomElements;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 12911 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x4 };

  /// @brief Field value__, offset: 0x0, size: 0x4, def value: None
  int32_t value__;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::IndexFilter_IndexFilterRandomType, value__) == 0x0, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::GlobalNamespace::IndexFilter_IndexFilterRandomType, 0x4>, "Size mismatch!");

} // namespace GlobalNamespace
// Dependencies
namespace GlobalNamespace {
// Is value type: true
// CS Name: IndexFilter/IndexFilterLimitAlsoAffectType
struct CORDL_TYPE IndexFilter_IndexFilterLimitAlsoAffectType {
public:
  // Declarations
  using __CORDL_BACKING_ENUM_TYPE = int32_t;

  /// @brief Nested struct __IndexFilter_IndexFilterLimitAlsoAffectType_Unwrapped
  enum struct __IndexFilter_IndexFilterLimitAlsoAffectType_Unwrapped : int32_t {
    __E_None = static_cast<int32_t>(0x0),
    __E_Duration = static_cast<int32_t>(0x1),
    __E_Distribution = static_cast<int32_t>(0x2),
  };

  /// @brief Conversion into unwrapped enum value
  constexpr operator __IndexFilter_IndexFilterLimitAlsoAffectType_Unwrapped() const noexcept {
    return static_cast<__IndexFilter_IndexFilterLimitAlsoAffectType_Unwrapped>(this->value__);
  }

  /// @brief Conversion into unwrapped enum value
  constexpr explicit operator int32_t() const noexcept {
    return static_cast<int32_t>(this->value__);
  }

  // Ctor Parameters []
  // @brief default ctor
  constexpr IndexFilter_IndexFilterLimitAlsoAffectType();

  // Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
  constexpr IndexFilter_IndexFilterLimitAlsoAffectType(int32_t value__) noexcept;

  /// @brief Field Distribution value: I32(2)
  static ::GlobalNamespace::IndexFilter_IndexFilterLimitAlsoAffectType const Distribution;

  /// @brief Field Duration value: I32(1)
  static ::GlobalNamespace::IndexFilter_IndexFilterLimitAlsoAffectType const Duration;

  /// @brief Field None value: I32(0)
  static ::GlobalNamespace::IndexFilter_IndexFilterLimitAlsoAffectType const None;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 12912 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x4 };

  /// @brief Field value__, offset: 0x0, size: 0x4, def value: None
  int32_t value__;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::IndexFilter_IndexFilterLimitAlsoAffectType, value__) == 0x0, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::GlobalNamespace::IndexFilter_IndexFilterLimitAlsoAffectType, 0x4>, "Size mismatch!");

} // namespace GlobalNamespace
// Dependencies System.Collections.Generic.IEnumerator`1<T>, System.Collections.IEnumerator, System.IDisposable, System.Object, System.ValueTuple`3<T1, T2, T3>
namespace GlobalNamespace {
// Is value type: false
// CS Name: IndexFilter/<GetEnumerator>d__23
class CORDL_TYPE IndexFilter__GetEnumerator_d__23 : public ::System::Object {
public:
  // Declarations
  __declspec(property(
      get = System_Collections_Generic_IEnumerator__System_Int32element_System_Int32durationOrder_System_Int32distributionOrder___get_Current)) ::System::ValueTuple_3<int32_t, int32_t, int32_t>
      System_Collections_Generic_IEnumerator__System_Int32element_System_Int32durationOrder_System_Int32distributionOrder___Current;

  __declspec(property(get = System_Collections_IEnumerator_get_Current)) ::System::Object* System_Collections_IEnumerator_Current;

  /// @brief Field <>1__state, offset 0x10, size 0x4
  __declspec(property(get = __cordl_internal_get___1__state, put = __cordl_internal_set___1__state)) int32_t __1__state;

  /// @brief Field <>2__current, offset 0x14, size 0xc
  __declspec(property(get = __cordl_internal_get___2__current, put = __cordl_internal_set___2__current)) ::System::ValueTuple_3<int32_t, int32_t, int32_t> __2__current;

  /// @brief Field <>4__this, offset 0x20, size 0x8
  __declspec(property(get = __cordl_internal_get___4__this, put = __cordl_internal_set___4__this)) ::GlobalNamespace::IndexFilter* __4__this;

  /// @brief Field <>7__wrap2, offset 0x30, size 0x8
  __declspec(property(get = __cordl_internal_get___7__wrap2,
                      put = __cordl_internal_set___7__wrap2)) ::System::Collections::Generic::IEnumerator_1<::System::ValueTuple_2<int32_t, int32_t>>* __7__wrap2;

  /// @brief Field <elementId>5__4, offset 0x38, size 0x4
  __declspec(property(get = __cordl_internal_get__elementId_5__4, put = __cordl_internal_set__elementId_5__4)) int32_t _elementId_5__4;

  /// @brief Field <index>5__5, offset 0x3c, size 0x4
  __declspec(property(get = __cordl_internal_get__index_5__5, put = __cordl_internal_set__index_5__5)) int32_t _index_5__5;

  /// @brief Field <limitedOrderIndex>5__2, offset 0x28, size 0x4
  __declspec(property(get = __cordl_internal_get__limitedOrderIndex_5__2, put = __cordl_internal_set__limitedOrderIndex_5__2)) int32_t _limitedOrderIndex_5__2;

  /// @brief Field <localChunkIndex>5__6, offset 0x40, size 0x4
  __declspec(property(get = __cordl_internal_get__localChunkIndex_5__6, put = __cordl_internal_set__localChunkIndex_5__6)) int32_t _localChunkIndex_5__6;

  /// @brief Convert operator to "::System::Collections::Generic::IEnumerator_1<::System::ValueTuple_3<int32_t,int32_t,int32_t>>"
  constexpr operator ::System::Collections::Generic::IEnumerator_1<::System::ValueTuple_3<int32_t, int32_t, int32_t>>*() noexcept;

  /// @brief Convert operator to "::System::Collections::IEnumerator"
  constexpr operator ::System::Collections::IEnumerator*() noexcept;

  /// @brief Convert operator to "::System::IDisposable"
  constexpr operator ::System::IDisposable*() noexcept;

  /// @brief Method MoveNext, addr 0x26be5b8, size 0x4c4, virtual true, abstract: false, final true
  inline bool MoveNext();

  static inline ::GlobalNamespace::IndexFilter__GetEnumerator_d__23* New_ctor(int32_t __1__state);

  /// @brief Method System.Collections.Generic.IEnumerator<(System.Int32element,System.Int32durationOrder,System.Int32distributionOrder)>.get_Current, addr 0x26beb2c, size 0x10, virtual true,
  /// abstract: false, final true
  inline ::System::ValueTuple_3<int32_t, int32_t, int32_t> System_Collections_Generic_IEnumerator__System_Int32element_System_Int32durationOrder_System_Int32distributionOrder___get_Current();

  /// @brief Method System.Collections.IEnumerator.Reset, addr 0x26beb3c, size 0x38, virtual true, abstract: false, final true
  inline void System_Collections_IEnumerator_Reset();

  /// @brief Method System.Collections.IEnumerator.get_Current, addr 0x26beb74, size 0x64, virtual true, abstract: false, final true
  inline ::System::Object* System_Collections_IEnumerator_get_Current();

  /// @brief Method System.IDisposable.Dispose, addr 0x26be59c, size 0x1c, virtual true, abstract: false, final true
  inline void System_IDisposable_Dispose();

  constexpr int32_t const& __cordl_internal_get___1__state() const;

  constexpr int32_t& __cordl_internal_get___1__state();

  constexpr ::System::ValueTuple_3<int32_t, int32_t, int32_t> const& __cordl_internal_get___2__current() const;

  constexpr ::System::ValueTuple_3<int32_t, int32_t, int32_t>& __cordl_internal_get___2__current();

  constexpr ::GlobalNamespace::IndexFilter* const& __cordl_internal_get___4__this() const;

  constexpr ::GlobalNamespace::IndexFilter*& __cordl_internal_get___4__this();

  constexpr ::System::Collections::Generic::IEnumerator_1<::System::ValueTuple_2<int32_t, int32_t>>* const& __cordl_internal_get___7__wrap2() const;

  constexpr ::System::Collections::Generic::IEnumerator_1<::System::ValueTuple_2<int32_t, int32_t>>*& __cordl_internal_get___7__wrap2();

  constexpr int32_t const& __cordl_internal_get__elementId_5__4() const;

  constexpr int32_t& __cordl_internal_get__elementId_5__4();

  constexpr int32_t const& __cordl_internal_get__index_5__5() const;

  constexpr int32_t& __cordl_internal_get__index_5__5();

  constexpr int32_t const& __cordl_internal_get__limitedOrderIndex_5__2() const;

  constexpr int32_t& __cordl_internal_get__limitedOrderIndex_5__2();

  constexpr int32_t const& __cordl_internal_get__localChunkIndex_5__6() const;

  constexpr int32_t& __cordl_internal_get__localChunkIndex_5__6();

  constexpr void __cordl_internal_set___1__state(int32_t value);

  constexpr void __cordl_internal_set___2__current(::System::ValueTuple_3<int32_t, int32_t, int32_t> value);

  constexpr void __cordl_internal_set___4__this(::GlobalNamespace::IndexFilter* value);

  constexpr void __cordl_internal_set___7__wrap2(::System::Collections::Generic::IEnumerator_1<::System::ValueTuple_2<int32_t, int32_t>>* value);

  constexpr void __cordl_internal_set__elementId_5__4(int32_t value);

  constexpr void __cordl_internal_set__index_5__5(int32_t value);

  constexpr void __cordl_internal_set__limitedOrderIndex_5__2(int32_t value);

  constexpr void __cordl_internal_set__localChunkIndex_5__6(int32_t value);

  /// @brief Method <>m__Finally1, addr 0x26bea7c, size 0xb0, virtual false, abstract: false, final false
  inline void __m__Finally1();

  /// @brief Method .ctor, addr 0x26be4cc, size 0x28, virtual false, abstract: false, final false
  inline void _ctor(int32_t __1__state);

  /// @brief Convert to "::System::Collections::Generic::IEnumerator_1<::System::ValueTuple_3<int32_t,int32_t,int32_t>>"
  constexpr ::System::Collections::Generic::IEnumerator_1<::System::ValueTuple_3<int32_t, int32_t, int32_t>>*
  i___System__Collections__Generic__IEnumerator_1___System__ValueTuple_3_int32_t_int32_t_int32_t__() noexcept;

  /// @brief Convert to "::System::Collections::IEnumerator"
  constexpr ::System::Collections::IEnumerator* i___System__Collections__IEnumerator() noexcept;

  /// @brief Convert to "::System::IDisposable"
  constexpr ::System::IDisposable* i___System__IDisposable() noexcept;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr IndexFilter__GetEnumerator_d__23();

public:
  // Ctor Parameters [CppParam { name: "", ty: "IndexFilter__GetEnumerator_d__23", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  IndexFilter__GetEnumerator_d__23(IndexFilter__GetEnumerator_d__23&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "IndexFilter__GetEnumerator_d__23", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  IndexFilter__GetEnumerator_d__23(IndexFilter__GetEnumerator_d__23 const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 12913 };

  /// @brief Field <>1__state, offset: 0x10, size: 0x4, def value: None
  int32_t _____1__state;

  /// @brief Field <>2__current, offset: 0x14, size: 0xc, def value: None
  ::System::ValueTuple_3<int32_t, int32_t, int32_t> _____2__current;

  /// @brief Field <>4__this, offset: 0x20, size: 0x8, def value: None
  ::GlobalNamespace::IndexFilter* _____4__this;

  /// @brief Field <limitedOrderIndex>5__2, offset: 0x28, size: 0x4, def value: None
  int32_t ____limitedOrderIndex_5__2;

  /// @brief Field <>7__wrap2, offset: 0x30, size: 0x8, def value: None
  ::System::Collections::Generic::IEnumerator_1<::System::ValueTuple_2<int32_t, int32_t>>* _____7__wrap2;

  /// @brief Field <elementId>5__4, offset: 0x38, size: 0x4, def value: None
  int32_t ____elementId_5__4;

  /// @brief Field <index>5__5, offset: 0x3c, size: 0x4, def value: None
  int32_t ____index_5__5;

  /// @brief Field <localChunkIndex>5__6, offset: 0x40, size: 0x4, def value: None
  int32_t ____localChunkIndex_5__6;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::IndexFilter__GetEnumerator_d__23, _____1__state) == 0x10, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::IndexFilter__GetEnumerator_d__23, _____2__current) == 0x14, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::IndexFilter__GetEnumerator_d__23, _____4__this) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::IndexFilter__GetEnumerator_d__23, ____limitedOrderIndex_5__2) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::IndexFilter__GetEnumerator_d__23, _____7__wrap2) == 0x30, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::IndexFilter__GetEnumerator_d__23, ____elementId_5__4) == 0x38, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::IndexFilter__GetEnumerator_d__23, ____index_5__5) == 0x3c, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::IndexFilter__GetEnumerator_d__23, ____localChunkIndex_5__6) == 0x40, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::GlobalNamespace::IndexFilter__GetEnumerator_d__23, 0x48>, "Size mismatch!");

} // namespace GlobalNamespace
// Dependencies System.Collections.Generic.IEnumerable`1<T>, System.Collections.Generic.IEnumerator`1<T>, System.Collections.IEnumerable, System.Collections.IEnumerator, System.IDisposable,
// System.Object
namespace GlobalNamespace {
// Is value type: false
// CS Name: IndexFilter/<GetValues>d__24
class CORDL_TYPE IndexFilter__GetValues_d__24 : public ::System::Object {
public:
  // Declarations
  __declspec(property(get = System_Collections_Generic_IEnumerator_System_Int32__get_Current)) int32_t System_Collections_Generic_IEnumerator_System_Int32__Current;

  __declspec(property(get = System_Collections_IEnumerator_get_Current)) ::System::Object* System_Collections_IEnumerator_Current;

  /// @brief Field <>1__state, offset 0x10, size 0x4
  __declspec(property(get = __cordl_internal_get___1__state, put = __cordl_internal_set___1__state)) int32_t __1__state;

  /// @brief Field <>2__current, offset 0x14, size 0x4
  __declspec(property(get = __cordl_internal_get___2__current, put = __cordl_internal_set___2__current)) int32_t __2__current;

  /// @brief Field <>4__this, offset 0x20, size 0x8
  __declspec(property(get = __cordl_internal_get___4__this, put = __cordl_internal_set___4__this)) ::GlobalNamespace::IndexFilter* __4__this;

  /// @brief Field <>l__initialThreadId, offset 0x18, size 0x4
  __declspec(property(get = __cordl_internal_get___l__initialThreadId, put = __cordl_internal_set___l__initialThreadId)) int32_t __l__initialThreadId;

  /// @brief Field <i>5__3, offset 0x2c, size 0x4
  __declspec(property(get = __cordl_internal_get__i_5__3, put = __cordl_internal_set__i_5__3)) int32_t _i_5__3;

  /// @brief Field <value>5__2, offset 0x28, size 0x4
  __declspec(property(get = __cordl_internal_get__value_5__2, put = __cordl_internal_set__value_5__2)) int32_t _value_5__2;

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

  /// @brief Method MoveNext, addr 0x26bebdc, size 0x80, virtual true, abstract: false, final true
  inline bool MoveNext();

  static inline ::GlobalNamespace::IndexFilter__GetValues_d__24* New_ctor(int32_t __1__state);

  /// @brief Method System.Collections.Generic.IEnumerable<System.Int32>.GetEnumerator, addr 0x26becf8, size 0x9c, virtual true, abstract: false, final true
  inline ::System::Collections::Generic::IEnumerator_1<int32_t>* System_Collections_Generic_IEnumerable_System_Int32__GetEnumerator();

  /// @brief Method System.Collections.Generic.IEnumerator<System.Int32>.get_Current, addr 0x26bec5c, size 0x8, virtual true, abstract: false, final true
  inline int32_t System_Collections_Generic_IEnumerator_System_Int32__get_Current();

  /// @brief Method System.Collections.IEnumerable.GetEnumerator, addr 0x26bed94, size 0x4, virtual true, abstract: false, final true
  inline ::System::Collections::IEnumerator* System_Collections_IEnumerable_GetEnumerator();

  /// @brief Method System.Collections.IEnumerator.Reset, addr 0x26bec64, size 0x38, virtual true, abstract: false, final true
  inline void System_Collections_IEnumerator_Reset();

  /// @brief Method System.Collections.IEnumerator.get_Current, addr 0x26bec9c, size 0x5c, virtual true, abstract: false, final true
  inline ::System::Object* System_Collections_IEnumerator_get_Current();

  /// @brief Method System.IDisposable.Dispose, addr 0x26bebd8, size 0x4, virtual true, abstract: false, final true
  inline void System_IDisposable_Dispose();

  constexpr int32_t const& __cordl_internal_get___1__state() const;

  constexpr int32_t& __cordl_internal_get___1__state();

  constexpr int32_t const& __cordl_internal_get___2__current() const;

  constexpr int32_t& __cordl_internal_get___2__current();

  constexpr ::GlobalNamespace::IndexFilter* const& __cordl_internal_get___4__this() const;

  constexpr ::GlobalNamespace::IndexFilter*& __cordl_internal_get___4__this();

  constexpr int32_t const& __cordl_internal_get___l__initialThreadId() const;

  constexpr int32_t& __cordl_internal_get___l__initialThreadId();

  constexpr int32_t const& __cordl_internal_get__i_5__3() const;

  constexpr int32_t& __cordl_internal_get__i_5__3();

  constexpr int32_t const& __cordl_internal_get__value_5__2() const;

  constexpr int32_t& __cordl_internal_get__value_5__2();

  constexpr void __cordl_internal_set___1__state(int32_t value);

  constexpr void __cordl_internal_set___2__current(int32_t value);

  constexpr void __cordl_internal_set___4__this(::GlobalNamespace::IndexFilter* value);

  constexpr void __cordl_internal_set___l__initialThreadId(int32_t value);

  constexpr void __cordl_internal_set__i_5__3(int32_t value);

  constexpr void __cordl_internal_set__value_5__2(int32_t value);

  /// @brief Method .ctor, addr 0x26be564, size 0x34, virtual false, abstract: false, final false
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
  constexpr IndexFilter__GetValues_d__24();

public:
  // Ctor Parameters [CppParam { name: "", ty: "IndexFilter__GetValues_d__24", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  IndexFilter__GetValues_d__24(IndexFilter__GetValues_d__24&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "IndexFilter__GetValues_d__24", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  IndexFilter__GetValues_d__24(IndexFilter__GetValues_d__24 const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 12914 };

  /// @brief Field <>1__state, offset: 0x10, size: 0x4, def value: None
  int32_t _____1__state;

  /// @brief Field <>2__current, offset: 0x14, size: 0x4, def value: None
  int32_t _____2__current;

  /// @brief Field <>l__initialThreadId, offset: 0x18, size: 0x4, def value: None
  int32_t _____l__initialThreadId;

  /// @brief Field <>4__this, offset: 0x20, size: 0x8, def value: None
  ::GlobalNamespace::IndexFilter* _____4__this;

  /// @brief Field <value>5__2, offset: 0x28, size: 0x4, def value: None
  int32_t ____value_5__2;

  /// @brief Field <i>5__3, offset: 0x2c, size: 0x4, def value: None
  int32_t ____i_5__3;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::IndexFilter__GetValues_d__24, _____1__state) == 0x10, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::IndexFilter__GetValues_d__24, _____2__current) == 0x14, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::IndexFilter__GetValues_d__24, _____l__initialThreadId) == 0x18, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::IndexFilter__GetValues_d__24, _____4__this) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::IndexFilter__GetValues_d__24, ____value_5__2) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::IndexFilter__GetValues_d__24, ____i_5__3) == 0x2c, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::GlobalNamespace::IndexFilter__GetValues_d__24, 0x30>, "Size mismatch!");

} // namespace GlobalNamespace
// Dependencies IndexFilter::IndexFilterLimitAlsoAffectType, IndexFilter::IndexFilterRandomType, System.Collections.Generic.IEnumerable`1<T>, System.Collections.Generic.IReadOnlyCollection`1<T>,
// System.Collections.IEnumerable, System.Object, System.ValueTuple`3<T1, T2, T3>
namespace GlobalNamespace {
// Is value type: false
// CS Name: IndexFilter
class CORDL_TYPE IndexFilter : public ::System::Object {
public:
  // Declarations
  using IndexFilterLimitAlsoAffectType = ::GlobalNamespace::IndexFilter_IndexFilterLimitAlsoAffectType;

  using IndexFilterRandomType = ::GlobalNamespace::IndexFilter_IndexFilterRandomType;

  using _GetEnumerator_d__23 = ::GlobalNamespace::IndexFilter__GetEnumerator_d__23;

  using _GetValues_d__24 = ::GlobalNamespace::IndexFilter__GetValues_d__24;

  __declspec(property(get = get_Count)) int32_t Count;

  __declspec(property(get = get_VisibleCount)) int32_t VisibleCount;

  /// @brief Field _chunkSize, offset 0x1c, size 0x4
  __declspec(property(get = __cordl_internal_get__chunkSize, put = __cordl_internal_set__chunkSize)) int32_t _chunkSize;

  /// @brief Field _count, offset 0x30, size 0x4
  __declspec(property(get = __cordl_internal_get__count, put = __cordl_internal_set__count)) int32_t _count;

  /// @brief Field _groupSize, offset 0x18, size 0x4
  __declspec(property(get = __cordl_internal_get__groupSize, put = __cordl_internal_set__groupSize)) int32_t _groupSize;

  /// @brief Field _limitAlsoAffectType, offset 0x24, size 0x4
  __declspec(property(get = __cordl_internal_get__limitAlsoAffectType,
                      put = __cordl_internal_set__limitAlsoAffectType)) ::GlobalNamespace::IndexFilter_IndexFilterLimitAlsoAffectType _limitAlsoAffectType;

  /// @brief Field _random, offset 0x10, size 0x4
  __declspec(property(get = __cordl_internal_get__random, put = __cordl_internal_set__random)) ::GlobalNamespace::IndexFilter_IndexFilterRandomType _random;

  /// @brief Field _seed, offset 0x14, size 0x4
  __declspec(property(get = __cordl_internal_get__seed, put = __cordl_internal_set__seed)) int32_t _seed;

  /// @brief Field _start, offset 0x28, size 0x4
  __declspec(property(get = __cordl_internal_get__start, put = __cordl_internal_set__start)) int32_t _start;

  /// @brief Field _step, offset 0x2c, size 0x4
  __declspec(property(get = __cordl_internal_get__step, put = __cordl_internal_set__step)) int32_t _step;

  /// @brief Field _visibleCount, offset 0x20, size 0x4
  __declspec(property(get = __cordl_internal_get__visibleCount, put = __cordl_internal_set__visibleCount)) int32_t _visibleCount;

  __declspec(property(get = get_limitAlsoAffectType)) ::GlobalNamespace::IndexFilter_IndexFilterLimitAlsoAffectType limitAlsoAffectType;

  __declspec(property(get = get_limitsDistribution)) bool limitsDistribution;

  __declspec(property(get = get_limitsDuration)) bool limitsDuration;

  /// @brief Convert operator to "::System::Collections::Generic::IEnumerable_1<::System::ValueTuple_3<int32_t,int32_t,int32_t>>"
  constexpr operator ::System::Collections::Generic::IEnumerable_1<::System::ValueTuple_3<int32_t, int32_t, int32_t>>*() noexcept;

  /// @brief Convert operator to "::System::Collections::Generic::IReadOnlyCollection_1<::System::ValueTuple_3<int32_t,int32_t,int32_t>>"
  constexpr operator ::System::Collections::Generic::IReadOnlyCollection_1<::System::ValueTuple_3<int32_t, int32_t, int32_t>>*() noexcept;

  /// @brief Convert operator to "::System::Collections::IEnumerable"
  constexpr operator ::System::Collections::IEnumerable*() noexcept;

  /// @brief Method GetEnumerator, addr 0x26bbde8, size 0x60, virtual true, abstract: false, final true
  inline ::System::Collections::Generic::IEnumerator_1<::System::ValueTuple_3<int32_t, int32_t, int32_t>>* GetEnumerator();

  /// @brief Method GetValues, addr 0x26be4f4, size 0x70, virtual false, abstract: false, final false
  inline ::System::Collections::Generic::IEnumerable_1<int32_t>* GetValues();

  static inline ::GlobalNamespace::IndexFilter* New_ctor(int32_t start, int32_t end, int32_t groupSize, ::GlobalNamespace::IndexFilter_IndexFilterRandomType random, int32_t seed, int32_t chunkSize,
                                                         float_t limit, ::GlobalNamespace::IndexFilter_IndexFilterLimitAlsoAffectType limitAlsoAffectType);

  static inline ::GlobalNamespace::IndexFilter* New_ctor(int32_t start, int32_t step, int32_t count, int32_t groupSize, ::GlobalNamespace::IndexFilter_IndexFilterRandomType random, int32_t seed,
                                                         int32_t chunkSize, float_t limit, ::GlobalNamespace::IndexFilter_IndexFilterLimitAlsoAffectType limitAlsoAffectType);

  /// @brief Method System.Collections.IEnumerable.GetEnumerator, addr 0x26be598, size 0x4, virtual true, abstract: false, final true
  inline ::System::Collections::IEnumerator* System_Collections_IEnumerable_GetEnumerator();

  constexpr int32_t const& __cordl_internal_get__chunkSize() const;

  constexpr int32_t& __cordl_internal_get__chunkSize();

  constexpr int32_t const& __cordl_internal_get__count() const;

  constexpr int32_t& __cordl_internal_get__count();

  constexpr int32_t const& __cordl_internal_get__groupSize() const;

  constexpr int32_t& __cordl_internal_get__groupSize();

  constexpr ::GlobalNamespace::IndexFilter_IndexFilterLimitAlsoAffectType const& __cordl_internal_get__limitAlsoAffectType() const;

  constexpr ::GlobalNamespace::IndexFilter_IndexFilterLimitAlsoAffectType& __cordl_internal_get__limitAlsoAffectType();

  constexpr ::GlobalNamespace::IndexFilter_IndexFilterRandomType const& __cordl_internal_get__random() const;

  constexpr ::GlobalNamespace::IndexFilter_IndexFilterRandomType& __cordl_internal_get__random();

  constexpr int32_t const& __cordl_internal_get__seed() const;

  constexpr int32_t& __cordl_internal_get__seed();

  constexpr int32_t const& __cordl_internal_get__start() const;

  constexpr int32_t& __cordl_internal_get__start();

  constexpr int32_t const& __cordl_internal_get__step() const;

  constexpr int32_t& __cordl_internal_get__step();

  constexpr int32_t const& __cordl_internal_get__visibleCount() const;

  constexpr int32_t& __cordl_internal_get__visibleCount();

  constexpr void __cordl_internal_set__chunkSize(int32_t value);

  constexpr void __cordl_internal_set__count(int32_t value);

  constexpr void __cordl_internal_set__groupSize(int32_t value);

  constexpr void __cordl_internal_set__limitAlsoAffectType(::GlobalNamespace::IndexFilter_IndexFilterLimitAlsoAffectType value);

  constexpr void __cordl_internal_set__random(::GlobalNamespace::IndexFilter_IndexFilterRandomType value);

  constexpr void __cordl_internal_set__seed(int32_t value);

  constexpr void __cordl_internal_set__start(int32_t value);

  constexpr void __cordl_internal_set__step(int32_t value);

  constexpr void __cordl_internal_set__visibleCount(int32_t value);

  /// @brief Method .ctor, addr 0x26be3f8, size 0xd4, virtual false, abstract: false, final false
  inline void _ctor(int32_t start, int32_t end, int32_t groupSize, ::GlobalNamespace::IndexFilter_IndexFilterRandomType random, int32_t seed, int32_t chunkSize, float_t limit,
                    ::GlobalNamespace::IndexFilter_IndexFilterLimitAlsoAffectType limitAlsoAffectType);

  /// @brief Method .ctor, addr 0x26be310, size 0xe8, virtual false, abstract: false, final false
  inline void _ctor(int32_t start, int32_t step, int32_t count, int32_t groupSize, ::GlobalNamespace::IndexFilter_IndexFilterRandomType random, int32_t seed, int32_t chunkSize, float_t limit,
                    ::GlobalNamespace::IndexFilter_IndexFilterLimitAlsoAffectType limitAlsoAffectType);

  /// @brief Method get_Count, addr 0x26be2ec, size 0x8, virtual true, abstract: false, final true
  inline int32_t get_Count();

  /// @brief Method get_VisibleCount, addr 0x26be2f4, size 0x8, virtual false, abstract: false, final false
  inline int32_t get_VisibleCount();

  /// @brief Method get_limitAlsoAffectType, addr 0x26be2fc, size 0x8, virtual false, abstract: false, final false
  inline ::GlobalNamespace::IndexFilter_IndexFilterLimitAlsoAffectType get_limitAlsoAffectType();

  /// @brief Method get_limitsDistribution, addr 0x26bb528, size 0xc, virtual false, abstract: false, final false
  inline bool get_limitsDistribution();

  /// @brief Method get_limitsDuration, addr 0x26be304, size 0xc, virtual false, abstract: false, final false
  inline bool get_limitsDuration();

  /// @brief Convert to "::System::Collections::Generic::IEnumerable_1<::System::ValueTuple_3<int32_t,int32_t,int32_t>>"
  constexpr ::System::Collections::Generic::IEnumerable_1<::System::ValueTuple_3<int32_t, int32_t, int32_t>>*
  i___System__Collections__Generic__IEnumerable_1___System__ValueTuple_3_int32_t_int32_t_int32_t__() noexcept;

  /// @brief Convert to "::System::Collections::Generic::IReadOnlyCollection_1<::System::ValueTuple_3<int32_t,int32_t,int32_t>>"
  constexpr ::System::Collections::Generic::IReadOnlyCollection_1<::System::ValueTuple_3<int32_t, int32_t, int32_t>>*
  i___System__Collections__Generic__IReadOnlyCollection_1___System__ValueTuple_3_int32_t_int32_t_int32_t__() noexcept;

  /// @brief Convert to "::System::Collections::IEnumerable"
  constexpr ::System::Collections::IEnumerable* i___System__Collections__IEnumerable() noexcept;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr IndexFilter();

public:
  // Ctor Parameters [CppParam { name: "", ty: "IndexFilter", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  IndexFilter(IndexFilter&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "IndexFilter", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  IndexFilter(IndexFilter const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 12915 };

  /// @brief Field _random, offset: 0x10, size: 0x4, def value: None
  ::GlobalNamespace::IndexFilter_IndexFilterRandomType ____random;

  /// @brief Field _seed, offset: 0x14, size: 0x4, def value: None
  int32_t ____seed;

  /// @brief Field _groupSize, offset: 0x18, size: 0x4, def value: None
  int32_t ____groupSize;

  /// @brief Field _chunkSize, offset: 0x1c, size: 0x4, def value: None
  int32_t ____chunkSize;

  /// @brief Field _visibleCount, offset: 0x20, size: 0x4, def value: None
  int32_t ____visibleCount;

  /// @brief Field _limitAlsoAffectType, offset: 0x24, size: 0x4, def value: None
  ::GlobalNamespace::IndexFilter_IndexFilterLimitAlsoAffectType ____limitAlsoAffectType;

  /// @brief Field _start, offset: 0x28, size: 0x4, def value: None
  int32_t ____start;

  /// @brief Field _step, offset: 0x2c, size: 0x4, def value: None
  int32_t ____step;

  /// @brief Field _count, offset: 0x30, size: 0x4, def value: None
  int32_t ____count;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::IndexFilter, ____random) == 0x10, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::IndexFilter, ____seed) == 0x14, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::IndexFilter, ____groupSize) == 0x18, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::IndexFilter, ____chunkSize) == 0x1c, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::IndexFilter, ____visibleCount) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::IndexFilter, ____limitAlsoAffectType) == 0x24, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::IndexFilter, ____start) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::IndexFilter, ____step) == 0x2c, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::IndexFilter, ____count) == 0x30, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::GlobalNamespace::IndexFilter, 0x38>, "Size mismatch!");

} // namespace GlobalNamespace
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::IndexFilter_IndexFilterLimitAlsoAffectType, "", "IndexFilter/IndexFilterLimitAlsoAffectType");
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::IndexFilter_IndexFilterRandomType, "", "IndexFilter/IndexFilterRandomType");
NEED_NO_BOX(::GlobalNamespace::IndexFilter);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::IndexFilter*, "", "IndexFilter");
NEED_NO_BOX(::GlobalNamespace::IndexFilter__GetEnumerator_d__23);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::IndexFilter__GetEnumerator_d__23*, "", "IndexFilter/<GetEnumerator>d__23");
NEED_NO_BOX(::GlobalNamespace::IndexFilter__GetValues_d__24);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::IndexFilter__GetValues_d__24*, "", "IndexFilter/<GetValues>d__24");
