#pragma once
#include "GlobalNamespace/zzzz__IndexFilter_impl.hpp"
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
constexpr ::GlobalNamespace::__IndexFilter__IndexFilterRandomType::__IndexFilter__IndexFilterRandomType(int32_t value__) noexcept {
  this->value__ = value__;
}
// Ctor Parameters []
constexpr ::GlobalNamespace::__IndexFilter__IndexFilterRandomType::__IndexFilter__IndexFilterRandomType() {}
constexpr ::GlobalNamespace::__IndexFilter__IndexFilterRandomType GlobalNamespace::__IndexFilter__IndexFilterRandomType::NoRandom{ static_cast<int32_t>(0x0) };
constexpr ::GlobalNamespace::__IndexFilter__IndexFilterRandomType GlobalNamespace::__IndexFilter__IndexFilterRandomType::KeepOrder{ static_cast<int32_t>(0x1) };
constexpr ::GlobalNamespace::__IndexFilter__IndexFilterRandomType GlobalNamespace::__IndexFilter__IndexFilterRandomType::RandomElements{ static_cast<int32_t>(0x2) };
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::GlobalNamespace::__IndexFilter__IndexFilterLimitAlsoAffectType::__IndexFilter__IndexFilterLimitAlsoAffectType(int32_t value__) noexcept {
  this->value__ = value__;
}
// Ctor Parameters []
constexpr ::GlobalNamespace::__IndexFilter__IndexFilterLimitAlsoAffectType::__IndexFilter__IndexFilterLimitAlsoAffectType() {}
constexpr ::GlobalNamespace::__IndexFilter__IndexFilterLimitAlsoAffectType GlobalNamespace::__IndexFilter__IndexFilterLimitAlsoAffectType::None{ static_cast<int32_t>(0x0) };
constexpr ::GlobalNamespace::__IndexFilter__IndexFilterLimitAlsoAffectType GlobalNamespace::__IndexFilter__IndexFilterLimitAlsoAffectType::Duration{ static_cast<int32_t>(0x1) };
constexpr ::GlobalNamespace::__IndexFilter__IndexFilterLimitAlsoAffectType GlobalNamespace::__IndexFilter__IndexFilterLimitAlsoAffectType::Distribution{ static_cast<int32_t>(0x2) };
//  Writing Method size for method: ::GlobalNamespace::__IndexFilter___GetEnumerator_d__23._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::__IndexFilter___GetEnumerator_d__23::*)(int32_t)>(
    &::GlobalNamespace::__IndexFilter___GetEnumerator_d__23::_ctor)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x12bf1c4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__IndexFilter___GetEnumerator_d__23*>::get(), ".ctor",
                                    std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::__IndexFilter___GetEnumerator_d__23.System_IDisposable_Dispose
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::__IndexFilter___GetEnumerator_d__23::*)()>(
    &::GlobalNamespace::__IndexFilter___GetEnumerator_d__23::System_IDisposable_Dispose)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x12bf29c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__IndexFilter___GetEnumerator_d__23*>::get(),
                                                                               "System.IDisposable.Dispose", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::__IndexFilter___GetEnumerator_d__23.MoveNext
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::GlobalNamespace::__IndexFilter___GetEnumerator_d__23::*)()>(
    &::GlobalNamespace::__IndexFilter___GetEnumerator_d__23::MoveNext)> {
  constexpr static std::size_t size = 0x4dc;
  constexpr static std::size_t addrs = 0x12bf2b8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__IndexFilter___GetEnumerator_d__23*>::get(),
                                                                               "MoveNext", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::__IndexFilter___GetEnumerator_d__23.__m__Finally1
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::__IndexFilter___GetEnumerator_d__23::*)()>(
    &::GlobalNamespace::__IndexFilter___GetEnumerator_d__23::__m__Finally1)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0x12bf794;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__IndexFilter___GetEnumerator_d__23*>::get(),
                                                                               "<>m__Finally1", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method:
