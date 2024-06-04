#pragma once
// IWYU pragma private; include "GlobalNamespace/IndexFilter.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "GlobalNamespace/zzzz__IndexFilter_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "System/zzzz__ValueTuple_3_def.hpp"
#include <cmath>
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(IndexFilter)
namespace GlobalNamespace {
struct __IndexFilter__IndexFilterLimitAlsoAffectType;
}
namespace GlobalNamespace {
struct __IndexFilter__IndexFilterRandomType;
}
namespace GlobalNamespace {
class __IndexFilter___GetEnumerator_d__23;
}
namespace GlobalNamespace {
class __IndexFilter___GetValues_d__24;
}
namespace System::Collections::Generic {
template <typename T> class IEnumerable_1;
}
namespace System::Collections::Generic {
template <typename T> class IEnumerator_1;
}
namespace System::Collections::Generic {
template <typename T> class IReadOnlyCollection_1;
}
namespace System::Collections {
class IEnumerable;
}
namespace System::Collections {
class IEnumerator;
}
namespace System {
class IDisposable;
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
struct __IndexFilter__IndexFilterLimitAlsoAffectType;
}
namespace GlobalNamespace {
struct __IndexFilter__IndexFilterRandomType;
}
namespace GlobalNamespace {
class IndexFilter;
}
namespace GlobalNamespace {
class __IndexFilter___GetEnumerator_d__23;
}
namespace GlobalNamespace {
class __IndexFilter___GetValues_d__24;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::__IndexFilter__IndexFilterLimitAlsoAffectType);
MARK_VAL_T(::GlobalNamespace::__IndexFilter__IndexFilterRandomType);
MARK_REF_PTR_T(::GlobalNamespace::IndexFilter);
MARK_REF_PTR_T(::GlobalNamespace::__IndexFilter___GetEnumerator_d__23);
MARK_REF_PTR_T(::GlobalNamespace::__IndexFilter___GetValues_d__24);
// Type: ::IndexFilterRandomType
// SizeInfo { instance_size: 4, native_size: 4, calculated_instance_size: 4, calculated_native_size: 20, minimum_alignment: 4, natural_alignment: 4, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: true
// CS Name: ::IndexFilter::IndexFilterRandomType
struct CORDL_TYPE __IndexFilter__IndexFilterRandomType {
public:
  // Declarations
  using __CORDL_BACKING_ENUM_TYPE = int32_t;

  /// @brief Nested struct ____IndexFilter__IndexFilterRandomType_Unwrapped
  enum struct ____IndexFilter__IndexFilterRandomType_Unwrapped : int32_t {
    __E_NoRandom = static_cast<int32_t>(0x0),
    __E_KeepOrder = static_cast<int32_t>(0x1),
    __E_RandomElements = static_cast<int32_t>(0x2),
  };

  /// @brief Conversion into unwrapped enum value
  constexpr operator ____IndexFilter__IndexFilterRandomType_Unwrapped() const noexcept {
    return static_cast<____IndexFilter__IndexFilterRandomType_Unwrapped>(this->value__);
  }

  /// @brief Conversion into unwrapped enum value
  constexpr explicit operator int32_t() const noexcept {
    return static_cast<int32_t>(this->value__);
  }

  // Ctor Parameters []
  // @brief default ctor
  constexpr __IndexFilter__IndexFilterRandomType();

  // Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
  constexpr __IndexFilter__IndexFilterRandomType(int32_t value__) noexcept;

  /// @brief Field value__, offset: 0x0, size: 0x4, def value: None
  int32_t value__;

  /// @brief Field KeepOrder value: static_cast<int32_t>(0x1)
  static ::GlobalNamespace::__IndexFilter__IndexFilterRandomType const KeepOrder;

  /// @brief Field NoRandom value: static_cast<int32_t>(0x0)
  static ::GlobalNamespace::__IndexFilter__IndexFilterRandomType const NoRandom;

