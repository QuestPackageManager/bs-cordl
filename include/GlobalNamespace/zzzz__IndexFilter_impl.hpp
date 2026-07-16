#pragma once
// IWYU pragma private; include "GlobalNamespace/IndexFilter.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "System/zzzz__ValueTuple_3_impl.hpp"
#include "GlobalNamespace/zzzz__IndexFilter_def.hpp"
#include "GlobalNamespace/zzzz__IndexFilter_def.hpp"
#include "System/Collections/Generic/zzzz__IEnumerable_1_def.hpp"
#include "System/Collections/Generic/zzzz__IEnumerator_1_def.hpp"
#include "System/Collections/Generic/zzzz__IReadOnlyCollection_1_def.hpp"
#include "System/Collections/zzzz__IEnumerable_def.hpp"
#include "System/Collections/zzzz__IEnumerator_def.hpp"
#include "System/zzzz__IDisposable_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "System/zzzz__ValueTuple_2_def.hpp"
#include "System/zzzz__ValueTuple_3_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::GlobalNamespace::IndexFilter_IndexFilterRandomType::IndexFilter_IndexFilterRandomType(int32_t value__) noexcept {
  this->value__ = value__;
}
// Ctor Parameters []
constexpr ::GlobalNamespace::IndexFilter_IndexFilterRandomType::IndexFilter_IndexFilterRandomType() {}
constexpr ::GlobalNamespace::IndexFilter_IndexFilterRandomType GlobalNamespace::IndexFilter_IndexFilterRandomType::NoRandom{ static_cast<int32_t>(0x0) };
constexpr ::GlobalNamespace::IndexFilter_IndexFilterRandomType GlobalNamespace::IndexFilter_IndexFilterRandomType::KeepOrder{ static_cast<int32_t>(0x1) };
constexpr ::GlobalNamespace::IndexFilter_IndexFilterRandomType GlobalNamespace::IndexFilter_IndexFilterRandomType::RandomElements{ static_cast<int32_t>(0x2) };
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::GlobalNamespace::IndexFilter_IndexFilterLimitAlsoAffectType::IndexFilter_IndexFilterLimitAlsoAffectType(int32_t value__) noexcept {
  this->value__ = value__;
}
// Ctor Parameters []
constexpr ::GlobalNamespace::IndexFilter_IndexFilterLimitAlsoAffectType::IndexFilter_IndexFilterLimitAlsoAffectType() {}
constexpr ::GlobalNamespace::IndexFilter_IndexFilterLimitAlsoAffectType GlobalNamespace::IndexFilter_IndexFilterLimitAlsoAffectType::None{ static_cast<int32_t>(0x0) };
constexpr ::GlobalNamespace::IndexFilter_IndexFilterLimitAlsoAffectType GlobalNamespace::IndexFilter_IndexFilterLimitAlsoAffectType::Duration{ static_cast<int32_t>(0x1) };
constexpr ::GlobalNamespace::IndexFilter_IndexFilterLimitAlsoAffectType GlobalNamespace::IndexFilter_IndexFilterLimitAlsoAffectType::Distribution{ static_cast<int32_t>(0x2) };
//  Writing Method size for method: ::GlobalNamespace::IndexFilter__GetEnumerator_d__23._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::IndexFilter__GetEnumerator_d__23::*)(int32_t)>(&::GlobalNamespace::IndexFilter__GetEnumerator_d__23::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x3714dc8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::IndexFilter__GetEnumerator_d__23*>(), { ".ctor", {}, { ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::IndexFilter__GetEnumerator_d__23.System_IDisposable_Dispose
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::IndexFilter__GetEnumerator_d__23::*)()>(
    &::GlobalNamespace::IndexFilter__GetEnumerator_d__23::System_IDisposable_Dispose)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x3714e64;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::IndexFilter__GetEnumerator_d__23*>(), { "System.IDisposable.Dispose", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::IndexFilter__GetEnumerator_d__23.MoveNext
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::GlobalNamespace::IndexFilter__GetEnumerator_d__23::*)()>(&::GlobalNamespace::IndexFilter__GetEnumerator_d__23::MoveNext)> {
  constexpr static std::size_t size = 0x4a8;
  constexpr static std::size_t addrs = 0x3714e80;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::IndexFilter__GetEnumerator_d__23*>(), { "MoveNext", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::IndexFilter__GetEnumerator_d__23.__m__Finally1
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::IndexFilter__GetEnumerator_d__23::*)()>(&::GlobalNamespace::IndexFilter__GetEnumerator_d__23::__m__Finally1)> {
  constexpr static std::size_t size = 0xb4;
  constexpr static std::size_t addrs = 0x3715328;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::IndexFilter__GetEnumerator_d__23*>(), { "<>m__Finally1", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method:
//  ::GlobalNamespace::IndexFilter__GetEnumerator_d__23.System_Collections_Generic_IEnumerator__System_Int32element_System_Int32durationOrder_System_Int32distributionOrder___get_Current
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::ValueTuple_3<int32_t, int32_t, int32_t> (::GlobalNamespace::IndexFilter__GetEnumerator_d__23::*)()>(
    &::GlobalNamespace::IndexFilter__GetEnumerator_d__23::System_Collections_Generic_IEnumerator__System_Int32element_System_Int32durationOrder_System_Int32distributionOrder___get_Current)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x37153dc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::IndexFilter__GetEnumerator_d__23*>(),
                                                { "System.Collections.Generic.IEnumerator<(System.Int32element,System.Int32durationOrder,System.Int32distributionOrder)>.get_Current", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::IndexFilter__GetEnumerator_d__23.System_Collections_IEnumerator_Reset
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::IndexFilter__GetEnumerator_d__23::*)()>(
    &::GlobalNamespace::IndexFilter__GetEnumerator_d__23::System_Collections_IEnumerator_Reset)> {
  constexpr static std::size_t size = 0x38;
  constexpr static std::size_t addrs = 0x37153ec;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::IndexFilter__GetEnumerator_d__23*>(), { "System.Collections.IEnumerator.Reset", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::IndexFilter__GetEnumerator_d__23.System_Collections_IEnumerator_get_Current
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Object* (::GlobalNamespace::IndexFilter__GetEnumerator_d__23::*)()>(
    &::GlobalNamespace::IndexFilter__GetEnumerator_d__23::System_Collections_IEnumerator_get_Current)> {
  constexpr static std::size_t size = 0x68;
  constexpr static std::size_t addrs = 0x3715424;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::IndexFilter__GetEnumerator_d__23*>(), { "System.Collections.IEnumerator.get_Current", {}, {} })));
    return ___internal_method;
  }
};
constexpr int32_t& GlobalNamespace::IndexFilter__GetEnumerator_d__23::__cordl_internal_get___1__state() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->_____1__state;
}
constexpr int32_t const& GlobalNamespace::IndexFilter__GetEnumerator_d__23::__cordl_internal_get___1__state() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->_____1__state;
}
constexpr void GlobalNamespace::IndexFilter__GetEnumerator_d__23::__cordl_internal_set___1__state(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->_____1__state = value;
}
constexpr ::System::ValueTuple_3<int32_t, int32_t, int32_t>& GlobalNamespace::IndexFilter__GetEnumerator_d__23::__cordl_internal_get___2__current() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->_____2__current;
}
constexpr ::System::ValueTuple_3<int32_t, int32_t, int32_t> const& GlobalNamespace::IndexFilter__GetEnumerator_d__23::__cordl_internal_get___2__current() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->_____2__current;
}
constexpr void GlobalNamespace::IndexFilter__GetEnumerator_d__23::__cordl_internal_set___2__current(::System::ValueTuple_3<int32_t, int32_t, int32_t> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->_____2__current = value;
}
constexpr ::GlobalNamespace::IndexFilter*& GlobalNamespace::IndexFilter__GetEnumerator_d__23::__cordl_internal_get___4__this() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->_____4__this;
}
constexpr ::GlobalNamespace::IndexFilter* const& GlobalNamespace::IndexFilter__GetEnumerator_d__23::__cordl_internal_get___4__this() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->_____4__this;
}
constexpr void GlobalNamespace::IndexFilter__GetEnumerator_d__23::__cordl_internal_set___4__this(::GlobalNamespace::IndexFilter* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->_____4__this = value;
}
constexpr int32_t& GlobalNamespace::IndexFilter__GetEnumerator_d__23::__cordl_internal_get__limitedOrderIndex_5__2() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____limitedOrderIndex_5__2;
}
constexpr int32_t const& GlobalNamespace::IndexFilter__GetEnumerator_d__23::__cordl_internal_get__limitedOrderIndex_5__2() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____limitedOrderIndex_5__2;
}
constexpr void GlobalNamespace::IndexFilter__GetEnumerator_d__23::__cordl_internal_set__limitedOrderIndex_5__2(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____limitedOrderIndex_5__2 = value;
}
constexpr ::System::Collections::Generic::IEnumerator_1<::System::ValueTuple_2<int32_t, int32_t>>*& GlobalNamespace::IndexFilter__GetEnumerator_d__23::__cordl_internal_get___7__wrap2() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->_____7__wrap2;
}
constexpr ::System::Collections::Generic::IEnumerator_1<::System::ValueTuple_2<int32_t, int32_t>>* const& GlobalNamespace::IndexFilter__GetEnumerator_d__23::__cordl_internal_get___7__wrap2() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->_____7__wrap2;
}
constexpr void GlobalNamespace::IndexFilter__GetEnumerator_d__23::__cordl_internal_set___7__wrap2(::System::Collections::Generic::IEnumerator_1<::System::ValueTuple_2<int32_t, int32_t>>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->_____7__wrap2 = value;
}
constexpr int32_t& GlobalNamespace::IndexFilter__GetEnumerator_d__23::__cordl_internal_get__elementId_5__4() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____elementId_5__4;
}
constexpr int32_t const& GlobalNamespace::IndexFilter__GetEnumerator_d__23::__cordl_internal_get__elementId_5__4() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____elementId_5__4;
}
constexpr void GlobalNamespace::IndexFilter__GetEnumerator_d__23::__cordl_internal_set__elementId_5__4(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____elementId_5__4 = value;
}
constexpr int32_t& GlobalNamespace::IndexFilter__GetEnumerator_d__23::__cordl_internal_get__index_5__5() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____index_5__5;
}
constexpr int32_t const& GlobalNamespace::IndexFilter__GetEnumerator_d__23::__cordl_internal_get__index_5__5() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____index_5__5;
}
constexpr void GlobalNamespace::IndexFilter__GetEnumerator_d__23::__cordl_internal_set__index_5__5(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____index_5__5 = value;
}
constexpr int32_t& GlobalNamespace::IndexFilter__GetEnumerator_d__23::__cordl_internal_get__localChunkIndex_5__6() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____localChunkIndex_5__6;
}
constexpr int32_t const& GlobalNamespace::IndexFilter__GetEnumerator_d__23::__cordl_internal_get__localChunkIndex_5__6() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____localChunkIndex_5__6;
}
constexpr void GlobalNamespace::IndexFilter__GetEnumerator_d__23::__cordl_internal_set__localChunkIndex_5__6(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____localChunkIndex_5__6 = value;
}
inline void GlobalNamespace::IndexFilter__GetEnumerator_d__23::_ctor(int32_t __1__state) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::IndexFilter__GetEnumerator_d__23*>(), { ".ctor", {}, { ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, __1__state);
}
inline void GlobalNamespace::IndexFilter__GetEnumerator_d__23::System_IDisposable_Dispose() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::IndexFilter__GetEnumerator_d__23*>(), { "System.IDisposable.Dispose", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline bool GlobalNamespace::IndexFilter__GetEnumerator_d__23::MoveNext() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::IndexFilter__GetEnumerator_d__23*>(), { "MoveNext", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void GlobalNamespace::IndexFilter__GetEnumerator_d__23::__m__Finally1() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::IndexFilter__GetEnumerator_d__23*>(), { "<>m__Finally1", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::System::ValueTuple_3<int32_t, int32_t, int32_t>
GlobalNamespace::IndexFilter__GetEnumerator_d__23::System_Collections_Generic_IEnumerator__System_Int32element_System_Int32durationOrder_System_Int32distributionOrder___get_Current() {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::IndexFilter__GetEnumerator_d__23*>(),
                                              { "System.Collections.Generic.IEnumerator<(System.Int32element,System.Int32durationOrder,System.Int32distributionOrder)>.get_Current", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::System::ValueTuple_3<int32_t, int32_t, int32_t>>(this, ___internal_method);
}
inline void GlobalNamespace::IndexFilter__GetEnumerator_d__23::System_Collections_IEnumerator_Reset() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::IndexFilter__GetEnumerator_d__23*>(), { "System.Collections.IEnumerator.Reset", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::System::Object* GlobalNamespace::IndexFilter__GetEnumerator_d__23::System_Collections_IEnumerator_get_Current() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::IndexFilter__GetEnumerator_d__23*>(), { "System.Collections.IEnumerator.get_Current", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::System::Object*>(this, ___internal_method);
}
inline ::GlobalNamespace::IndexFilter__GetEnumerator_d__23* GlobalNamespace::IndexFilter__GetEnumerator_d__23::New_ctor(int32_t __1__state) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::IndexFilter__GetEnumerator_d__23*>(__1__state));
}
/// @brief Convert operator to "::System::Collections::Generic::IEnumerator_1<::System::ValueTuple_3<int32_t,int32_t,int32_t>>"
constexpr GlobalNamespace::IndexFilter__GetEnumerator_d__23::operator ::System::Collections::Generic::IEnumerator_1<::System::ValueTuple_3<int32_t, int32_t, int32_t>>*() noexcept {
  return static_cast<::System::Collections::Generic::IEnumerator_1<::System::ValueTuple_3<int32_t, int32_t, int32_t>>*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::Collections::Generic::IEnumerator_1<::System::ValueTuple_3<int32_t,int32_t,int32_t>>"
constexpr ::System::Collections::Generic::IEnumerator_1<::System::ValueTuple_3<int32_t, int32_t, int32_t>>*
GlobalNamespace::IndexFilter__GetEnumerator_d__23::i___System__Collections__Generic__IEnumerator_1___System__ValueTuple_3_int32_t_int32_t_int32_t__() noexcept {
  return static_cast<::System::Collections::Generic::IEnumerator_1<::System::ValueTuple_3<int32_t, int32_t, int32_t>>*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::System::Collections::IEnumerator"
constexpr GlobalNamespace::IndexFilter__GetEnumerator_d__23::operator ::System::Collections::IEnumerator*() noexcept {
  return static_cast<::System::Collections::IEnumerator*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::Collections::IEnumerator"
constexpr ::System::Collections::IEnumerator* GlobalNamespace::IndexFilter__GetEnumerator_d__23::i___System__Collections__IEnumerator() noexcept {
  return static_cast<::System::Collections::IEnumerator*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::System::IDisposable"
constexpr GlobalNamespace::IndexFilter__GetEnumerator_d__23::operator ::System::IDisposable*() noexcept {
  return static_cast<::System::IDisposable*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::IDisposable"
constexpr ::System::IDisposable* GlobalNamespace::IndexFilter__GetEnumerator_d__23::i___System__IDisposable() noexcept {
  return static_cast<::System::IDisposable*>(static_cast<void*>(this));
}
// Ctor Parameters []
constexpr ::GlobalNamespace::IndexFilter__GetEnumerator_d__23::IndexFilter__GetEnumerator_d__23() {}
//  Writing Method size for method: ::GlobalNamespace::IndexFilter__GetValues_d__24._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::IndexFilter__GetValues_d__24::*)(int32_t)>(&::GlobalNamespace::IndexFilter__GetValues_d__24::_ctor)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x3714e40;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::IndexFilter__GetValues_d__24*>(), { ".ctor", {}, { ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::IndexFilter__GetValues_d__24.System_IDisposable_Dispose
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::IndexFilter__GetValues_d__24::*)()>(&::GlobalNamespace::IndexFilter__GetValues_d__24::System_IDisposable_Dispose)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x371548c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::IndexFilter__GetValues_d__24*>(), { "System.IDisposable.Dispose", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::IndexFilter__GetValues_d__24.MoveNext
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::GlobalNamespace::IndexFilter__GetValues_d__24::*)()>(&::GlobalNamespace::IndexFilter__GetValues_d__24::MoveNext)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x3715490;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::IndexFilter__GetValues_d__24*>(), { "MoveNext", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::IndexFilter__GetValues_d__24.System_Collections_Generic_IEnumerator_System_Int32__get_Current
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::GlobalNamespace::IndexFilter__GetValues_d__24::*)()>(
    &::GlobalNamespace::IndexFilter__GetValues_d__24::System_Collections_Generic_IEnumerator_System_Int32__get_Current)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x3715510;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::IndexFilter__GetValues_d__24*>(), { "System.Collections.Generic.IEnumerator<System.Int32>.get_Current", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::IndexFilter__GetValues_d__24.System_Collections_IEnumerator_Reset
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::IndexFilter__GetValues_d__24::*)()>(
    &::GlobalNamespace::IndexFilter__GetValues_d__24::System_Collections_IEnumerator_Reset)> {
  constexpr static std::size_t size = 0x38;
  constexpr static std::size_t addrs = 0x3715518;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::IndexFilter__GetValues_d__24*>(), { "System.Collections.IEnumerator.Reset", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::IndexFilter__GetValues_d__24.System_Collections_IEnumerator_get_Current
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Object* (::GlobalNamespace::IndexFilter__GetValues_d__24::*)()>(
    &::GlobalNamespace::IndexFilter__GetValues_d__24::System_Collections_IEnumerator_get_Current)> {
  constexpr static std::size_t size = 0x24;
  constexpr static std::size_t addrs = 0x3715550;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::IndexFilter__GetValues_d__24*>(), { "System.Collections.IEnumerator.get_Current", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::IndexFilter__GetValues_d__24.System_Collections_Generic_IEnumerable_System_Int32__GetEnumerator
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Collections::Generic::IEnumerator_1<int32_t>* (::GlobalNamespace::IndexFilter__GetValues_d__24::*)()>(
    &::GlobalNamespace::IndexFilter__GetValues_d__24::System_Collections_Generic_IEnumerable_System_Int32__GetEnumerator)> {
  constexpr static std::size_t size = 0x98;
  constexpr static std::size_t addrs = 0x3715574;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::GlobalNamespace::IndexFilter__GetValues_d__24*>(), { "System.Collections.Generic.IEnumerable<System.Int32>.GetEnumerator", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::IndexFilter__GetValues_d__24.System_Collections_IEnumerable_GetEnumerator
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Collections::IEnumerator* (::GlobalNamespace::IndexFilter__GetValues_d__24::*)()>(
    &::GlobalNamespace::IndexFilter__GetValues_d__24::System_Collections_IEnumerable_GetEnumerator)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x371560c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::IndexFilter__GetValues_d__24*>(), { "System.Collections.IEnumerable.GetEnumerator", {}, {} })));
    return ___internal_method;
  }
};
constexpr int32_t& GlobalNamespace::IndexFilter__GetValues_d__24::__cordl_internal_get___1__state() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->_____1__state;
}
constexpr int32_t const& GlobalNamespace::IndexFilter__GetValues_d__24::__cordl_internal_get___1__state() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->_____1__state;
}
constexpr void GlobalNamespace::IndexFilter__GetValues_d__24::__cordl_internal_set___1__state(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->_____1__state = value;
}
constexpr int32_t& GlobalNamespace::IndexFilter__GetValues_d__24::__cordl_internal_get___2__current() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->_____2__current;
}
constexpr int32_t const& GlobalNamespace::IndexFilter__GetValues_d__24::__cordl_internal_get___2__current() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->_____2__current;
}
constexpr void GlobalNamespace::IndexFilter__GetValues_d__24::__cordl_internal_set___2__current(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->_____2__current = value;
}
constexpr int32_t& GlobalNamespace::IndexFilter__GetValues_d__24::__cordl_internal_get___l__initialThreadId() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->_____l__initialThreadId;
}
constexpr int32_t const& GlobalNamespace::IndexFilter__GetValues_d__24::__cordl_internal_get___l__initialThreadId() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->_____l__initialThreadId;
}
constexpr void GlobalNamespace::IndexFilter__GetValues_d__24::__cordl_internal_set___l__initialThreadId(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->_____l__initialThreadId = value;
}
constexpr ::GlobalNamespace::IndexFilter*& GlobalNamespace::IndexFilter__GetValues_d__24::__cordl_internal_get___4__this() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->_____4__this;
}
constexpr ::GlobalNamespace::IndexFilter* const& GlobalNamespace::IndexFilter__GetValues_d__24::__cordl_internal_get___4__this() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->_____4__this;
}
constexpr void GlobalNamespace::IndexFilter__GetValues_d__24::__cordl_internal_set___4__this(::GlobalNamespace::IndexFilter* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->_____4__this = value;
}
constexpr int32_t& GlobalNamespace::IndexFilter__GetValues_d__24::__cordl_internal_get__value_5__2() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____value_5__2;
}
constexpr int32_t const& GlobalNamespace::IndexFilter__GetValues_d__24::__cordl_internal_get__value_5__2() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____value_5__2;
}
constexpr void GlobalNamespace::IndexFilter__GetValues_d__24::__cordl_internal_set__value_5__2(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____value_5__2 = value;
}
constexpr int32_t& GlobalNamespace::IndexFilter__GetValues_d__24::__cordl_internal_get__i_5__3() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____i_5__3;
}
constexpr int32_t const& GlobalNamespace::IndexFilter__GetValues_d__24::__cordl_internal_get__i_5__3() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____i_5__3;
}
constexpr void GlobalNamespace::IndexFilter__GetValues_d__24::__cordl_internal_set__i_5__3(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____i_5__3 = value;
}
inline void GlobalNamespace::IndexFilter__GetValues_d__24::_ctor(int32_t __1__state) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::IndexFilter__GetValues_d__24*>(), { ".ctor", {}, { ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, __1__state);
}
inline void GlobalNamespace::IndexFilter__GetValues_d__24::System_IDisposable_Dispose() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::IndexFilter__GetValues_d__24*>(), { "System.IDisposable.Dispose", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline bool GlobalNamespace::IndexFilter__GetValues_d__24::MoveNext() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::IndexFilter__GetValues_d__24*>(), { "MoveNext", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline int32_t GlobalNamespace::IndexFilter__GetValues_d__24::System_Collections_Generic_IEnumerator_System_Int32__get_Current() {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::IndexFilter__GetValues_d__24*>(), { "System.Collections.Generic.IEnumerator<System.Int32>.get_Current", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method);
}
inline void GlobalNamespace::IndexFilter__GetValues_d__24::System_Collections_IEnumerator_Reset() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::IndexFilter__GetValues_d__24*>(), { "System.Collections.IEnumerator.Reset", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::System::Object* GlobalNamespace::IndexFilter__GetValues_d__24::System_Collections_IEnumerator_get_Current() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::IndexFilter__GetValues_d__24*>(), { "System.Collections.IEnumerator.get_Current", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::System::Object*>(this, ___internal_method);
}
inline ::System::Collections::Generic::IEnumerator_1<int32_t>* GlobalNamespace::IndexFilter__GetValues_d__24::System_Collections_Generic_IEnumerable_System_Int32__GetEnumerator() {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::IndexFilter__GetValues_d__24*>(), { "System.Collections.Generic.IEnumerable<System.Int32>.GetEnumerator", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::IEnumerator_1<int32_t>*>(this, ___internal_method);
}
inline ::System::Collections::IEnumerator* GlobalNamespace::IndexFilter__GetValues_d__24::System_Collections_IEnumerable_GetEnumerator() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::IndexFilter__GetValues_d__24*>(), { "System.Collections.IEnumerable.GetEnumerator", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::System::Collections::IEnumerator*>(this, ___internal_method);
}
inline ::GlobalNamespace::IndexFilter__GetValues_d__24* GlobalNamespace::IndexFilter__GetValues_d__24::New_ctor(int32_t __1__state) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::IndexFilter__GetValues_d__24*>(__1__state));
}
/// @brief Convert operator to "::System::Collections::Generic::IEnumerable_1<int32_t>"
constexpr GlobalNamespace::IndexFilter__GetValues_d__24::operator ::System::Collections::Generic::IEnumerable_1<int32_t>*() noexcept {
  return static_cast<::System::Collections::Generic::IEnumerable_1<int32_t>*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::Collections::Generic::IEnumerable_1<int32_t>"
constexpr ::System::Collections::Generic::IEnumerable_1<int32_t>* GlobalNamespace::IndexFilter__GetValues_d__24::i___System__Collections__Generic__IEnumerable_1_int32_t_() noexcept {
  return static_cast<::System::Collections::Generic::IEnumerable_1<int32_t>*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::System::Collections::IEnumerable"
constexpr GlobalNamespace::IndexFilter__GetValues_d__24::operator ::System::Collections::IEnumerable*() noexcept {
  return static_cast<::System::Collections::IEnumerable*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::Collections::IEnumerable"
constexpr ::System::Collections::IEnumerable* GlobalNamespace::IndexFilter__GetValues_d__24::i___System__Collections__IEnumerable() noexcept {
  return static_cast<::System::Collections::IEnumerable*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::System::Collections::Generic::IEnumerator_1<int32_t>"
constexpr GlobalNamespace::IndexFilter__GetValues_d__24::operator ::System::Collections::Generic::IEnumerator_1<int32_t>*() noexcept {
  return static_cast<::System::Collections::Generic::IEnumerator_1<int32_t>*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::Collections::Generic::IEnumerator_1<int32_t>"
constexpr ::System::Collections::Generic::IEnumerator_1<int32_t>* GlobalNamespace::IndexFilter__GetValues_d__24::i___System__Collections__Generic__IEnumerator_1_int32_t_() noexcept {
  return static_cast<::System::Collections::Generic::IEnumerator_1<int32_t>*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::System::Collections::IEnumerator"
constexpr GlobalNamespace::IndexFilter__GetValues_d__24::operator ::System::Collections::IEnumerator*() noexcept {
  return static_cast<::System::Collections::IEnumerator*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::Collections::IEnumerator"
constexpr ::System::Collections::IEnumerator* GlobalNamespace::IndexFilter__GetValues_d__24::i___System__Collections__IEnumerator() noexcept {
  return static_cast<::System::Collections::IEnumerator*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::System::IDisposable"
constexpr GlobalNamespace::IndexFilter__GetValues_d__24::operator ::System::IDisposable*() noexcept {
  return static_cast<::System::IDisposable*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::IDisposable"
constexpr ::System::IDisposable* GlobalNamespace::IndexFilter__GetValues_d__24::i___System__IDisposable() noexcept {
  return static_cast<::System::IDisposable*>(static_cast<void*>(this));
}
// Ctor Parameters []
constexpr ::GlobalNamespace::IndexFilter__GetValues_d__24::IndexFilter__GetValues_d__24() {}
//  Writing Method size for method: ::GlobalNamespace::IndexFilter.get_Count
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::GlobalNamespace::IndexFilter::*)()>(&::GlobalNamespace::IndexFilter::get_Count)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x3714c10;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::IndexFilter*>(), { "get_Count", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::IndexFilter.get_VisibleCount
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::GlobalNamespace::IndexFilter::*)()>(&::GlobalNamespace::IndexFilter::get_VisibleCount)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x3714c18;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::IndexFilter*>(), { "get_VisibleCount", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::IndexFilter.get_limitAlsoAffectType
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::GlobalNamespace::IndexFilter_IndexFilterLimitAlsoAffectType (::GlobalNamespace::IndexFilter::*)()>(
    &::GlobalNamespace::IndexFilter::get_limitAlsoAffectType)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x3714c20;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::IndexFilter*>(), { "get_limitAlsoAffectType", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::IndexFilter.get_limitsDuration
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::GlobalNamespace::IndexFilter::*)()>(&::GlobalNamespace::IndexFilter::get_limitsDuration)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x3714c28;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::IndexFilter*>(), { "get_limitsDuration", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::IndexFilter.get_limitsDistribution
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::GlobalNamespace::IndexFilter::*)()>(&::GlobalNamespace::IndexFilter::get_limitsDistribution)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x3711f68;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::IndexFilter*>(), { "get_limitsDistribution", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::IndexFilter._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::IndexFilter::*)(int32_t, int32_t, int32_t, int32_t, ::GlobalNamespace::IndexFilter_IndexFilterRandomType, int32_t,
                                                                                                int32_t, float_t, ::GlobalNamespace::IndexFilter_IndexFilterLimitAlsoAffectType)>(
    &::GlobalNamespace::IndexFilter::_ctor)> {
  constexpr static std::size_t size = 0xb8;
  constexpr static std::size_t addrs = 0x3714c34;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::IndexFilter*>(),
                                                             { ".ctor",
                                                               {},
                                                               { ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(),
                                                                 ::i2c::type_of<::GlobalNamespace::IndexFilter_IndexFilterRandomType>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(),
                                                                 ::i2c::type_of<float_t>(), ::i2c::type_of<::GlobalNamespace::IndexFilter_IndexFilterLimitAlsoAffectType>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::IndexFilter._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::IndexFilter::*)(int32_t, int32_t, int32_t, ::GlobalNamespace::IndexFilter_IndexFilterRandomType, int32_t, int32_t,
                                                                                                float_t, ::GlobalNamespace::IndexFilter_IndexFilterLimitAlsoAffectType)>(
    &::GlobalNamespace::IndexFilter::_ctor)> {
  constexpr static std::size_t size = 0xdc;
  constexpr static std::size_t addrs = 0x3714cec;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(::i2c::class_of<::GlobalNamespace::IndexFilter*>(),
                            { ".ctor",
                              {},
                              { ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::GlobalNamespace::IndexFilter_IndexFilterRandomType>(),
                                ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<float_t>(), ::i2c::type_of<::GlobalNamespace::IndexFilter_IndexFilterLimitAlsoAffectType>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::IndexFilter.GetEnumerator
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Collections::Generic::IEnumerator_1<::System::ValueTuple_3<int32_t, int32_t, int32_t>>* (::GlobalNamespace::IndexFilter::*)()>(
    &::GlobalNamespace::IndexFilter::GetEnumerator)> {
  constexpr static std::size_t size = 0x54;
  constexpr static std::size_t addrs = 0x371279c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::IndexFilter*>(), { "GetEnumerator", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::IndexFilter.GetValues
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Collections::Generic::IEnumerable_1<int32_t>* (::GlobalNamespace::IndexFilter::*)()>(&::GlobalNamespace::IndexFilter::GetValues)> {
  constexpr static std::size_t size = 0x70;
  constexpr static std::size_t addrs = 0x3714dd0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::IndexFilter*>(), { "GetValues", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::IndexFilter.System_Collections_IEnumerable_GetEnumerator
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Collections::IEnumerator* (::GlobalNamespace::IndexFilter::*)()>(
    &::GlobalNamespace::IndexFilter::System_Collections_IEnumerable_GetEnumerator)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x3714e60;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::IndexFilter*>(), { "System.Collections.IEnumerable.GetEnumerator", {}, {} })));
    return ___internal_method;
  }
};
constexpr ::GlobalNamespace::IndexFilter_IndexFilterRandomType& GlobalNamespace::IndexFilter::__cordl_internal_get__random() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____random;
}
constexpr ::GlobalNamespace::IndexFilter_IndexFilterRandomType const& GlobalNamespace::IndexFilter::__cordl_internal_get__random() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____random;
}
constexpr void GlobalNamespace::IndexFilter::__cordl_internal_set__random(::GlobalNamespace::IndexFilter_IndexFilterRandomType value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____random = value;
}
constexpr int32_t& GlobalNamespace::IndexFilter::__cordl_internal_get__seed() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____seed;
}
constexpr int32_t const& GlobalNamespace::IndexFilter::__cordl_internal_get__seed() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____seed;
}
constexpr void GlobalNamespace::IndexFilter::__cordl_internal_set__seed(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____seed = value;
}
constexpr int32_t& GlobalNamespace::IndexFilter::__cordl_internal_get__groupSize() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____groupSize;
}
constexpr int32_t const& GlobalNamespace::IndexFilter::__cordl_internal_get__groupSize() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____groupSize;
}
constexpr void GlobalNamespace::IndexFilter::__cordl_internal_set__groupSize(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____groupSize = value;
}
constexpr int32_t& GlobalNamespace::IndexFilter::__cordl_internal_get__chunkSize() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____chunkSize;
}
constexpr int32_t const& GlobalNamespace::IndexFilter::__cordl_internal_get__chunkSize() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____chunkSize;
}
constexpr void GlobalNamespace::IndexFilter::__cordl_internal_set__chunkSize(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____chunkSize = value;
}
constexpr int32_t& GlobalNamespace::IndexFilter::__cordl_internal_get__visibleCount() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____visibleCount;
}
constexpr int32_t const& GlobalNamespace::IndexFilter::__cordl_internal_get__visibleCount() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____visibleCount;
}
constexpr void GlobalNamespace::IndexFilter::__cordl_internal_set__visibleCount(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____visibleCount = value;
}
constexpr ::GlobalNamespace::IndexFilter_IndexFilterLimitAlsoAffectType& GlobalNamespace::IndexFilter::__cordl_internal_get__limitAlsoAffectType() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____limitAlsoAffectType;
}
constexpr ::GlobalNamespace::IndexFilter_IndexFilterLimitAlsoAffectType const& GlobalNamespace::IndexFilter::__cordl_internal_get__limitAlsoAffectType() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____limitAlsoAffectType;
}
constexpr void GlobalNamespace::IndexFilter::__cordl_internal_set__limitAlsoAffectType(::GlobalNamespace::IndexFilter_IndexFilterLimitAlsoAffectType value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____limitAlsoAffectType = value;
}
constexpr int32_t& GlobalNamespace::IndexFilter::__cordl_internal_get__start() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____start;
}
constexpr int32_t const& GlobalNamespace::IndexFilter::__cordl_internal_get__start() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____start;
}
constexpr void GlobalNamespace::IndexFilter::__cordl_internal_set__start(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____start = value;
}
constexpr int32_t& GlobalNamespace::IndexFilter::__cordl_internal_get__step() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____step;
}
constexpr int32_t const& GlobalNamespace::IndexFilter::__cordl_internal_get__step() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____step;
}
constexpr void GlobalNamespace::IndexFilter::__cordl_internal_set__step(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____step = value;
}
constexpr int32_t& GlobalNamespace::IndexFilter::__cordl_internal_get__count() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____count;
}
constexpr int32_t const& GlobalNamespace::IndexFilter::__cordl_internal_get__count() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____count;
}
constexpr void GlobalNamespace::IndexFilter::__cordl_internal_set__count(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____count = value;
}
inline int32_t GlobalNamespace::IndexFilter::get_Count() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::IndexFilter*>(), { "get_Count", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method);
}
inline int32_t GlobalNamespace::IndexFilter::get_VisibleCount() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::IndexFilter*>(), { "get_VisibleCount", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method);
}
inline ::GlobalNamespace::IndexFilter_IndexFilterLimitAlsoAffectType GlobalNamespace::IndexFilter::get_limitAlsoAffectType() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::IndexFilter*>(), { "get_limitAlsoAffectType", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::IndexFilter_IndexFilterLimitAlsoAffectType>(this, ___internal_method);
}
inline bool GlobalNamespace::IndexFilter::get_limitsDuration() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::IndexFilter*>(), { "get_limitsDuration", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline bool GlobalNamespace::IndexFilter::get_limitsDistribution() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::IndexFilter*>(), { "get_limitsDistribution", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void GlobalNamespace::IndexFilter::_ctor(int32_t start, int32_t step, int32_t count, int32_t groupSize, ::GlobalNamespace::IndexFilter_IndexFilterRandomType random, int32_t seed,
                                                int32_t chunkSize, float_t limit, ::GlobalNamespace::IndexFilter_IndexFilterLimitAlsoAffectType limitAlsoAffectType) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::IndexFilter*>(),
                                                           { ".ctor",
                                                             {},
                                                             { ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(),
                                                               ::i2c::type_of<::GlobalNamespace::IndexFilter_IndexFilterRandomType>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(),
                                                               ::i2c::type_of<float_t>(), ::i2c::type_of<::GlobalNamespace::IndexFilter_IndexFilterLimitAlsoAffectType>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, start, step, count, groupSize, random, seed, chunkSize, limit, limitAlsoAffectType);
}
inline void GlobalNamespace::IndexFilter::_ctor(int32_t start, int32_t end, int32_t groupSize, ::GlobalNamespace::IndexFilter_IndexFilterRandomType random, int32_t seed, int32_t chunkSize,
                                                float_t limit, ::GlobalNamespace::IndexFilter_IndexFilterLimitAlsoAffectType limitAlsoAffectType) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::GlobalNamespace::IndexFilter*>(),
                          { ".ctor",
                            {},
                            { ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::GlobalNamespace::IndexFilter_IndexFilterRandomType>(),
                              ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<float_t>(), ::i2c::type_of<::GlobalNamespace::IndexFilter_IndexFilterLimitAlsoAffectType>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, start, end, groupSize, random, seed, chunkSize, limit, limitAlsoAffectType);
}
inline ::System::Collections::Generic::IEnumerator_1<::System::ValueTuple_3<int32_t, int32_t, int32_t>>* GlobalNamespace::IndexFilter::GetEnumerator() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::IndexFilter*>(), { "GetEnumerator", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::IEnumerator_1<::System::ValueTuple_3<int32_t, int32_t, int32_t>>*>(this, ___internal_method);
}
inline ::System::Collections::Generic::IEnumerable_1<int32_t>* GlobalNamespace::IndexFilter::GetValues() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::IndexFilter*>(), { "GetValues", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::IEnumerable_1<int32_t>*>(this, ___internal_method);
}
inline ::System::Collections::IEnumerator* GlobalNamespace::IndexFilter::System_Collections_IEnumerable_GetEnumerator() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::IndexFilter*>(), { "System.Collections.IEnumerable.GetEnumerator", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::System::Collections::IEnumerator*>(this, ___internal_method);
}
inline ::GlobalNamespace::IndexFilter* GlobalNamespace::IndexFilter::New_ctor(int32_t start, int32_t step, int32_t count, int32_t groupSize,
                                                                              ::GlobalNamespace::IndexFilter_IndexFilterRandomType random, int32_t seed, int32_t chunkSize, float_t limit,
                                                                              ::GlobalNamespace::IndexFilter_IndexFilterLimitAlsoAffectType limitAlsoAffectType) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::IndexFilter*>(start, step, count, groupSize, random, seed, chunkSize, limit, limitAlsoAffectType));
}
inline ::GlobalNamespace::IndexFilter* GlobalNamespace::IndexFilter::New_ctor(int32_t start, int32_t end, int32_t groupSize, ::GlobalNamespace::IndexFilter_IndexFilterRandomType random, int32_t seed,
                                                                              int32_t chunkSize, float_t limit, ::GlobalNamespace::IndexFilter_IndexFilterLimitAlsoAffectType limitAlsoAffectType) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::IndexFilter*>(start, end, groupSize, random, seed, chunkSize, limit, limitAlsoAffectType));
}
/// @brief Convert operator to "::System::Collections::Generic::IReadOnlyCollection_1<::System::ValueTuple_3<int32_t,int32_t,int32_t>>"
constexpr GlobalNamespace::IndexFilter::operator ::System::Collections::Generic::IReadOnlyCollection_1<::System::ValueTuple_3<int32_t, int32_t, int32_t>>*() noexcept {
  return static_cast<::System::Collections::Generic::IReadOnlyCollection_1<::System::ValueTuple_3<int32_t, int32_t, int32_t>>*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::Collections::Generic::IReadOnlyCollection_1<::System::ValueTuple_3<int32_t,int32_t,int32_t>>"
constexpr ::System::Collections::Generic::IReadOnlyCollection_1<::System::ValueTuple_3<int32_t, int32_t, int32_t>>*
GlobalNamespace::IndexFilter::i___System__Collections__Generic__IReadOnlyCollection_1___System__ValueTuple_3_int32_t_int32_t_int32_t__() noexcept {
  return static_cast<::System::Collections::Generic::IReadOnlyCollection_1<::System::ValueTuple_3<int32_t, int32_t, int32_t>>*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::System::Collections::Generic::IEnumerable_1<::System::ValueTuple_3<int32_t,int32_t,int32_t>>"
constexpr GlobalNamespace::IndexFilter::operator ::System::Collections::Generic::IEnumerable_1<::System::ValueTuple_3<int32_t, int32_t, int32_t>>*() noexcept {
  return static_cast<::System::Collections::Generic::IEnumerable_1<::System::ValueTuple_3<int32_t, int32_t, int32_t>>*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::Collections::Generic::IEnumerable_1<::System::ValueTuple_3<int32_t,int32_t,int32_t>>"
constexpr ::System::Collections::Generic::IEnumerable_1<::System::ValueTuple_3<int32_t, int32_t, int32_t>>*
GlobalNamespace::IndexFilter::i___System__Collections__Generic__IEnumerable_1___System__ValueTuple_3_int32_t_int32_t_int32_t__() noexcept {
  return static_cast<::System::Collections::Generic::IEnumerable_1<::System::ValueTuple_3<int32_t, int32_t, int32_t>>*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::System::Collections::IEnumerable"
constexpr GlobalNamespace::IndexFilter::operator ::System::Collections::IEnumerable*() noexcept {
  return static_cast<::System::Collections::IEnumerable*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::Collections::IEnumerable"
constexpr ::System::Collections::IEnumerable* GlobalNamespace::IndexFilter::i___System__Collections__IEnumerable() noexcept {
  return static_cast<::System::Collections::IEnumerable*>(static_cast<void*>(this));
}
// Ctor Parameters []
constexpr ::GlobalNamespace::IndexFilter::IndexFilter() {}