//  ::GlobalNamespace::__IndexFilter___GetEnumerator_d__23.System_Collections_Generic_IEnumerator__System_Int32element_System_Int32durationOrder_System_Int32distributionOrder___get_Current
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::ValueTuple_3<int32_t, int32_t, int32_t> (::GlobalNamespace::__IndexFilter___GetEnumerator_d__23::*)()>(
    &::GlobalNamespace::__IndexFilter___GetEnumerator_d__23::System_Collections_Generic_IEnumerator__System_Int32element_System_Int32durationOrder_System_Int32distributionOrder___get_Current)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x12bf844;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__IndexFilter___GetEnumerator_d__23*>::get(),
                                                 "System.Collections.Generic.IEnumerator<(System.Int32element,System.Int32durationOrder,System.Int32distributionOrder)>.get_Current",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::__IndexFilter___GetEnumerator_d__23.System_Collections_IEnumerator_Reset
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::__IndexFilter___GetEnumerator_d__23::*)()>(
    &::GlobalNamespace::__IndexFilter___GetEnumerator_d__23::System_Collections_IEnumerator_Reset)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0x12bf854;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__IndexFilter___GetEnumerator_d__23*>::get(),
                                                 "System.Collections.IEnumerator.Reset", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::__IndexFilter___GetEnumerator_d__23.System_Collections_IEnumerator_get_Current
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Object* (::GlobalNamespace::__IndexFilter___GetEnumerator_d__23::*)()>(
    &::GlobalNamespace::__IndexFilter___GetEnumerator_d__23::System_Collections_IEnumerator_get_Current)> {
  constexpr static std::size_t size = 0x64;
  constexpr static std::size_t addrs = 0x12bf894;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__IndexFilter___GetEnumerator_d__23*>::get(),
                                                 "System.Collections.IEnumerator.get_Current", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
/// @brief Convert operator to "::System::Collections::Generic::IEnumerator_1<::System::ValueTuple_3<int32_t,int32_t,int32_t>>"
constexpr GlobalNamespace::__IndexFilter___GetEnumerator_d__23::operator ::System::Collections::Generic::IEnumerator_1<::System::ValueTuple_3<int32_t, int32_t, int32_t>>*() noexcept {
  return static_cast<::System::Collections::Generic::IEnumerator_1<::System::ValueTuple_3<int32_t, int32_t, int32_t>>*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::Collections::Generic::IEnumerator_1<::System::ValueTuple_3<int32_t,int32_t,int32_t>>"
constexpr ::System::Collections::Generic::IEnumerator_1<::System::ValueTuple_3<int32_t, int32_t, int32_t>>*
GlobalNamespace::__IndexFilter___GetEnumerator_d__23::i___System__Collections__Generic__IEnumerator_1___System__ValueTuple_3_int32_t_int32_t_int32_t__() noexcept {
  return static_cast<::System::Collections::Generic::IEnumerator_1<::System::ValueTuple_3<int32_t, int32_t, int32_t>>*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::System::Collections::IEnumerator"
constexpr GlobalNamespace::__IndexFilter___GetEnumerator_d__23::operator ::System::Collections::IEnumerator*() noexcept {
  return static_cast<::System::Collections::IEnumerator*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::Collections::IEnumerator"
constexpr ::System::Collections::IEnumerator* GlobalNamespace::__IndexFilter___GetEnumerator_d__23::i___System__Collections__IEnumerator() noexcept {
  return static_cast<::System::Collections::IEnumerator*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::System::IDisposable"
constexpr GlobalNamespace::__IndexFilter___GetEnumerator_d__23::operator ::System::IDisposable*() noexcept {
  return static_cast<::System::IDisposable*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::IDisposable"
constexpr ::System::IDisposable* GlobalNamespace::__IndexFilter___GetEnumerator_d__23::i___System__IDisposable() noexcept {
  return static_cast<::System::IDisposable*>(static_cast<void*>(this));
}
constexpr int32_t& GlobalNamespace::__IndexFilter___GetEnumerator_d__23::__cordl_internal_get___1__state() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->_____1__state;
}
constexpr int32_t const& GlobalNamespace::__IndexFilter___GetEnumerator_d__23::__cordl_internal_get___1__state() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->_____1__state;
}
constexpr void GlobalNamespace::__IndexFilter___GetEnumerator_d__23::__cordl_internal_set___1__state(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->_____1__state = value;
}
constexpr ::System::ValueTuple_3<int32_t, int32_t, int32_t>& GlobalNamespace::__IndexFilter___GetEnumerator_d__23::__cordl_internal_get___2__current() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->_____2__current;
}
constexpr ::System::ValueTuple_3<int32_t, int32_t, int32_t> const& GlobalNamespace::__IndexFilter___GetEnumerator_d__23::__cordl_internal_get___2__current() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->_____2__current;
}
constexpr void GlobalNamespace::__IndexFilter___GetEnumerator_d__23::__cordl_internal_set___2__current(::System::ValueTuple_3<int32_t, int32_t, int32_t> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->_____2__current = value;
}
constexpr ::GlobalNamespace::IndexFilter*& GlobalNamespace::__IndexFilter___GetEnumerator_d__23::__cordl_internal_get___4__this() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->_____4__this;
}
constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::IndexFilter*> const& GlobalNamespace::__IndexFilter___GetEnumerator_d__23::__cordl_internal_get___4__this() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->_____4__this;
}
constexpr void GlobalNamespace::__IndexFilter___GetEnumerator_d__23::__cordl_internal_set___4__this(::GlobalNamespace::IndexFilter* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->_____4__this)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr int32_t& GlobalNamespace::__IndexFilter___GetEnumerator_d__23::__cordl_internal_get__limitedOrderIndex_5__2() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____limitedOrderIndex_5__2;
}
constexpr int32_t const& GlobalNamespace::__IndexFilter___GetEnumerator_d__23::__cordl_internal_get__limitedOrderIndex_5__2() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____limitedOrderIndex_5__2;
}
constexpr void GlobalNamespace::__IndexFilter___GetEnumerator_d__23::__cordl_internal_set__limitedOrderIndex_5__2(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____limitedOrderIndex_5__2 = value;
}
constexpr ::System::Collections::Generic::IEnumerator_1<::System::ValueTuple_2<int32_t, int32_t>>*& GlobalNamespace::__IndexFilter___GetEnumerator_d__23::__cordl_internal_get___7__wrap2() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->_____7__wrap2;
}
constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::IEnumerator_1<::System::ValueTuple_2<int32_t, int32_t>>*> const&
GlobalNamespace::__IndexFilter___GetEnumerator_d__23::__cordl_internal_get___7__wrap2() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->_____7__wrap2;
}
constexpr void GlobalNamespace::__IndexFilter___GetEnumerator_d__23::__cordl_internal_set___7__wrap2(::System::Collections::Generic::IEnumerator_1<::System::ValueTuple_2<int32_t, int32_t>>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->_____7__wrap2)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr int32_t& GlobalNamespace::__IndexFilter___GetEnumerator_d__23::__cordl_internal_get__elementId_5__4() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____elementId_5__4;
}
constexpr int32_t const& GlobalNamespace::__IndexFilter___GetEnumerator_d__23::__cordl_internal_get__elementId_5__4() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____elementId_5__4;
}
constexpr void GlobalNamespace::__IndexFilter___GetEnumerator_d__23::__cordl_internal_set__elementId_5__4(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____elementId_5__4 = value;
}
constexpr int32_t& GlobalNamespace::__IndexFilter___GetEnumerator_d__23::__cordl_internal_get__index_5__5() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____index_5__5;
}
constexpr int32_t const& GlobalNamespace::__IndexFilter___GetEnumerator_d__23::__cordl_internal_get__index_5__5() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____index_5__5;
}
constexpr void GlobalNamespace::__IndexFilter___GetEnumerator_d__23::__cordl_internal_set__index_5__5(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____index_5__5 = value;
}
constexpr int32_t& GlobalNamespace::__IndexFilter___GetEnumerator_d__23::__cordl_internal_get__localChunkIndex_5__6() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____localChunkIndex_5__6;
}
constexpr int32_t const& GlobalNamespace::__IndexFilter___GetEnumerator_d__23::__cordl_internal_get__localChunkIndex_5__6() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____localChunkIndex_5__6;
}
constexpr void GlobalNamespace::__IndexFilter___GetEnumerator_d__23::__cordl_internal_set__localChunkIndex_5__6(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____localChunkIndex_5__6 = value;
}
inline ::GlobalNamespace::__IndexFilter___GetEnumerator_d__23* GlobalNamespace::__IndexFilter___GetEnumerator_d__23::New_ctor(int32_t __1__state) {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::GlobalNamespace::__IndexFilter___GetEnumerator_d__23*>(__1__state));
}
inline void GlobalNamespace::__IndexFilter___GetEnumerator_d__23::_ctor(int32_t __1__state) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__IndexFilter___GetEnumerator_d__23*>::get(), ".ctor",
                                               std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, __1__state);
}
inline void GlobalNamespace::__IndexFilter___GetEnumerator_d__23::System_IDisposable_Dispose() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__IndexFilter___GetEnumerator_d__23*>::get(),
                                                                             "System.IDisposable.Dispose", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline bool GlobalNamespace::__IndexFilter___GetEnumerator_d__23::MoveNext() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__IndexFilter___GetEnumerator_d__23*>::get(),
                                                                             "MoveNext", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