  /// @brief Field RandomElements value: static_cast<int32_t>(0x2)
  static ::GlobalNamespace::__IndexFilter__IndexFilterRandomType const RandomElements;

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x4 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::__IndexFilter__IndexFilterRandomType, 0x4>, "Size mismatch!");

static_assert(offsetof(::GlobalNamespace::__IndexFilter__IndexFilterRandomType, value__) == 0x0, "Offset mismatch!");

} // namespace GlobalNamespace
// Type: ::IndexFilterLimitAlsoAffectType
// SizeInfo { instance_size: 4, native_size: 4, calculated_instance_size: 4, calculated_native_size: 20, minimum_alignment: 4, natural_alignment: 4, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: true
// CS Name: ::IndexFilter::IndexFilterLimitAlsoAffectType
struct CORDL_TYPE __IndexFilter__IndexFilterLimitAlsoAffectType {
public:
  // Declarations
  using __CORDL_BACKING_ENUM_TYPE = int32_t;

  /// @brief Nested struct ____IndexFilter__IndexFilterLimitAlsoAffectType_Unwrapped
  enum struct ____IndexFilter__IndexFilterLimitAlsoAffectType_Unwrapped : int32_t {
    __E_None = static_cast<int32_t>(0x0),
    __E_Duration = static_cast<int32_t>(0x1),
    __E_Distribution = static_cast<int32_t>(0x2),
  };

  /// @brief Conversion into unwrapped enum value
  constexpr operator ____IndexFilter__IndexFilterLimitAlsoAffectType_Unwrapped() const noexcept {
    return static_cast<____IndexFilter__IndexFilterLimitAlsoAffectType_Unwrapped>(this->value__);
  }

  /// @brief Conversion into unwrapped enum value
  constexpr explicit operator int32_t() const noexcept {
    return static_cast<int32_t>(this->value__);
  }

  // Ctor Parameters []
  // @brief default ctor
  constexpr __IndexFilter__IndexFilterLimitAlsoAffectType();

  // Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
  constexpr __IndexFilter__IndexFilterLimitAlsoAffectType(int32_t value__) noexcept;

  /// @brief Field value__, offset: 0x0, size: 0x4, def value: None
  int32_t value__;

  /// @brief Field Distribution value: static_cast<int32_t>(0x2)
  static ::GlobalNamespace::__IndexFilter__IndexFilterLimitAlsoAffectType const Distribution;

  /// @brief Field Duration value: static_cast<int32_t>(0x1)
  static ::GlobalNamespace::__IndexFilter__IndexFilterLimitAlsoAffectType const Duration;

  /// @brief Field None value: static_cast<int32_t>(0x0)
  static ::GlobalNamespace::__IndexFilter__IndexFilterLimitAlsoAffectType const None;

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x4 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::__IndexFilter__IndexFilterLimitAlsoAffectType, 0x4>, "Size mismatch!");

static_assert(offsetof(::GlobalNamespace::__IndexFilter__IndexFilterLimitAlsoAffectType, value__) == 0x0, "Offset mismatch!");

} // namespace GlobalNamespace
// Type: ::<GetEnumerator>d__23
// SizeInfo { instance_size: 72, native_size: -1, calculated_instance_size: 72, calculated_native_size: 68, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// CS Name: ::IndexFilter::<GetEnumerator>d__23*
class CORDL_TYPE __IndexFilter___GetEnumerator_d__23 : public ::System::Object {
public:
  // Declarations
  __declspec(property(get = System_Collections_Generic_IEnumerator__System_Int32element_System_Int32durationOrder_System_Int32distributionOrder___get_Current))::System::ValueTuple_3<
      int32_t, int32_t, int32_t> System_Collections_Generic_IEnumerator__System_Int32element_System_Int32durationOrder_System_Int32distributionOrder___Current;

  __declspec(property(get = System_Collections_IEnumerator_get_Current))::System::Object* System_Collections_IEnumerator_Current;

  /// @brief Field <>1__state, offset 0x10, size 0x4
  __declspec(property(get = __cordl_internal_get___1__state, put = __cordl_internal_set___1__state)) int32_t __1__state;

