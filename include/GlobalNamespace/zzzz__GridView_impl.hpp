#pragma once
// IWYU pragma private; include "GlobalNamespace/GridView.hpp"
#include "System/Collections/Generic/zzzz__Dictionary_2_impl.hpp"
#include "System/Collections/Generic/zzzz__List_1_impl.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "GlobalNamespace/zzzz__GridView_def.hpp"
#include "GlobalNamespace/zzzz__GridView_def.hpp"
#include "System/Collections/Generic/zzzz__Dictionary_2_def.hpp"
#include "System/Collections/Generic/zzzz__IEnumerable_1_def.hpp"
#include "System/Collections/Generic/zzzz__IEnumerator_1_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
#include "System/Collections/Generic/zzzz__Queue_1_def.hpp"
#include "System/Collections/zzzz__IEnumerable_def.hpp"
#include "System/Collections/zzzz__IEnumerator_def.hpp"
#include "System/zzzz__IDisposable_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "UnityEngine/zzzz__Component_def.hpp"
#include "UnityEngine/zzzz__RectTransform_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::GridView_IDataSource.get_numberOfCells
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::GlobalNamespace::GridView_IDataSource::*)()>(&::GlobalNamespace::GridView_IDataSource::get_numberOfCells)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::GlobalNamespace::GridView_IDataSource*>(), { ::i2c::class_of<::GlobalNamespace::GridView_IDataSource*>(), 0 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GridView_IDataSource.get_cellWidth
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (::GlobalNamespace::GridView_IDataSource::*)()>(&::GlobalNamespace::GridView_IDataSource::get_cellWidth)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::GlobalNamespace::GridView_IDataSource*>(), { ::i2c::class_of<::GlobalNamespace::GridView_IDataSource*>(), 1 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GridView_IDataSource.get_cellHeight
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (::GlobalNamespace::GridView_IDataSource::*)()>(&::GlobalNamespace::GridView_IDataSource::get_cellHeight)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::GlobalNamespace::GridView_IDataSource*>(), { ::i2c::class_of<::GlobalNamespace::GridView_IDataSource*>(), 2 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GridView_IDataSource.CellForIdx
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityW<::UnityEngine::Component> (::GlobalNamespace::GridView_IDataSource::*)(::GlobalNamespace::GridView*, int32_t)>(
    &::GlobalNamespace::GridView_IDataSource::CellForIdx)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::GlobalNamespace::GridView_IDataSource*>(), { ::i2c::class_of<::GlobalNamespace::GridView_IDataSource*>(), 3 }));
    return ___internal_method;
  }
};
inline int32_t GlobalNamespace::GridView_IDataSource::get_numberOfCells() {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::GlobalNamespace::GridView_IDataSource*>(), 0 })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method);
}
inline float_t GlobalNamespace::GridView_IDataSource::get_cellWidth() {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::GlobalNamespace::GridView_IDataSource*>(), 1 })));
  return ::cordl_internals::RunMethodRethrow<float_t>(this, ___internal_method);
}
inline float_t GlobalNamespace::GridView_IDataSource::get_cellHeight() {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::GlobalNamespace::GridView_IDataSource*>(), 2 })));
  return ::cordl_internals::RunMethodRethrow<float_t>(this, ___internal_method);
}
inline ::UnityW<::UnityEngine::Component> GlobalNamespace::GridView_IDataSource::CellForIdx(::GlobalNamespace::GridView* gridView, int32_t idx) {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::GlobalNamespace::GridView_IDataSource*>(), 3 })));
  return ::cordl_internals::RunMethodRethrow<::UnityW<::UnityEngine::Component>>(this, ___internal_method, gridView, idx);
}
//  Writing Method size for method: ::GlobalNamespace::GridViewCellsEnumerator_GridView__GetEnumerator_d__1._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::GridViewCellsEnumerator_GridView__GetEnumerator_d__1::*)(int32_t)>(
    &::GlobalNamespace::GridViewCellsEnumerator_GridView__GetEnumerator_d__1::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x32ed3b0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::GridViewCellsEnumerator_GridView__GetEnumerator_d__1*>(), { ".ctor", {}, { ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GridViewCellsEnumerator_GridView__GetEnumerator_d__1.System_IDisposable_Dispose
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::GridViewCellsEnumerator_GridView__GetEnumerator_d__1::*)()>(
    &::GlobalNamespace::GridViewCellsEnumerator_GridView__GetEnumerator_d__1::System_IDisposable_Dispose)> {
  constexpr static std::size_t size = 0x114;
  constexpr static std::size_t addrs = 0x32ed3bc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::GridViewCellsEnumerator_GridView__GetEnumerator_d__1*>(), { "System.IDisposable.Dispose", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GridViewCellsEnumerator_GridView__GetEnumerator_d__1.MoveNext
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::GlobalNamespace::GridViewCellsEnumerator_GridView__GetEnumerator_d__1::*)()>(
    &::GlobalNamespace::GridViewCellsEnumerator_GridView__GetEnumerator_d__1::MoveNext)> {
  constexpr static std::size_t size = 0x310;
  constexpr static std::size_t addrs = 0x32ed4d0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::GridViewCellsEnumerator_GridView__GetEnumerator_d__1*>(), { "MoveNext", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GridViewCellsEnumerator_GridView__GetEnumerator_d__1.__m__Finally1
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::GridViewCellsEnumerator_GridView__GetEnumerator_d__1::*)()>(
    &::GlobalNamespace::GridViewCellsEnumerator_GridView__GetEnumerator_d__1::__m__Finally1)> {
  constexpr static std::size_t size = 0x48;
  constexpr static std::size_t addrs = 0x32ed828;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::GridViewCellsEnumerator_GridView__GetEnumerator_d__1*>(), { "<>m__Finally1", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GridViewCellsEnumerator_GridView__GetEnumerator_d__1.__m__Finally2
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::GridViewCellsEnumerator_GridView__GetEnumerator_d__1::*)()>(
    &::GlobalNamespace::GridViewCellsEnumerator_GridView__GetEnumerator_d__1::__m__Finally2)> {
  constexpr static std::size_t size = 0x48;
  constexpr static std::size_t addrs = 0x32ed7e0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::GridViewCellsEnumerator_GridView__GetEnumerator_d__1*>(), { "<>m__Finally2", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GridViewCellsEnumerator_GridView__GetEnumerator_d__1.System_Collections_Generic_IEnumerator_UnityEngine_Component__get_Current
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityW<::UnityEngine::Component> (::GlobalNamespace::GridViewCellsEnumerator_GridView__GetEnumerator_d__1::*)()>(
    &::GlobalNamespace::GridViewCellsEnumerator_GridView__GetEnumerator_d__1::System_Collections_Generic_IEnumerator_UnityEngine_Component__get_Current)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x32ed870;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::GridViewCellsEnumerator_GridView__GetEnumerator_d__1*>(),
                                                                                           { "System.Collections.Generic.IEnumerator<UnityEngine.Component>.get_Current", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GridViewCellsEnumerator_GridView__GetEnumerator_d__1.System_Collections_IEnumerator_Reset
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::GridViewCellsEnumerator_GridView__GetEnumerator_d__1::*)()>(
    &::GlobalNamespace::GridViewCellsEnumerator_GridView__GetEnumerator_d__1::System_Collections_IEnumerator_Reset)> {
  constexpr static std::size_t size = 0x38;
  constexpr static std::size_t addrs = 0x32ed878;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::GridViewCellsEnumerator_GridView__GetEnumerator_d__1*>(), { "System.Collections.IEnumerator.Reset", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GridViewCellsEnumerator_GridView__GetEnumerator_d__1.System_Collections_IEnumerator_get_Current
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Object* (::GlobalNamespace::GridViewCellsEnumerator_GridView__GetEnumerator_d__1::*)()>(
    &::GlobalNamespace::GridViewCellsEnumerator_GridView__GetEnumerator_d__1::System_Collections_IEnumerator_get_Current)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x32ed8b0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::GlobalNamespace::GridViewCellsEnumerator_GridView__GetEnumerator_d__1*>(), { "System.Collections.IEnumerator.get_Current", {}, {} })));
    return ___internal_method;
  }
};
constexpr int32_t& GlobalNamespace::GridViewCellsEnumerator_GridView__GetEnumerator_d__1::__cordl_internal_get___1__state() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->_____1__state;
}
constexpr int32_t const& GlobalNamespace::GridViewCellsEnumerator_GridView__GetEnumerator_d__1::__cordl_internal_get___1__state() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->_____1__state;
}
constexpr void GlobalNamespace::GridViewCellsEnumerator_GridView__GetEnumerator_d__1::__cordl_internal_set___1__state(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->_____1__state = value;
}
constexpr ::UnityW<::UnityEngine::Component>& GlobalNamespace::GridViewCellsEnumerator_GridView__GetEnumerator_d__1::__cordl_internal_get___2__current() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->_____2__current;
}
constexpr ::UnityW<::UnityEngine::Component> const& GlobalNamespace::GridViewCellsEnumerator_GridView__GetEnumerator_d__1::__cordl_internal_get___2__current() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->_____2__current;
}
constexpr void GlobalNamespace::GridViewCellsEnumerator_GridView__GetEnumerator_d__1::__cordl_internal_set___2__current(::UnityW<::UnityEngine::Component> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->_____2__current = value;
}
constexpr ::GlobalNamespace::GridView_GridViewCellsEnumerator*& GlobalNamespace::GridViewCellsEnumerator_GridView__GetEnumerator_d__1::__cordl_internal_get___4__this() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->_____4__this;
}
constexpr ::GlobalNamespace::GridView_GridViewCellsEnumerator* const& GlobalNamespace::GridViewCellsEnumerator_GridView__GetEnumerator_d__1::__cordl_internal_get___4__this() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->_____4__this;
}
constexpr void GlobalNamespace::GridViewCellsEnumerator_GridView__GetEnumerator_d__1::__cordl_internal_set___4__this(::GlobalNamespace::GridView_GridViewCellsEnumerator* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->_____4__this = value;
}
constexpr ::System::Collections::Generic::KeyCollection_Dictionary_2_Enumerator<::UnityW<::UnityEngine::Component>, ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::Component>>*>&
GlobalNamespace::GridViewCellsEnumerator_GridView__GetEnumerator_d__1::__cordl_internal_get___7__wrap1() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->_____7__wrap1;
}
constexpr ::System::Collections::Generic::KeyCollection_Dictionary_2_Enumerator<::UnityW<::UnityEngine::Component>, ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::Component>>*> const&
GlobalNamespace::GridViewCellsEnumerator_GridView__GetEnumerator_d__1::__cordl_internal_get___7__wrap1() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->_____7__wrap1;
}
constexpr void GlobalNamespace::GridViewCellsEnumerator_GridView__GetEnumerator_d__1::__cordl_internal_set___7__wrap1(
    ::System::Collections::Generic::KeyCollection_Dictionary_2_Enumerator<::UnityW<::UnityEngine::Component>, ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::Component>>*> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->_____7__wrap1 = value;
}
constexpr ::System::Collections::Generic::List_1_Enumerator<::UnityW<::UnityEngine::Component>>&
GlobalNamespace::GridViewCellsEnumerator_GridView__GetEnumerator_d__1::__cordl_internal_get___7__wrap2() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->_____7__wrap2;
}
constexpr ::System::Collections::Generic::List_1_Enumerator<::UnityW<::UnityEngine::Component>> const&
GlobalNamespace::GridViewCellsEnumerator_GridView__GetEnumerator_d__1::__cordl_internal_get___7__wrap2() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->_____7__wrap2;
}
constexpr void
GlobalNamespace::GridViewCellsEnumerator_GridView__GetEnumerator_d__1::__cordl_internal_set___7__wrap2(::System::Collections::Generic::List_1_Enumerator<::UnityW<::UnityEngine::Component>> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->_____7__wrap2 = value;
}
inline void GlobalNamespace::GridViewCellsEnumerator_GridView__GetEnumerator_d__1::_ctor(int32_t __1__state) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::GridViewCellsEnumerator_GridView__GetEnumerator_d__1*>(), { ".ctor", {}, { ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, __1__state);
}
inline void GlobalNamespace::GridViewCellsEnumerator_GridView__GetEnumerator_d__1::System_IDisposable_Dispose() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::GridViewCellsEnumerator_GridView__GetEnumerator_d__1*>(), { "System.IDisposable.Dispose", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline bool GlobalNamespace::GridViewCellsEnumerator_GridView__GetEnumerator_d__1::MoveNext() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::GridViewCellsEnumerator_GridView__GetEnumerator_d__1*>(), { "MoveNext", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void GlobalNamespace::GridViewCellsEnumerator_GridView__GetEnumerator_d__1::__m__Finally1() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::GridViewCellsEnumerator_GridView__GetEnumerator_d__1*>(), { "<>m__Finally1", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::GridViewCellsEnumerator_GridView__GetEnumerator_d__1::__m__Finally2() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::GridViewCellsEnumerator_GridView__GetEnumerator_d__1*>(), { "<>m__Finally2", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::UnityW<::UnityEngine::Component> GlobalNamespace::GridViewCellsEnumerator_GridView__GetEnumerator_d__1::System_Collections_Generic_IEnumerator_UnityEngine_Component__get_Current() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::GridViewCellsEnumerator_GridView__GetEnumerator_d__1*>(),
                                                                                         { "System.Collections.Generic.IEnumerator<UnityEngine.Component>.get_Current", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::UnityW<::UnityEngine::Component>>(this, ___internal_method);
}
inline void GlobalNamespace::GridViewCellsEnumerator_GridView__GetEnumerator_d__1::System_Collections_IEnumerator_Reset() {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::GridViewCellsEnumerator_GridView__GetEnumerator_d__1*>(), { "System.Collections.IEnumerator.Reset", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::System::Object* GlobalNamespace::GridViewCellsEnumerator_GridView__GetEnumerator_d__1::System_Collections_IEnumerator_get_Current() {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::GridViewCellsEnumerator_GridView__GetEnumerator_d__1*>(), { "System.Collections.IEnumerator.get_Current", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::System::Object*>(this, ___internal_method);
}
inline ::GlobalNamespace::GridViewCellsEnumerator_GridView__GetEnumerator_d__1* GlobalNamespace::GridViewCellsEnumerator_GridView__GetEnumerator_d__1::New_ctor(int32_t __1__state) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::GridViewCellsEnumerator_GridView__GetEnumerator_d__1*>(__1__state));
}
/// @brief Convert operator to "::System::Collections::Generic::IEnumerator_1<::UnityW<::UnityEngine::Component>>"
constexpr GlobalNamespace::GridViewCellsEnumerator_GridView__GetEnumerator_d__1::operator ::System::Collections::Generic::IEnumerator_1<::UnityW<::UnityEngine::Component>>*() noexcept {
  return static_cast<::System::Collections::Generic::IEnumerator_1<::UnityW<::UnityEngine::Component>>*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::Collections::Generic::IEnumerator_1<::UnityW<::UnityEngine::Component>>"
constexpr ::System::Collections::Generic::IEnumerator_1<::UnityW<::UnityEngine::Component>>*
GlobalNamespace::GridViewCellsEnumerator_GridView__GetEnumerator_d__1::i___System__Collections__Generic__IEnumerator_1___UnityW___UnityEngine__Component__() noexcept {
  return static_cast<::System::Collections::Generic::IEnumerator_1<::UnityW<::UnityEngine::Component>>*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::System::Collections::IEnumerator"
constexpr GlobalNamespace::GridViewCellsEnumerator_GridView__GetEnumerator_d__1::operator ::System::Collections::IEnumerator*() noexcept {
  return static_cast<::System::Collections::IEnumerator*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::Collections::IEnumerator"
constexpr ::System::Collections::IEnumerator* GlobalNamespace::GridViewCellsEnumerator_GridView__GetEnumerator_d__1::i___System__Collections__IEnumerator() noexcept {
  return static_cast<::System::Collections::IEnumerator*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::System::IDisposable"
constexpr GlobalNamespace::GridViewCellsEnumerator_GridView__GetEnumerator_d__1::operator ::System::IDisposable*() noexcept {
  return static_cast<::System::IDisposable*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::IDisposable"
constexpr ::System::IDisposable* GlobalNamespace::GridViewCellsEnumerator_GridView__GetEnumerator_d__1::i___System__IDisposable() noexcept {
  return static_cast<::System::IDisposable*>(static_cast<void*>(this));
}
// Ctor Parameters []
constexpr ::GlobalNamespace::GridViewCellsEnumerator_GridView__GetEnumerator_d__1::GridViewCellsEnumerator_GridView__GetEnumerator_d__1() {}
//  Writing Method size for method: ::GlobalNamespace::GridView_GridViewCellsEnumerator.GetEnumerator
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Collections::Generic::IEnumerator_1<::UnityW<::UnityEngine::Component>>* (::GlobalNamespace::GridView_GridViewCellsEnumerator::*)()>(
    &::GlobalNamespace::GridView_GridViewCellsEnumerator::GetEnumerator)> {
  constexpr static std::size_t size = 0x54;
  constexpr static std::size_t addrs = 0x32ed35c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::GridView_GridViewCellsEnumerator*>(), { "GetEnumerator", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GridView_GridViewCellsEnumerator.System_Collections_IEnumerable_GetEnumerator
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Collections::IEnumerator* (::GlobalNamespace::GridView_GridViewCellsEnumerator::*)()>(
    &::GlobalNamespace::GridView_GridViewCellsEnumerator::System_Collections_IEnumerable_GetEnumerator)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x32ed3b8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::GridView_GridViewCellsEnumerator*>(), { "System.Collections.IEnumerable.GetEnumerator", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GridView_GridViewCellsEnumerator._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::GridView_GridViewCellsEnumerator::*)(::GlobalNamespace::GridView*)>(
    &::GlobalNamespace::GridView_GridViewCellsEnumerator::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x32ecb24;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::GridView_GridViewCellsEnumerator*>(), { ".ctor", {}, { ::i2c::type_of<::GlobalNamespace::GridView*>() } })));
    return ___internal_method;
  }
};
constexpr ::UnityW<::GlobalNamespace::GridView>& GlobalNamespace::GridView_GridViewCellsEnumerator::__cordl_internal_get__gridView() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____gridView;
}
constexpr ::UnityW<::GlobalNamespace::GridView> const& GlobalNamespace::GridView_GridViewCellsEnumerator::__cordl_internal_get__gridView() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____gridView;
}
constexpr void GlobalNamespace::GridView_GridViewCellsEnumerator::__cordl_internal_set__gridView(::UnityW<::GlobalNamespace::GridView> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____gridView = value;
}
inline ::System::Collections::Generic::IEnumerator_1<::UnityW<::UnityEngine::Component>>* GlobalNamespace::GridView_GridViewCellsEnumerator::GetEnumerator() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::GridView_GridViewCellsEnumerator*>(), { "GetEnumerator", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::IEnumerator_1<::UnityW<::UnityEngine::Component>>*>(this, ___internal_method);
}
inline ::System::Collections::IEnumerator* GlobalNamespace::GridView_GridViewCellsEnumerator::System_Collections_IEnumerable_GetEnumerator() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::GridView_GridViewCellsEnumerator*>(), { "System.Collections.IEnumerable.GetEnumerator", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::System::Collections::IEnumerator*>(this, ___internal_method);
}
inline void GlobalNamespace::GridView_GridViewCellsEnumerator::_ctor(::GlobalNamespace::GridView* gridView) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::GridView_GridViewCellsEnumerator*>(), { ".ctor", {}, { ::i2c::type_of<::GlobalNamespace::GridView*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, gridView);
}
inline ::GlobalNamespace::GridView_GridViewCellsEnumerator* GlobalNamespace::GridView_GridViewCellsEnumerator::New_ctor(::GlobalNamespace::GridView* gridView) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::GridView_GridViewCellsEnumerator*>(gridView));
}
/// @brief Convert operator to "::System::Collections::Generic::IEnumerable_1<::UnityW<::UnityEngine::Component>>"
constexpr GlobalNamespace::GridView_GridViewCellsEnumerator::operator ::System::Collections::Generic::IEnumerable_1<::UnityW<::UnityEngine::Component>>*() noexcept {
  return static_cast<::System::Collections::Generic::IEnumerable_1<::UnityW<::UnityEngine::Component>>*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::Collections::Generic::IEnumerable_1<::UnityW<::UnityEngine::Component>>"
constexpr ::System::Collections::Generic::IEnumerable_1<::UnityW<::UnityEngine::Component>>*
GlobalNamespace::GridView_GridViewCellsEnumerator::i___System__Collections__Generic__IEnumerable_1___UnityW___UnityEngine__Component__() noexcept {
  return static_cast<::System::Collections::Generic::IEnumerable_1<::UnityW<::UnityEngine::Component>>*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::System::Collections::IEnumerable"
constexpr GlobalNamespace::GridView_GridViewCellsEnumerator::operator ::System::Collections::IEnumerable*() noexcept {
  return static_cast<::System::Collections::IEnumerable*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::Collections::IEnumerable"
constexpr ::System::Collections::IEnumerable* GlobalNamespace::GridView_GridViewCellsEnumerator::i___System__Collections__IEnumerable() noexcept {
  return static_cast<::System::Collections::IEnumerable*>(static_cast<void*>(this));
}
// Ctor Parameters []
constexpr ::GlobalNamespace::GridView_GridViewCellsEnumerator::GridView_GridViewCellsEnumerator() {}
//  Writing Method size for method: ::GlobalNamespace::GridView.get_visibleColumnCount
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::GlobalNamespace::GridView::*)()>(&::GlobalNamespace::GridView::get_visibleColumnCount)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x32eca64;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::GridView*>(), { "get_visibleColumnCount", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GridView.get_dataSource
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::GlobalNamespace::GridView_IDataSource* (::GlobalNamespace::GridView::*)()>(&::GlobalNamespace::GridView::get_dataSource)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x32eca6c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::GridView*>(), { "get_dataSource", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GridView.get_contentTransform
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityW<::UnityEngine::RectTransform> (::GlobalNamespace::GridView::*)()>(&::GlobalNamespace::GridView::get_contentTransform)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x32eca74;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::GridView*>(), { "get_contentTransform", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GridView.get_cellsEnumerator
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::GlobalNamespace::GridView_GridViewCellsEnumerator* (::GlobalNamespace::GridView::*)()>(&::GlobalNamespace::GridView::get_cellsEnumerator)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x32eca7c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::GridView*>(), { "get_cellsEnumerator", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GridView.set_cellsEnumerator
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::GridView::*)(::GlobalNamespace::GridView_GridViewCellsEnumerator*)>(
    &::GlobalNamespace::GridView::set_cellsEnumerator)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x32eca84;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::GlobalNamespace::GridView*>(), { "set_cellsEnumerator", {}, { ::i2c::type_of<::GlobalNamespace::GridView_GridViewCellsEnumerator*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GridView.get_rowCount
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::GlobalNamespace::GridView::*)()>(&::GlobalNamespace::GridView::get_rowCount)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x32eca8c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::GridView*>(), { "get_rowCount", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GridView.get_columnCount
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::GlobalNamespace::GridView::*)()>(&::GlobalNamespace::GridView::get_columnCount)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x32eca94;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::GridView*>(), { "get_columnCount", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GridView.SetDataSource
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::GridView::*)(::GlobalNamespace::GridView_IDataSource*, bool)>(&::GlobalNamespace::GridView::SetDataSource)> {
  constexpr static std::size_t size = 0x88;
  constexpr static std::size_t addrs = 0x32eca9c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(::i2c::class_of<::GlobalNamespace::GridView*>(), { "SetDataSource", {}, { ::i2c::type_of<::GlobalNamespace::GridView_IDataSource*>(), ::i2c::type_of<bool>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GridView.ReloadData
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::GridView::*)()>(&::GlobalNamespace::GridView::ReloadData)> {
  constexpr static std::size_t size = 0x620;
  constexpr static std::size_t addrs = 0x32ecb2c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::GridView*>(), { "ReloadData", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GridView.GetActiveCellsForCellPrefab
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Collections::Generic::List_1<::UnityW<::UnityEngine::Component>>* (::GlobalNamespace::GridView::*)(::UnityEngine::Component*)>(
    &::GlobalNamespace::GridView::GetActiveCellsForCellPrefab)> {
  constexpr static std::size_t size = 0x108;
  constexpr static std::size_t addrs = 0x32ed14c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::GridView*>(), { "GetActiveCellsForCellPrefab", {}, { ::i2c::type_of<::UnityEngine::Component*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GridView._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::GridView::*)()>(&::GlobalNamespace::GridView::_ctor)> {
  constexpr static std::size_t size = 0x108;
  constexpr static std::size_t addrs = 0x32ed254;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::GridView*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
constexpr ::UnityW<::UnityEngine::RectTransform>& GlobalNamespace::GridView::__cordl_internal_get__contentTransform() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____contentTransform;
}
constexpr ::UnityW<::UnityEngine::RectTransform> const& GlobalNamespace::GridView::__cordl_internal_get__contentTransform() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____contentTransform;
}
constexpr void GlobalNamespace::GridView::__cordl_internal_set__contentTransform(::UnityW<::UnityEngine::RectTransform> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____contentTransform = value;
}
constexpr int32_t& GlobalNamespace::GridView::__cordl_internal_get__columnCount() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____columnCount;
}
constexpr int32_t const& GlobalNamespace::GridView::__cordl_internal_get__columnCount() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____columnCount;
}
constexpr void GlobalNamespace::GridView::__cordl_internal_set__columnCount(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____columnCount = value;
}
constexpr int32_t& GlobalNamespace::GridView::__cordl_internal_get__visibleColumnCount() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____visibleColumnCount;
}
constexpr int32_t const& GlobalNamespace::GridView::__cordl_internal_get__visibleColumnCount() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____visibleColumnCount;
}
constexpr void GlobalNamespace::GridView::__cordl_internal_set__visibleColumnCount(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____visibleColumnCount = value;
}
constexpr ::GlobalNamespace::GridView_IDataSource*& GlobalNamespace::GridView::__cordl_internal_get__dataSource() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____dataSource;
}
constexpr ::GlobalNamespace::GridView_IDataSource* const& GlobalNamespace::GridView::__cordl_internal_get__dataSource() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____dataSource;
}
constexpr void GlobalNamespace::GridView::__cordl_internal_set__dataSource(::GlobalNamespace::GridView_IDataSource* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____dataSource = value;
}
constexpr int32_t& GlobalNamespace::GridView::__cordl_internal_get__rowCount() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____rowCount;
}
constexpr int32_t const& GlobalNamespace::GridView::__cordl_internal_get__rowCount() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____rowCount;
}
constexpr void GlobalNamespace::GridView::__cordl_internal_set__rowCount(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____rowCount = value;
}
constexpr ::System::Collections::Generic::Dictionary_2<::UnityW<::UnityEngine::Component>, ::System::Collections::Generic::Queue_1<::UnityW<::UnityEngine::Component>>*>*&
GlobalNamespace::GridView::__cordl_internal_get__availableCellsPerPrefabDictionary() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____availableCellsPerPrefabDictionary;
}
constexpr ::System::Collections::Generic::Dictionary_2<::UnityW<::UnityEngine::Component>, ::System::Collections::Generic::Queue_1<::UnityW<::UnityEngine::Component>>*>* const&
GlobalNamespace::GridView::__cordl_internal_get__availableCellsPerPrefabDictionary() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____availableCellsPerPrefabDictionary;
}
constexpr void GlobalNamespace::GridView::__cordl_internal_set__availableCellsPerPrefabDictionary(
    ::System::Collections::Generic::Dictionary_2<::UnityW<::UnityEngine::Component>, ::System::Collections::Generic::Queue_1<::UnityW<::UnityEngine::Component>>*>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____availableCellsPerPrefabDictionary = value;
}
constexpr ::System::Collections::Generic::Dictionary_2<::UnityW<::UnityEngine::Component>, ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::Component>>*>*&
GlobalNamespace::GridView::__cordl_internal_get__spawnedCellsPerPrefabDictionary() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____spawnedCellsPerPrefabDictionary;
}
constexpr ::System::Collections::Generic::Dictionary_2<::UnityW<::UnityEngine::Component>, ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::Component>>*>* const&
GlobalNamespace::GridView::__cordl_internal_get__spawnedCellsPerPrefabDictionary() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____spawnedCellsPerPrefabDictionary;
}
constexpr void GlobalNamespace::GridView::__cordl_internal_set__spawnedCellsPerPrefabDictionary(
    ::System::Collections::Generic::Dictionary_2<::UnityW<::UnityEngine::Component>, ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::Component>>*>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____spawnedCellsPerPrefabDictionary = value;
}
constexpr ::GlobalNamespace::GridView_GridViewCellsEnumerator*& GlobalNamespace::GridView::__cordl_internal_get__cellsEnumerator_k__BackingField() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____cellsEnumerator_k__BackingField;
}
constexpr ::GlobalNamespace::GridView_GridViewCellsEnumerator* const& GlobalNamespace::GridView::__cordl_internal_get__cellsEnumerator_k__BackingField() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____cellsEnumerator_k__BackingField;
}
constexpr void GlobalNamespace::GridView::__cordl_internal_set__cellsEnumerator_k__BackingField(::GlobalNamespace::GridView_GridViewCellsEnumerator* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____cellsEnumerator_k__BackingField = value;
}
inline int32_t GlobalNamespace::GridView::get_visibleColumnCount() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::GridView*>(), { "get_visibleColumnCount", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method);
}
inline ::GlobalNamespace::GridView_IDataSource* GlobalNamespace::GridView::get_dataSource() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::GridView*>(), { "get_dataSource", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::GridView_IDataSource*>(this, ___internal_method);
}
inline ::UnityW<::UnityEngine::RectTransform> GlobalNamespace::GridView::get_contentTransform() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::GridView*>(), { "get_contentTransform", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::UnityW<::UnityEngine::RectTransform>>(this, ___internal_method);
}
inline ::GlobalNamespace::GridView_GridViewCellsEnumerator* GlobalNamespace::GridView::get_cellsEnumerator() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::GridView*>(), { "get_cellsEnumerator", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::GridView_GridViewCellsEnumerator*>(this, ___internal_method);
}
inline void GlobalNamespace::GridView::set_cellsEnumerator(::GlobalNamespace::GridView_GridViewCellsEnumerator* value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::GlobalNamespace::GridView*>(), { "set_cellsEnumerator", {}, { ::i2c::type_of<::GlobalNamespace::GridView_GridViewCellsEnumerator*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline int32_t GlobalNamespace::GridView::get_rowCount() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::GridView*>(), { "get_rowCount", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method);
}
inline int32_t GlobalNamespace::GridView::get_columnCount() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::GridView*>(), { "get_columnCount", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method);
}
inline void GlobalNamespace::GridView::SetDataSource(::GlobalNamespace::GridView_IDataSource* newDataSource, bool reloadData) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::GlobalNamespace::GridView*>(), { "SetDataSource", {}, { ::i2c::type_of<::GlobalNamespace::GridView_IDataSource*>(), ::i2c::type_of<bool>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, newDataSource, reloadData);
}
inline void GlobalNamespace::GridView::ReloadData() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::GridView*>(), { "ReloadData", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::Component>>* GlobalNamespace::GridView::GetActiveCellsForCellPrefab(::UnityEngine::Component* prefab) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::GridView*>(), { "GetActiveCellsForCellPrefab", {}, { ::i2c::type_of<::UnityEngine::Component*>() } })));
  return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::List_1<::UnityW<::UnityEngine::Component>>*>(this, ___internal_method, prefab);
}
template <typename T> inline T GlobalNamespace::GridView::GetReusableCellView(::UnityEngine::Component* prefab) {
  static auto* ___internal_method_base = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::GridView*>(), { "GetReusableCellView", { ::i2c::class_of<T>() }, { ::i2c::type_of<::UnityEngine::Component*>() } })));
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(___internal_method_base, { ::i2c::class_of<T>() })));
  return ::cordl_internals::RunMethodRethrow<T>(this, ___internal_method, prefab);
}
inline void GlobalNamespace::GridView::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::GridView*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GlobalNamespace::GridView* GlobalNamespace::GridView::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::GridView*>());
}
// Ctor Parameters []
constexpr ::GlobalNamespace::GridView::GridView() {}