inline void GlobalNamespace::__IndexFilter___GetEnumerator_d__23::__m__Finally1() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__IndexFilter___GetEnumerator_d__23*>::get(),
                                                                             "<>m__Finally1", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline ::System::ValueTuple_3<int32_t, int32_t, int32_t>
GlobalNamespace::__IndexFilter___GetEnumerator_d__23::System_Collections_Generic_IEnumerator__System_Int32element_System_Int32durationOrder_System_Int32distributionOrder___get_Current() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__IndexFilter___GetEnumerator_d__23*>::get(),
                                               "System.Collections.Generic.IEnumerator<(System.Int32element,System.Int32durationOrder,System.Int32distributionOrder)>.get_Current",
                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::System::ValueTuple_3<int32_t, int32_t, int32_t>, false>(this, ___internal_method);
}
inline void GlobalNamespace::__IndexFilter___GetEnumerator_d__23::System_Collections_IEnumerator_Reset() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__IndexFilter___GetEnumerator_d__23*>::get(),
                                               "System.Collections.IEnumerator.Reset", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline ::System::Object* GlobalNamespace::__IndexFilter___GetEnumerator_d__23::System_Collections_IEnumerator_get_Current() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__IndexFilter___GetEnumerator_d__23*>::get(),
                                               "System.Collections.IEnumerator.get_Current", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::System::Object*, false>(this, ___internal_method);
}
// Ctor Parameters []
constexpr ::GlobalNamespace::__IndexFilter___GetEnumerator_d__23::__IndexFilter___GetEnumerator_d__23() {}
//  Writing Method size for method: ::GlobalNamespace::__IndexFilter___GetValues_d__24._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::__IndexFilter___GetValues_d__24::*)(int32_t)>(
    &::GlobalNamespace::__IndexFilter___GetValues_d__24::_ctor)> {
  constexpr static std::size_t size = 0x34;
  constexpr static std::size_t addrs = 0x12bf264;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__IndexFilter___GetValues_d__24*>::get(), ".ctor",
                                    std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::__IndexFilter___GetValues_d__24.System_IDisposable_Dispose
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::__IndexFilter___GetValues_d__24::*)()>(
    &::GlobalNamespace::__IndexFilter___GetValues_d__24::System_IDisposable_Dispose)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x12bf8f8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__IndexFilter___GetValues_d__24*>::get(),
                                                                               "System.IDisposable.Dispose", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::__IndexFilter___GetValues_d__24.MoveNext
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::GlobalNamespace::__IndexFilter___GetValues_d__24::*)()>(
    &::GlobalNamespace::__IndexFilter___GetValues_d__24::MoveNext)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x12bf8fc;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__IndexFilter___GetValues_d__24*>::get(),
                                                                               "MoveNext", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::__IndexFilter___GetValues_d__24.System_Collections_Generic_IEnumerator_System_Int32__get_Current
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (::GlobalNamespace::__IndexFilter___GetValues_d__24::*)()>(
    &::GlobalNamespace::__IndexFilter___GetValues_d__24::System_Collections_Generic_IEnumerator_System_Int32__get_Current)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x12bf97c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__IndexFilter___GetValues_d__24*>::get(),
                                    "System.Collections.Generic.IEnumerator<System.Int32>.get_Current", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::__IndexFilter___GetValues_d__24.System_Collections_IEnumerator_Reset
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::__IndexFilter___GetValues_d__24::*)()>(
    &::GlobalNamespace::__IndexFilter___GetValues_d__24::System_Collections_IEnumerator_Reset)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0x12bf984;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__IndexFilter___GetValues_d__24*>::get(),
                                                 "System.Collections.IEnumerator.Reset", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::__IndexFilter___GetValues_d__24.System_Collections_IEnumerator_get_Current
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Object* (::GlobalNamespace::__IndexFilter___GetValues_d__24::*)()>(
    &::GlobalNamespace::__IndexFilter___GetValues_d__24::System_Collections_IEnumerator_get_Current)> {
  constexpr static std::size_t size = 0x5c;
  constexpr static std::size_t addrs = 0x12bf9c4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__IndexFilter___GetValues_d__24*>::get(),
                                                 "System.Collections.IEnumerator.get_Current", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::__IndexFilter___GetValues_d__24.System_Collections_Generic_IEnumerable_System_Int32__GetEnumerator
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Collections::Generic::IEnumerator_1<int32_t>* (::GlobalNamespace::__IndexFilter___GetValues_d__24::*)()>(
    &::GlobalNamespace::__IndexFilter___GetValues_d__24::System_Collections_Generic_IEnumerable_System_Int32__GetEnumerator)> {
  constexpr static std::size_t size = 0xa4;
  constexpr static std::size_t addrs = 0x12bfa20;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__IndexFilter___GetValues_d__24*>::get(),
                                    "System.Collections.Generic.IEnumerable<System.Int32>.GetEnumerator", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::__IndexFilter___GetValues_d__24.System_Collections_IEnumerable_GetEnumerator
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Collections::IEnumerator* (::GlobalNamespace::__IndexFilter___GetValues_d__24::*)()>(
    &::GlobalNamespace::__IndexFilter___GetValues_d__24::System_Collections_IEnumerable_GetEnumerator)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x12bfac4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__IndexFilter___GetValues_d__24*>::get(),
                                                 "System.Collections.IEnumerable.GetEnumerator", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
/// @brief Convert operator to "::System::Collections::Generic::IEnumerable_1<int32_t>"
constexpr GlobalNamespace::__IndexFilter___GetValues_d__24::operator ::System::Collections::Generic::IEnumerable_1<int32_t>*() noexcept {
  return static_cast<::System::Collections::Generic::IEnumerable_1<int32_t>*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::Collections::Generic::IEnumerable_1<int32_t>"
constexpr ::System::Collections::Generic::IEnumerable_1<int32_t>* GlobalNamespace::__IndexFilter___GetValues_d__24::i___System__Collections__Generic__IEnumerable_1_int32_t_() noexcept {
  return static_cast<::System::Collections::Generic::IEnumerable_1<int32_t>*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::System::Collections::IEnumerable"
constexpr GlobalNamespace::__IndexFilter___GetValues_d__24::operator ::System::Collections::IEnumerable*() noexcept {
  return static_cast<::System::Collections::IEnumerable*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::Collections::IEnumerable"
constexpr ::System::Collections::IEnumerable* GlobalNamespace::__IndexFilter___GetValues_d__24::i___System__Collections__IEnumerable() noexcept {
  return static_cast<::System::Collections::IEnumerable*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::System::Collections::Generic::IEnumerator_1<int32_t>"
constexpr GlobalNamespace::__IndexFilter___GetValues_d__24::operator ::System::Collections::Generic::IEnumerator_1<int32_t>*() noexcept {
  return static_cast<::System::Collections::Generic::IEnumerator_1<int32_t>*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::Collections::Generic::IEnumerator_1<int32_t>"
constexpr ::System::Collections::Generic::IEnumerator_1<int32_t>* GlobalNamespace::__IndexFilter___GetValues_d__24::i___System__Collections__Generic__IEnumerator_1_int32_t_() noexcept {
  return static_cast<::System::Collections::Generic::IEnumerator_1<int32_t>*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::System::Collections::IEnumerator"
constexpr GlobalNamespace::__IndexFilter___GetValues_d__24::operator ::System::Collections::IEnumerator*() noexcept {
  return static_cast<::System::Collections::IEnumerator*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::Collections::IEnumerator"
constexpr ::System::Collections::IEnumerator* GlobalNamespace::__IndexFilter___GetValues_d__24::i___System__Collections__IEnumerator() noexcept {
  return static_cast<::System::Collections::IEnumerator*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::System::IDisposable"
constexpr GlobalNamespace::__IndexFilter___GetValues_d__24::operator ::System::IDisposable*() noexcept {
  return static_cast<::System::IDisposable*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::IDisposable"
constexpr ::System::IDisposable* GlobalNamespace::__IndexFilter___GetValues_d__24::i___System__IDisposable() noexcept {
  return static_cast<::System::IDisposable*>(static_cast<void*>(this));
}
constexpr int32_t& GlobalNamespace::__IndexFilter___GetValues_d__24::__cordl_internal_get___1__state() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->_____1__state;
}
constexpr int32_t const& GlobalNamespace::__IndexFilter___GetValues_d__24::__cordl_internal_get___1__state() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->_____1__state;
}
constexpr void GlobalNamespace::__IndexFilter___GetValues_d__24::__cordl_internal_set___1__state(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->_____1__state = value;
}
constexpr int32_t& GlobalNamespace::__IndexFilter___GetValues_d__24::__cordl_internal_get___2__current() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->_____2__current;
}
constexpr int32_t const& GlobalNamespace::__IndexFilter___GetValues_d__24::__cordl_internal_get___2__current() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->_____2__current;
}
constexpr void GlobalNamespace::__IndexFilter___GetValues_d__24::__cordl_internal_set___2__current(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->_____2__current = value;
}
constexpr int32_t& GlobalNamespace::__IndexFilter___GetValues_d__24::__cordl_internal_get___l__initialThreadId() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->_____l__initialThreadId;
}
constexpr int32_t const& GlobalNamespace::__IndexFilter___GetValues_d__24::__cordl_internal_get___l__initialThreadId() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->_____l__initialThreadId;
}
constexpr void GlobalNamespace::__IndexFilter___GetValues_d__24::__cordl_internal_set___l__initialThreadId(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->_____l__initialThreadId = value;
}
constexpr ::GlobalNamespace::IndexFilter*& GlobalNamespace::__IndexFilter___GetValues_d__24::__cordl_internal_get___4__this() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->_____4__this;
}
constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::IndexFilter*> const& GlobalNamespace::__IndexFilter___GetValues_d__24::__cordl_internal_get___4__this() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->_____4__this;
}
constexpr void GlobalNamespace::__IndexFilter___GetValues_d__24::__cordl_internal_set___4__this(::GlobalNamespace::IndexFilter* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->_____4__this)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr int32_t& GlobalNamespace::__IndexFilter___GetValues_d__24::__cordl_internal_get__value_5__2() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____value_5__2;
}
constexpr int32_t const& GlobalNamespace::__IndexFilter___GetValues_d__24::__cordl_internal_get__value_5__2() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____value_5__2;
}
constexpr void GlobalNamespace::__IndexFilter___GetValues_d__24::__cordl_internal_set__value_5__2(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____value_5__2 = value;
}
constexpr int32_t& GlobalNamespace::__IndexFilter___GetValues_d__24::__cordl_internal_get__i_5__3() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____i_5__3;
}
constexpr int32_t const& GlobalNamespace::__IndexFilter___GetValues_d__24::__cordl_internal_get__i_5__3() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____i_5__3;
}
constexpr void GlobalNamespace::__IndexFilter___GetValues_d__24::__cordl_internal_set__i_5__3(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____i_5__3 = value;
}
inline ::GlobalNamespace::__IndexFilter___GetValues_d__24* GlobalNamespace::__IndexFilter___GetValues_d__24::New_ctor(int32_t __1__state) {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::GlobalNamespace::__IndexFilter___GetValues_d__24*>(__1__state));
}
inline void GlobalNamespace::__IndexFilter___GetValues_d__24::_ctor(int32_t __1__state) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__IndexFilter___GetValues_d__24*>::get(), ".ctor",
                                               std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, __1__state);
}
inline void GlobalNamespace::__IndexFilter___GetValues_d__24::System_IDisposable_Dispose() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__IndexFilter___GetValues_d__24*>::get(),
                                                                             "System.IDisposable.Dispose", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline bool GlobalNamespace::__IndexFilter___GetValues_d__24::MoveNext() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__IndexFilter___GetValues_d__24*>::get(),
                                                                             "MoveNext", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