  /// @brief Field <>2__current, offset 0x14, size 0xc
  __declspec(property(get = __cordl_internal_get___2__current, put = __cordl_internal_set___2__current))::System::ValueTuple_3<int32_t, int32_t, int32_t> __2__current;

  /// @brief Field <>4__this, offset 0x20, size 0x8
  __declspec(property(get = __cordl_internal_get___4__this, put = __cordl_internal_set___4__this))::GlobalNamespace::IndexFilter* __4__this;

  /// @brief Field <>7__wrap2, offset 0x30, size 0x8
  __declspec(property(get = __cordl_internal_get___7__wrap2, put = __cordl_internal_set___7__wrap2))::System::Collections::Generic::IEnumerator_1<::System::ValueTuple_2<int32_t, int32_t>>* __7__wrap2;

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

  /// @brief Method MoveNext, addr 0x14b9314, size 0x4dc, virtual true, abstract: false, final true
  inline bool MoveNext();

  static inline ::GlobalNamespace::__IndexFilter___GetEnumerator_d__23* New_ctor(int32_t __1__state);

  /// @brief Method System.Collections.Generic.IEnumerator<(System.Int32element,System.Int32durationOrder,System.Int32distributionOrder)>.get_Current, addr 0x14b98a0, size 0x10, virtual true,
  /// abstract: false, final true
  inline ::System::ValueTuple_3<int32_t, int32_t, int32_t> System_Collections_Generic_IEnumerator__System_Int32element_System_Int32durationOrder_System_Int32distributionOrder___get_Current();

  /// @brief Method System.Collections.IEnumerator.Reset, addr 0x14b98b0, size 0x40, virtual true, abstract: false, final true
  inline void System_Collections_IEnumerator_Reset();

  /// @brief Method System.Collections.IEnumerator.get_Current, addr 0x14b98f0, size 0x64, virtual true, abstract: false, final true
  inline ::System::Object* System_Collections_IEnumerator_get_Current();

  /// @brief Method System.IDisposable.Dispose, addr 0x14b92f8, size 0x1c, virtual true, abstract: false, final true
  inline void System_IDisposable_Dispose();

  constexpr int32_t const& __cordl_internal_get___1__state() const;

  constexpr int32_t& __cordl_internal_get___1__state();

  constexpr ::System::ValueTuple_3<int32_t, int32_t, int32_t> const& __cordl_internal_get___2__current() const;

  constexpr ::System::ValueTuple_3<int32_t, int32_t, int32_t>& __cordl_internal_get___2__current();

  constexpr ::GlobalNamespace::IndexFilter*& __cordl_internal_get___4__this();

  constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::IndexFilter*> const& __cordl_internal_get___4__this() const;

  constexpr ::System::Collections::Generic::IEnumerator_1<::System::ValueTuple_2<int32_t, int32_t>>*& __cordl_internal_get___7__wrap2();

  constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::IEnumerator_1<::System::ValueTuple_2<int32_t, int32_t>>*> const& __cordl_internal_get___7__wrap2() const;

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

  /// @brief Method <>m__Finally1, addr 0x14b97f0, size 0xb0, virtual false, abstract: false, final false
  inline void __m__Finally1();

  /// @brief Method .ctor, addr 0x14b9220, size 0x28, virtual false, abstract: false, final false
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
  constexpr __IndexFilter___GetEnumerator_d__23();

public:
  // Ctor Parameters [CppParam { name: "", ty: "__IndexFilter___GetEnumerator_d__23", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __IndexFilter___GetEnumerator_d__23(__IndexFilter___GetEnumerator_d__23&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__IndexFilter___GetEnumerator_d__23", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __IndexFilter___GetEnumerator_d__23(__IndexFilter___GetEnumerator_d__23 const&) = delete;

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
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::__IndexFilter___GetEnumerator_d__23, 0x48>, "Size mismatch!");

static_assert(offsetof(::GlobalNamespace::__IndexFilter___GetEnumerator_d__23, _____1__state) == 0x10, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__IndexFilter___GetEnumerator_d__23, _____2__current) == 0x14, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__IndexFilter___GetEnumerator_d__23, _____4__this) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__IndexFilter___GetEnumerator_d__23, ____limitedOrderIndex_5__2) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__IndexFilter___GetEnumerator_d__23, _____7__wrap2) == 0x30, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__IndexFilter___GetEnumerator_d__23, ____elementId_5__4) == 0x38, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__IndexFilter___GetEnumerator_d__23, ____index_5__5) == 0x3c, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__IndexFilter___GetEnumerator_d__23, ____localChunkIndex_5__6) == 0x40, "Offset mismatch!");

} // namespace GlobalNamespace
// Type: ::<GetValues>d__24
// SizeInfo { instance_size: 48, native_size: -1, calculated_instance_size: 48, calculated_native_size: 48, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// CS Name: ::IndexFilter::<GetValues>d__24*
class CORDL_TYPE __IndexFilter___GetValues_d__24 : public ::System::Object {
public:
  // Declarations
  __declspec(property(get = System_Collections_Generic_IEnumerator_System_Int32__get_Current)) int32_t System_Collections_Generic_IEnumerator_System_Int32__Current;

  __declspec(property(get = System_Collections_IEnumerator_get_Current))::System::Object* System_Collections_IEnumerator_Current;

  /// @brief Field <>1__state, offset 0x10, size 0x4
  __declspec(property(get = __cordl_internal_get___1__state, put = __cordl_internal_set___1__state)) int32_t __1__state;

  /// @brief Field <>2__current, offset 0x14, size 0x4
  __declspec(property(get = __cordl_internal_get___2__current, put = __cordl_internal_set___2__current)) int32_t __2__current;

  /// @brief Field <>4__this, offset 0x20, size 0x8
  __declspec(property(get = __cordl_internal_get___4__this, put = __cordl_internal_set___4__this))::GlobalNamespace::IndexFilter* __4__this;

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

  /// @brief Method MoveNext, addr 0x14b9958, size 0x80, virtual true, abstract: false, final true
  inline bool MoveNext();

  static inline ::GlobalNamespace::__IndexFilter___GetValues_d__24* New_ctor(int32_t __1__state);

  /// @brief Method System.Collections.Generic.IEnumerable<System.Int32>.GetEnumerator, addr 0x14b9a7c, size 0xa4, virtual true, abstract: false, final true
  inline ::System::Collections::Generic::IEnumerator_1<int32_t>* System_Collections_Generic_IEnumerable_System_Int32__GetEnumerator();

  /// @brief Method System.Collections.Generic.IEnumerator<System.Int32>.get_Current, addr 0x14b99d8, size 0x8, virtual true, abstract: false, final true
  inline int32_t System_Collections_Generic_IEnumerator_System_Int32__get_Current();

  /// @brief Method System.Collections.IEnumerable.GetEnumerator, addr 0x14b9b20, size 0x4, virtual true, abstract: false, final true
  inline ::System::Collections::IEnumerator* System_Collections_IEnumerable_GetEnumerator();

  /// @brief Method System.Collections.IEnumerator.Reset, addr 0x14b99e0, size 0x40, virtual true, abstract: false, final true
  inline void System_Collections_IEnumerator_Reset();

  /// @brief Method System.Collections.IEnumerator.get_Current, addr 0x14b9a20, size 0x5c, virtual true, abstract: false, final true
  inline ::System::Object* System_Collections_IEnumerator_get_Current();

  /// @brief Method System.IDisposable.Dispose, addr 0x14b9954, size 0x4, virtual true, abstract: false, final true
  inline void System_IDisposable_Dispose();

  constexpr int32_t const& __cordl_internal_get___1__state() const;

  constexpr int32_t& __cordl_internal_get___1__state();

  constexpr int32_t const& __cordl_internal_get___2__current() const;

  constexpr int32_t& __cordl_internal_get___2__current();