inline int32_t GlobalNamespace::__IndexFilter___GetValues_d__24::System_Collections_Generic_IEnumerator_System_Int32__get_Current() {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__IndexFilter___GetValues_d__24*>::get(),
                                  "System.Collections.Generic.IEnumerator<System.Int32>.get_Current", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<int32_t, false>(this, ___internal_method);
}
inline void GlobalNamespace::__IndexFilter___GetValues_d__24::System_Collections_IEnumerator_Reset() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__IndexFilter___GetValues_d__24*>::get(),
                                               "System.Collections.IEnumerator.Reset", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline ::System::Object* GlobalNamespace::__IndexFilter___GetValues_d__24::System_Collections_IEnumerator_get_Current() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__IndexFilter___GetValues_d__24*>::get(),
                                               "System.Collections.IEnumerator.get_Current", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::System::Object*, false>(this, ___internal_method);
}
inline ::System::Collections::Generic::IEnumerator_1<int32_t>* GlobalNamespace::__IndexFilter___GetValues_d__24::System_Collections_Generic_IEnumerable_System_Int32__GetEnumerator() {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__IndexFilter___GetValues_d__24*>::get(),
                                  "System.Collections.Generic.IEnumerable<System.Int32>.GetEnumerator", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::IEnumerator_1<int32_t>*, false>(this, ___internal_method);
}
inline ::System::Collections::IEnumerator* GlobalNamespace::__IndexFilter___GetValues_d__24::System_Collections_IEnumerable_GetEnumerator() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__IndexFilter___GetValues_d__24*>::get(),
                                               "System.Collections.IEnumerable.GetEnumerator", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::System::Collections::IEnumerator*, false>(this, ___internal_method);
}
// Ctor Parameters []
constexpr ::GlobalNamespace::__IndexFilter___GetValues_d__24::__IndexFilter___GetValues_d__24() {}
//  Writing Method size for method: ::GlobalNamespace::IndexFilter.get_Count
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (::GlobalNamespace::IndexFilter::*)()>(&::GlobalNamespace::IndexFilter::get_Count)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x12befd8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::IndexFilter*>::get(), "get_Count",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::IndexFilter.get_VisibleCount
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (::GlobalNamespace::IndexFilter::*)()>(&::GlobalNamespace::IndexFilter::get_VisibleCount)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x12befe0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::IndexFilter*>::get(), "get_VisibleCount",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::IndexFilter.get_limitAlsoAffectType
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::GlobalNamespace::__IndexFilter__IndexFilterLimitAlsoAffectType (::GlobalNamespace::IndexFilter::*)()>(
    &::GlobalNamespace::IndexFilter::get_limitAlsoAffectType)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x12befe8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::IndexFilter*>::get(),
                                                                               "get_limitAlsoAffectType", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::IndexFilter.get_limitsDuration
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::GlobalNamespace::IndexFilter::*)()>(&::GlobalNamespace::IndexFilter::get_limitsDuration)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x12beff0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::IndexFilter*>::get(), "get_limitsDuration",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::IndexFilter.get_limitsDistribution
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::GlobalNamespace::IndexFilter::*)()>(&::GlobalNamespace::IndexFilter::get_limitsDistribution)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x12bc17c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::IndexFilter*>::get(), "get_limitsDistribution",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::IndexFilter._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::IndexFilter::*)(
    int32_t, int32_t, int32_t, int32_t, ::GlobalNamespace::__IndexFilter__IndexFilterRandomType, int32_t, int32_t, float_t, ::GlobalNamespace::__IndexFilter__IndexFilterLimitAlsoAffectType)>(
    &::GlobalNamespace::IndexFilter::_ctor)> {
  constexpr static std::size_t size = 0xe8;
  constexpr static std::size_t addrs = 0x12beffc;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::IndexFilter*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 9>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::__IndexFilter__IndexFilterRandomType>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::__IndexFilter__IndexFilterLimitAlsoAffectType>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::IndexFilter._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::IndexFilter::*)(
    int32_t, int32_t, int32_t, ::GlobalNamespace::__IndexFilter__IndexFilterRandomType, int32_t, int32_t, float_t, ::GlobalNamespace::__IndexFilter__IndexFilterLimitAlsoAffectType)>(
    &::GlobalNamespace::IndexFilter::_ctor)> {
  constexpr static std::size_t size = 0xe0;
  constexpr static std::size_t addrs = 0x12bf0e4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::IndexFilter*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 8>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::__IndexFilter__IndexFilterRandomType>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::__IndexFilter__IndexFilterLimitAlsoAffectType>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::IndexFilter.GetEnumerator
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Collections::Generic::IEnumerator_1<::System::ValueTuple_3<int32_t, int32_t, int32_t>>* (
    ::GlobalNamespace::IndexFilter::*)()>(&::GlobalNamespace::IndexFilter::GetEnumerator)> {
  constexpr static std::size_t size = 0x68;
  constexpr static std::size_t addrs = 0x12bca48;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::IndexFilter*>::get(), "GetEnumerator",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::IndexFilter.GetValues
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Collections::Generic::IEnumerable_1<int32_t>* (::GlobalNamespace::IndexFilter::*)()>(
    &::GlobalNamespace::IndexFilter::GetValues)> {
  constexpr static std::size_t size = 0x78;
  constexpr static std::size_t addrs = 0x12bf1ec;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::IndexFilter*>::get(), "GetValues",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::IndexFilter.System_Collections_IEnumerable_GetEnumerator
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Collections::IEnumerator* (::GlobalNamespace::IndexFilter::*)()>(
    &::GlobalNamespace::IndexFilter::System_Collections_IEnumerable_GetEnumerator)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x12bf298;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::IndexFilter*>::get(), "System.Collections.IEnumerable.GetEnumerator",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
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
constexpr ::GlobalNamespace::__IndexFilter__IndexFilterRandomType& GlobalNamespace::IndexFilter::__cordl_internal_get__random() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____random;
}
constexpr ::GlobalNamespace::__IndexFilter__IndexFilterRandomType const& GlobalNamespace::IndexFilter::__cordl_internal_get__random() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____random;
}
constexpr void GlobalNamespace::IndexFilter::__cordl_internal_set__random(::GlobalNamespace::__IndexFilter__IndexFilterRandomType value) {
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
constexpr ::GlobalNamespace::__IndexFilter__IndexFilterLimitAlsoAffectType& GlobalNamespace::IndexFilter::__cordl_internal_get__limitAlsoAffectType() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____limitAlsoAffectType;
}
constexpr ::GlobalNamespace::__IndexFilter__IndexFilterLimitAlsoAffectType const& GlobalNamespace::IndexFilter::__cordl_internal_get__limitAlsoAffectType() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____limitAlsoAffectType;
}
constexpr void GlobalNamespace::IndexFilter::__cordl_internal_set__limitAlsoAffectType(::GlobalNamespace::__IndexFilter__IndexFilterLimitAlsoAffectType value) {
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
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::IndexFilter*>::get(), "get_Count",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<int32_t, false>(this, ___internal_method);
}
inline int32_t GlobalNamespace::IndexFilter::get_VisibleCount() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::IndexFilter*>::get(), "get_VisibleCount",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<int32_t, false>(this, ___internal_method);
}
inline ::GlobalNamespace::__IndexFilter__IndexFilterLimitAlsoAffectType GlobalNamespace::IndexFilter::get_limitAlsoAffectType() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::IndexFilter*>::get(), "get_limitAlsoAffectType",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::__IndexFilter__IndexFilterLimitAlsoAffectType, false>(this, ___internal_method);
}
inline bool GlobalNamespace::IndexFilter::get_limitsDuration() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::IndexFilter*>::get(), "get_limitsDuration",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
inline bool GlobalNamespace::IndexFilter::get_limitsDistribution() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::IndexFilter*>::get(), "get_limitsDistribution",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
inline ::GlobalNamespace::IndexFilter* GlobalNamespace::IndexFilter::New_ctor(int32_t start, int32_t step, int32_t count, int32_t groupSize,
                                                                              ::GlobalNamespace::__IndexFilter__IndexFilterRandomType random, int32_t seed, int32_t chunkSize, float_t limit,
                                                                              ::GlobalNamespace::__IndexFilter__IndexFilterLimitAlsoAffectType limitAlsoAffectType) {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::GlobalNamespace::IndexFilter*>(start, step, count, groupSize, random, seed, chunkSize, limit, limitAlsoAffectType));
}
inline void GlobalNamespace::IndexFilter::_ctor(int32_t start, int32_t step, int32_t count, int32_t groupSize, ::GlobalNamespace::__IndexFilter__IndexFilterRandomType random, int32_t seed,
                                                int32_t chunkSize, float_t limit, ::GlobalNamespace::__IndexFilter__IndexFilterLimitAlsoAffectType limitAlsoAffectType) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::IndexFilter*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 9>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::__IndexFilter__IndexFilterRandomType>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::__IndexFilter__IndexFilterLimitAlsoAffectType>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, start, step, count, groupSize, random, seed, chunkSize, limit, limitAlsoAffectType);
}
inline ::GlobalNamespace::IndexFilter* GlobalNamespace::IndexFilter::New_ctor(int32_t start, int32_t end, int32_t groupSize, ::GlobalNamespace::__IndexFilter__IndexFilterRandomType random,
                                                                              int32_t seed, int32_t chunkSize, float_t limit,
                                                                              ::GlobalNamespace::__IndexFilter__IndexFilterLimitAlsoAffectType limitAlsoAffectType) {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::GlobalNamespace::IndexFilter*>(start, end, groupSize, random, seed, chunkSize, limit, limitAlsoAffectType));
}
inline void GlobalNamespace::IndexFilter::_ctor(int32_t start, int32_t end, int32_t groupSize, ::GlobalNamespace::__IndexFilter__IndexFilterRandomType random, int32_t seed, int32_t chunkSize,
                                                float_t limit, ::GlobalNamespace::__IndexFilter__IndexFilterLimitAlsoAffectType limitAlsoAffectType) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::IndexFilter*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 8>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::__IndexFilter__IndexFilterRandomType>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::__IndexFilter__IndexFilterLimitAlsoAffectType>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, start, end, groupSize, random, seed, chunkSize, limit, limitAlsoAffectType);
}
inline ::System::Collections::Generic::IEnumerator_1<::System::ValueTuple_3<int32_t, int32_t, int32_t>>* GlobalNamespace::IndexFilter::GetEnumerator() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::IndexFilter*>::get(), "GetEnumerator",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::IEnumerator_1<::System::ValueTuple_3<int32_t, int32_t, int32_t>>*, false>(this, ___internal_method);
}
inline ::System::Collections::Generic::IEnumerable_1<int32_t>* GlobalNamespace::IndexFilter::GetValues() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::IndexFilter*>::get(), "GetValues",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::IEnumerable_1<int32_t>*, false>(this, ___internal_method);
}
inline ::System::Collections::IEnumerator* GlobalNamespace::IndexFilter::System_Collections_IEnumerable_GetEnumerator() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::IndexFilter*>::get(), "System.Collections.IEnumerable.GetEnumerator",
                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::System::Collections::IEnumerator*, false>(this, ___internal_method);
}
// Ctor Parameters []
constexpr ::GlobalNamespace::IndexFilter::IndexFilter() {}