  constexpr ::GlobalNamespace::IndexFilter*& __cordl_internal_get___4__this();

  constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::IndexFilter*> const& __cordl_internal_get___4__this() const;

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

  /// @brief Method .ctor, addr 0x14b92c0, size 0x34, virtual false, abstract: false, final false
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
  constexpr __IndexFilter___GetValues_d__24();

public:
  // Ctor Parameters [CppParam { name: "", ty: "__IndexFilter___GetValues_d__24", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __IndexFilter___GetValues_d__24(__IndexFilter___GetValues_d__24&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__IndexFilter___GetValues_d__24", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __IndexFilter___GetValues_d__24(__IndexFilter___GetValues_d__24 const&) = delete;

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
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::__IndexFilter___GetValues_d__24, 0x30>, "Size mismatch!");

static_assert(offsetof(::GlobalNamespace::__IndexFilter___GetValues_d__24, _____1__state) == 0x10, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__IndexFilter___GetValues_d__24, _____2__current) == 0x14, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__IndexFilter___GetValues_d__24, _____l__initialThreadId) == 0x18, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__IndexFilter___GetValues_d__24, _____4__this) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__IndexFilter___GetValues_d__24, ____value_5__2) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__IndexFilter___GetValues_d__24, ____i_5__3) == 0x2c, "Offset mismatch!");

} // namespace GlobalNamespace
// Type: ::IndexFilter
// SizeInfo { instance_size: 56, native_size: -1, calculated_instance_size: 56, calculated_native_size: 52, minimum_alignment: 8, natural_alignment: 4, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// CS Name: ::IndexFilter*
class CORDL_TYPE IndexFilter : public ::System::Object {
public:
  // Declarations
  using IndexFilterLimitAlsoAffectType = ::GlobalNamespace::__IndexFilter__IndexFilterLimitAlsoAffectType;

  using IndexFilterRandomType = ::GlobalNamespace::__IndexFilter__IndexFilterRandomType;

  using _GetEnumerator_d__23 = ::GlobalNamespace::__IndexFilter___GetEnumerator_d__23;

  using _GetValues_d__24 = ::GlobalNamespace::__IndexFilter___GetValues_d__24;

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
                      put = __cordl_internal_set__limitAlsoAffectType))::GlobalNamespace::__IndexFilter__IndexFilterLimitAlsoAffectType _limitAlsoAffectType;

  /// @brief Field _random, offset 0x10, size 0x4
  __declspec(property(get = __cordl_internal_get__random, put = __cordl_internal_set__random))::GlobalNamespace::__IndexFilter__IndexFilterRandomType _random;

  /// @brief Field _seed, offset 0x14, size 0x4
  __declspec(property(get = __cordl_internal_get__seed, put = __cordl_internal_set__seed)) int32_t _seed;

  /// @brief Field _start, offset 0x28, size 0x4
  __declspec(property(get = __cordl_internal_get__start, put = __cordl_internal_set__start)) int32_t _start;

  /// @brief Field _step, offset 0x2c, size 0x4
  __declspec(property(get = __cordl_internal_get__step, put = __cordl_internal_set__step)) int32_t _step;

  /// @brief Field _visibleCount, offset 0x20, size 0x4
  __declspec(property(get = __cordl_internal_get__visibleCount, put = __cordl_internal_set__visibleCount)) int32_t _visibleCount;

  __declspec(property(get = get_limitAlsoAffectType))::GlobalNamespace::__IndexFilter__IndexFilterLimitAlsoAffectType limitAlsoAffectType;

  __declspec(property(get = get_limitsDistribution)) bool limitsDistribution;

  __declspec(property(get = get_limitsDuration)) bool limitsDuration;

  /// @brief Convert operator to "::System::Collections::Generic::IEnumerable_1<::System::ValueTuple_3<int32_t,int32_t,int32_t>>"
  constexpr operator ::System::Collections::Generic::IEnumerable_1<::System::ValueTuple_3<int32_t, int32_t, int32_t>>*() noexcept;

  /// @brief Convert operator to "::System::Collections::Generic::IReadOnlyCollection_1<::System::ValueTuple_3<int32_t,int32_t,int32_t>>"
  constexpr operator ::System::Collections::Generic::IReadOnlyCollection_1<::System::ValueTuple_3<int32_t, int32_t, int32_t>>*() noexcept;

  /// @brief Convert operator to "::System::Collections::IEnumerable"
  constexpr operator ::System::Collections::IEnumerable*() noexcept;

  /// @brief Method GetEnumerator, addr 0x14b6c48, size 0x68, virtual true, abstract: false, final true
  inline ::System::Collections::Generic::IEnumerator_1<::System::ValueTuple_3<int32_t, int32_t, int32_t>>* GetEnumerator();

  /// @brief Method GetValues, addr 0x14b9248, size 0x78, virtual false, abstract: false, final false
  inline ::System::Collections::Generic::IEnumerable_1<int32_t>* GetValues();

  static inline ::GlobalNamespace::IndexFilter* New_ctor(int32_t start, int32_t end, int32_t groupSize, ::GlobalNamespace::__IndexFilter__IndexFilterRandomType random, int32_t seed, int32_t chunkSize,
                                                         float_t limit, ::GlobalNamespace::__IndexFilter__IndexFilterLimitAlsoAffectType limitAlsoAffectType);

  static inline ::GlobalNamespace::IndexFilter* New_ctor(int32_t start, int32_t step, int32_t count, int32_t groupSize, ::GlobalNamespace::__IndexFilter__IndexFilterRandomType random, int32_t seed,
                                                         int32_t chunkSize, float_t limit, ::GlobalNamespace::__IndexFilter__IndexFilterLimitAlsoAffectType limitAlsoAffectType);

  /// @brief Method System.Collections.IEnumerable.GetEnumerator, addr 0x14b92f4, size 0x4, virtual true, abstract: false, final true
  inline ::System::Collections::IEnumerator* System_Collections_IEnumerable_GetEnumerator();

  constexpr int32_t const& __cordl_internal_get__chunkSize() const;

  constexpr int32_t& __cordl_internal_get__chunkSize();

  constexpr int32_t const& __cordl_internal_get__count() const;

  constexpr int32_t& __cordl_internal_get__count();

  constexpr int32_t const& __cordl_internal_get__groupSize() const;

  constexpr int32_t& __cordl_internal_get__groupSize();

  constexpr ::GlobalNamespace::__IndexFilter__IndexFilterLimitAlsoAffectType const& __cordl_internal_get__limitAlsoAffectType() const;

  constexpr ::GlobalNamespace::__IndexFilter__IndexFilterLimitAlsoAffectType& __cordl_internal_get__limitAlsoAffectType();

  constexpr ::GlobalNamespace::__IndexFilter__IndexFilterRandomType const& __cordl_internal_get__random() const;

  constexpr ::GlobalNamespace::__IndexFilter__IndexFilterRandomType& __cordl_internal_get__random();

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

  constexpr void __cordl_internal_set__limitAlsoAffectType(::GlobalNamespace::__IndexFilter__IndexFilterLimitAlsoAffectType value);

  constexpr void __cordl_internal_set__random(::GlobalNamespace::__IndexFilter__IndexFilterRandomType value);

  constexpr void __cordl_internal_set__seed(int32_t value);

  constexpr void __cordl_internal_set__start(int32_t value);

  constexpr void __cordl_internal_set__step(int32_t value);

  constexpr void __cordl_internal_set__visibleCount(int32_t value);

  /// @brief Method .ctor, addr 0x14b9140, size 0xe0, virtual false, abstract: false, final false
  inline void _ctor(int32_t start, int32_t end, int32_t groupSize, ::GlobalNamespace::__IndexFilter__IndexFilterRandomType random, int32_t seed, int32_t chunkSize, float_t limit,
                    ::GlobalNamespace::__IndexFilter__IndexFilterLimitAlsoAffectType limitAlsoAffectType);

  /// @brief Method .ctor, addr 0x14b9058, size 0xe8, virtual false, abstract: false, final false
  inline void _ctor(int32_t start, int32_t step, int32_t count, int32_t groupSize, ::GlobalNamespace::__IndexFilter__IndexFilterRandomType random, int32_t seed, int32_t chunkSize, float_t limit,
                    ::GlobalNamespace::__IndexFilter__IndexFilterLimitAlsoAffectType limitAlsoAffectType);

  /// @brief Method get_Count, addr 0x14b9034, size 0x8, virtual true, abstract: false, final true
  inline int32_t get_Count();

  /// @brief Method get_VisibleCount, addr 0x14b903c, size 0x8, virtual false, abstract: false, final false
  inline int32_t get_VisibleCount();

  /// @brief Method get_limitAlsoAffectType, addr 0x14b9044, size 0x8, virtual false, abstract: false, final false
  inline ::GlobalNamespace::__IndexFilter__IndexFilterLimitAlsoAffectType get_limitAlsoAffectType();

  /// @brief Method get_limitsDistribution, addr 0x14b637c, size 0xc, virtual false, abstract: false, final false
  inline bool get_limitsDistribution();

  /// @brief Method get_limitsDuration, addr 0x14b904c, size 0xc, virtual false, abstract: false, final false
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

  /// @brief Field _random, offset: 0x10, size: 0x4, def value: None
  ::GlobalNamespace::__IndexFilter__IndexFilterRandomType ____random;

  /// @brief Field _seed, offset: 0x14, size: 0x4, def value: None
  int32_t ____seed;

  /// @brief Field _groupSize, offset: 0x18, size: 0x4, def value: None
  int32_t ____groupSize;

  /// @brief Field _chunkSize, offset: 0x1c, size: 0x4, def value: None
  int32_t ____chunkSize;

  /// @brief Field _visibleCount, offset: 0x20, size: 0x4, def value: None
  int32_t ____visibleCount;

  /// @brief Field _limitAlsoAffectType, offset: 0x24, size: 0x4, def value: None
  ::GlobalNamespace::__IndexFilter__IndexFilterLimitAlsoAffectType ____limitAlsoAffectType;

  /// @brief Field _start, offset: 0x28, size: 0x4, def value: None
  int32_t ____start;

  /// @brief Field _step, offset: 0x2c, size: 0x4, def value: None
  int32_t ____step;

  /// @brief Field _count, offset: 0x30, size: 0x4, def value: None
  int32_t ____count;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::IndexFilter, 0x38>, "Size mismatch!");

static_assert(offsetof(::GlobalNamespace::IndexFilter, ____random) == 0x10, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::IndexFilter, ____seed) == 0x14, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::IndexFilter, ____groupSize) == 0x18, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::IndexFilter, ____chunkSize) == 0x1c, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::IndexFilter, ____visibleCount) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::IndexFilter, ____limitAlsoAffectType) == 0x24, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::IndexFilter, ____start) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::IndexFilter, ____step) == 0x2c, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::IndexFilter, ____count) == 0x30, "Offset mismatch!");

} // namespace GlobalNamespace
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::__IndexFilter__IndexFilterLimitAlsoAffectType, "", "IndexFilter/IndexFilterLimitAlsoAffectType");
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::__IndexFilter__IndexFilterRandomType, "", "IndexFilter/IndexFilterRandomType");
NEED_NO_BOX(::GlobalNamespace::IndexFilter);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::IndexFilter*, "", "IndexFilter");
NEED_NO_BOX(::GlobalNamespace::__IndexFilter___GetEnumerator_d__23);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::__IndexFilter___GetEnumerator_d__23*, "", "IndexFilter/<GetEnumerator>d__23");
NEED_NO_BOX(::GlobalNamespace::__IndexFilter___GetValues_d__24);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::__IndexFilter___GetValues_d__24*, "", "IndexFilter/<GetValues>d__24");
