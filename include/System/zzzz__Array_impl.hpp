#pragma once
// IWYU pragma private; include "System/Array.hpp"
#include "System/zzzz__IntPtr_impl.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "System/zzzz__Array_def.hpp"
#include "System/Collections/Generic/zzzz__IComparer_1_def.hpp"
#include "System/Collections/Generic/zzzz__IEnumerator_1_def.hpp"
#include "System/Collections/ObjectModel/zzzz__ReadOnlyCollection_1_def.hpp"
#include "System/Collections/zzzz__ICollection_def.hpp"
#include "System/Collections/zzzz__IComparer_def.hpp"
#include "System/Collections/zzzz__IEnumerable_def.hpp"
#include "System/Collections/zzzz__IEnumerator_def.hpp"
#include "System/Collections/zzzz__IEqualityComparer_def.hpp"
#include "System/Collections/zzzz__IList_def.hpp"
#include "System/Collections/zzzz__IStructuralComparable_def.hpp"
#include "System/Collections/zzzz__IStructuralEquatable_def.hpp"
#include "System/zzzz__Action_1_def.hpp"
#include "System/zzzz__ArrayTypeMismatchException_def.hpp"
#include "System/zzzz__Array_def.hpp"
#include "System/zzzz__Comparison_1_def.hpp"
#include "System/zzzz__Converter_2_def.hpp"
#include "System/zzzz__ICloneable_def.hpp"
#include "System/zzzz__IDisposable_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "System/zzzz__Predicate_1_def.hpp"
#include "System/zzzz__Type_def.hpp"
//  Writing Method size for method: ::System::Array_ArrayEnumerator._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Array_ArrayEnumerator::*)(::System::Array*)>(&::System::Array_ArrayEnumerator::_ctor)> {
  constexpr static std::size_t size = 0x34;
  constexpr static std::size_t addrs = 0x5c6c4a4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Array_ArrayEnumerator*>(), { ".ctor", {}, { ::i2c::type_of<::System::Array*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Array_ArrayEnumerator.MoveNext
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::System::Array_ArrayEnumerator::*)()>(&::System::Array_ArrayEnumerator::MoveNext)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x5c6c4d8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Array_ArrayEnumerator*>(), { "MoveNext", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Array_ArrayEnumerator.Reset
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Array_ArrayEnumerator::*)()>(&::System::Array_ArrayEnumerator::Reset)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x5c6c500;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Array_ArrayEnumerator*>(), { "Reset", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Array_ArrayEnumerator.Clone
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Object* (::System::Array_ArrayEnumerator::*)()>(&::System::Array_ArrayEnumerator::Clone)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x5c6c50c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Array_ArrayEnumerator*>(), { "Clone", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Array_ArrayEnumerator.get_Current
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Object* (::System::Array_ArrayEnumerator::*)()>(&::System::Array_ArrayEnumerator::get_Current)> {
  constexpr static std::size_t size = 0x140;
  constexpr static std::size_t addrs = 0x5c6c510;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Array_ArrayEnumerator*>(), { "get_Current", {}, {} })));
    return ___internal_method;
  }
};
constexpr ::System::Array*& System::Array_ArrayEnumerator::__cordl_internal_get__array() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____array;
}
constexpr ::System::Array* const& System::Array_ArrayEnumerator::__cordl_internal_get__array() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____array;
}
constexpr void System::Array_ArrayEnumerator::__cordl_internal_set__array(::System::Array* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____array = value;
}
constexpr int32_t& System::Array_ArrayEnumerator::__cordl_internal_get__index() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____index;
}
constexpr int32_t const& System::Array_ArrayEnumerator::__cordl_internal_get__index() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____index;
}
constexpr void System::Array_ArrayEnumerator::__cordl_internal_set__index(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____index = value;
}
constexpr int32_t& System::Array_ArrayEnumerator::__cordl_internal_get__endIndex() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____endIndex;
}
constexpr int32_t const& System::Array_ArrayEnumerator::__cordl_internal_get__endIndex() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____endIndex;
}
constexpr void System::Array_ArrayEnumerator::__cordl_internal_set__endIndex(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____endIndex = value;
}
inline void System::Array_ArrayEnumerator::_ctor(::System::Array* array) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Array_ArrayEnumerator*>(), { ".ctor", {}, { ::i2c::type_of<::System::Array*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, array);
}
inline bool System::Array_ArrayEnumerator::MoveNext() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Array_ArrayEnumerator*>(), { "MoveNext", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void System::Array_ArrayEnumerator::Reset() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Array_ArrayEnumerator*>(), { "Reset", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::System::Object* System::Array_ArrayEnumerator::Clone() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Array_ArrayEnumerator*>(), { "Clone", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::System::Object*>(this, ___internal_method);
}
inline ::System::Object* System::Array_ArrayEnumerator::get_Current() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Array_ArrayEnumerator*>(), { "get_Current", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::System::Object*>(this, ___internal_method);
}
inline ::System::Array_ArrayEnumerator* System::Array_ArrayEnumerator::New_ctor(::System::Array* array) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::System::Array_ArrayEnumerator*>(array));
}
/// @brief Convert operator to "::System::Collections::IEnumerator"
constexpr System::Array_ArrayEnumerator::operator ::System::Collections::IEnumerator*() noexcept {
  return static_cast<::System::Collections::IEnumerator*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::Collections::IEnumerator"
constexpr ::System::Collections::IEnumerator* System::Array_ArrayEnumerator::i___System__Collections__IEnumerator() noexcept {
  return static_cast<::System::Collections::IEnumerator*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::System::ICloneable"
constexpr System::Array_ArrayEnumerator::operator ::System::ICloneable*() noexcept {
  return static_cast<::System::ICloneable*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::ICloneable"
constexpr ::System::ICloneable* System::Array_ArrayEnumerator::i___System__ICloneable() noexcept {
  return static_cast<::System::ICloneable*>(static_cast<void*>(this));
}
// Ctor Parameters []
constexpr ::System::Array_ArrayEnumerator::Array_ArrayEnumerator() {}
constexpr ::System::IntPtr& System::Array_RawData::__cordl_internal_get_Bounds() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___Bounds;
}
constexpr ::System::IntPtr const& System::Array_RawData::__cordl_internal_get_Bounds() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___Bounds;
}
constexpr void System::Array_RawData::__cordl_internal_set_Bounds(::System::IntPtr value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___Bounds = value;
}
constexpr ::System::IntPtr& System::Array_RawData::__cordl_internal_get_Count() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___Count;
}
constexpr ::System::IntPtr const& System::Array_RawData::__cordl_internal_get_Count() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___Count;
}
constexpr void System::Array_RawData::__cordl_internal_set_Count(::System::IntPtr value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___Count = value;
}
constexpr uint8_t& System::Array_RawData::__cordl_internal_get_Data() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___Data;
}
constexpr uint8_t const& System::Array_RawData::__cordl_internal_get_Data() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___Data;
}
constexpr void System::Array_RawData::__cordl_internal_set_Data(uint8_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___Data = value;
}
// Ctor Parameters []
constexpr ::System::Array_RawData::Array_RawData() {}
template <typename T> inline void System::Array_InternalEnumerator_1<T>::_ctor(::System::Array* array) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Array_InternalEnumerator_1<T>>(), { ".ctor", {}, { ::i2c::type_of<::System::Array*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, array);
}
template <typename T> inline void System::Array_InternalEnumerator_1<T>::Dispose() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Array_InternalEnumerator_1<T>>(), { "Dispose", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method);
}
template <typename T> inline bool System::Array_InternalEnumerator_1<T>::MoveNext() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Array_InternalEnumerator_1<T>>(), { "MoveNext", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<bool>(*this, ___internal_method);
}
template <typename T> inline T System::Array_InternalEnumerator_1<T>::get_Current() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Array_InternalEnumerator_1<T>>(), { "get_Current", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<T>(*this, ___internal_method);
}
template <typename T> inline void System::Array_InternalEnumerator_1<T>::System_Collections_IEnumerator_Reset() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Array_InternalEnumerator_1<T>>(), { "System.Collections.IEnumerator.Reset", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method);
}
template <typename T> inline ::System::Object* System::Array_InternalEnumerator_1<T>::System_Collections_IEnumerator_get_Current() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Array_InternalEnumerator_1<T>>(), { "System.Collections.IEnumerator.get_Current", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::System::Object*>(*this, ___internal_method);
}
/// @brief Convert operator to "::System::Collections::Generic::IEnumerator_1<T>"
template <typename T> constexpr System::Array_InternalEnumerator_1<T>::operator ::System::Collections::Generic::IEnumerator_1<T>*() {
  return static_cast<::System::Collections::Generic::IEnumerator_1<T>*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
/// @brief Convert to "::System::Collections::Generic::IEnumerator_1<T>"
template <typename T> constexpr ::System::Collections::Generic::IEnumerator_1<T>* System::Array_InternalEnumerator_1<T>::i___System__Collections__Generic__IEnumerator_1_T_() {
  return static_cast<::System::Collections::Generic::IEnumerator_1<T>*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
/// @brief Convert operator to "::System::IDisposable"
template <typename T> constexpr System::Array_InternalEnumerator_1<T>::operator ::System::IDisposable*() {
  return static_cast<::System::IDisposable*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
/// @brief Convert to "::System::IDisposable"
template <typename T> constexpr ::System::IDisposable* System::Array_InternalEnumerator_1<T>::i___System__IDisposable() {
  return static_cast<::System::IDisposable*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
/// @brief Convert operator to "::System::Collections::IEnumerator"
template <typename T> constexpr System::Array_InternalEnumerator_1<T>::operator ::System::Collections::IEnumerator*() {
  return static_cast<::System::Collections::IEnumerator*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
/// @brief Convert to "::System::Collections::IEnumerator"
template <typename T> constexpr ::System::Collections::IEnumerator* System::Array_InternalEnumerator_1<T>::i___System__Collections__IEnumerator() {
  return static_cast<::System::Collections::IEnumerator*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
// Ctor Parameters [CppParam { name: "array", ty: "::System::Array*", modifiers: "", def_value: Some("{}") }, CppParam { name: "idx", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
template <typename T> constexpr ::System::Array_InternalEnumerator_1<T>::Array_InternalEnumerator_1(::System::Array* array, int32_t idx) noexcept {
  this->array = array;
  this->idx = idx;
}
// Ctor Parameters []
template <typename T> constexpr ::System::Array_InternalEnumerator_1<T>::Array_InternalEnumerator_1() {}
template <typename T> inline void System::Array_EmptyInternalEnumerator_1<T>::setStaticF_Value(::System::Array_EmptyInternalEnumerator_1<T>* value) {
  ::cordl_internals::setStaticField<::System::Array_EmptyInternalEnumerator_1<T>*, "Value", ::System::Array_EmptyInternalEnumerator_1<T>*>(
      std::forward<::System::Array_EmptyInternalEnumerator_1<T>*>(value));
}
template <typename T> inline ::System::Array_EmptyInternalEnumerator_1<T>* System::Array_EmptyInternalEnumerator_1<T>::getStaticF_Value() {
  return ::cordl_internals::getStaticField<::System::Array_EmptyInternalEnumerator_1<T>*, "Value", ::System::Array_EmptyInternalEnumerator_1<T>*>();
}
template <typename T> inline void System::Array_EmptyInternalEnumerator_1<T>::Dispose() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Array_EmptyInternalEnumerator_1<T>*>(), { "Dispose", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
template <typename T> inline bool System::Array_EmptyInternalEnumerator_1<T>::MoveNext() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Array_EmptyInternalEnumerator_1<T>*>(), { "MoveNext", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
template <typename T> inline T System::Array_EmptyInternalEnumerator_1<T>::get_Current() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Array_EmptyInternalEnumerator_1<T>*>(), { "get_Current", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<T>(this, ___internal_method);
}
template <typename T> inline ::System::Object* System::Array_EmptyInternalEnumerator_1<T>::System_Collections_IEnumerator_get_Current() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Array_EmptyInternalEnumerator_1<T>*>(), { "System.Collections.IEnumerator.get_Current", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::System::Object*>(this, ___internal_method);
}
template <typename T> inline void System::Array_EmptyInternalEnumerator_1<T>::System_Collections_IEnumerator_Reset() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Array_EmptyInternalEnumerator_1<T>*>(), { "System.Collections.IEnumerator.Reset", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
template <typename T> inline void System::Array_EmptyInternalEnumerator_1<T>::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Array_EmptyInternalEnumerator_1<T>*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
template <typename T> inline ::System::Array_EmptyInternalEnumerator_1<T>* System::Array_EmptyInternalEnumerator_1<T>::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::System::Array_EmptyInternalEnumerator_1<T>*>());
}
/// @brief Convert operator to "::System::Collections::Generic::IEnumerator_1<T>"
template <typename T> constexpr System::Array_EmptyInternalEnumerator_1<T>::operator ::System::Collections::Generic::IEnumerator_1<T>*() noexcept {
  return static_cast<::System::Collections::Generic::IEnumerator_1<T>*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::Collections::Generic::IEnumerator_1<T>"
template <typename T> constexpr ::System::Collections::Generic::IEnumerator_1<T>* System::Array_EmptyInternalEnumerator_1<T>::i___System__Collections__Generic__IEnumerator_1_T_() noexcept {
  return static_cast<::System::Collections::Generic::IEnumerator_1<T>*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::System::IDisposable"
template <typename T> constexpr System::Array_EmptyInternalEnumerator_1<T>::operator ::System::IDisposable*() noexcept {
  return static_cast<::System::IDisposable*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::IDisposable"
template <typename T> constexpr ::System::IDisposable* System::Array_EmptyInternalEnumerator_1<T>::i___System__IDisposable() noexcept {
  return static_cast<::System::IDisposable*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::System::Collections::IEnumerator"
template <typename T> constexpr System::Array_EmptyInternalEnumerator_1<T>::operator ::System::Collections::IEnumerator*() noexcept {
  return static_cast<::System::Collections::IEnumerator*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::Collections::IEnumerator"
template <typename T> constexpr ::System::Collections::IEnumerator* System::Array_EmptyInternalEnumerator_1<T>::i___System__Collections__IEnumerator() noexcept {
  return static_cast<::System::Collections::IEnumerator*>(static_cast<void*>(this));
}
// Ctor Parameters []
template <typename T> constexpr ::System::Array_EmptyInternalEnumerator_1<T>::Array_EmptyInternalEnumerator_1() {}
//  Writing Method size for method: ::System::Array_SorterObjectArray._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Array_SorterObjectArray::*)(::ArrayW<::System::Object*>, ::ArrayW<::System::Object*>, ::System::Collections::IComparer*)>(
    &::System::Array_SorterObjectArray::_ctor)> {
  constexpr static std::size_t size = 0x88;
  constexpr static std::size_t addrs = 0x5c6c650;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(::i2c::class_of<::System::Array_SorterObjectArray>(),
                            { ".ctor", {}, { ::i2c::type_of<::ArrayW<::System::Object*>>(), ::i2c::type_of<::ArrayW<::System::Object*>>(), ::i2c::type_of<::System::Collections::IComparer*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Array_SorterObjectArray.SwapIfGreaterWithItems
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Array_SorterObjectArray::*)(int32_t, int32_t)>(&::System::Array_SorterObjectArray::SwapIfGreaterWithItems)> {
  constexpr static std::size_t size = 0x234;
  constexpr static std::size_t addrs = 0x5c6c6d8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Array_SorterObjectArray>(), { "SwapIfGreaterWithItems", {}, { ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Array_SorterObjectArray.Swap
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Array_SorterObjectArray::*)(int32_t, int32_t)>(&::System::Array_SorterObjectArray::Swap)> {
  constexpr static std::size_t size = 0x164;
  constexpr static std::size_t addrs = 0x5c6c90c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Array_SorterObjectArray>(), { "Swap", {}, { ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Array_SorterObjectArray.Sort
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Array_SorterObjectArray::*)(int32_t, int32_t)>(&::System::Array_SorterObjectArray::Sort)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x5c6ca70;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Array_SorterObjectArray>(), { "Sort", {}, { ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Array_SorterObjectArray.IntrospectiveSort
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Array_SorterObjectArray::*)(int32_t, int32_t)>(&::System::Array_SorterObjectArray::IntrospectiveSort)> {
  constexpr static std::size_t size = 0x15c;
  constexpr static std::size_t addrs = 0x5c6ca74;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Array_SorterObjectArray>(), { "IntrospectiveSort", {}, { ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Array_SorterObjectArray.IntroSort
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Array_SorterObjectArray::*)(int32_t, int32_t, int32_t)>(&::System::Array_SorterObjectArray::IntroSort)> {
  constexpr static std::size_t size = 0x118;
  constexpr static std::size_t addrs = 0x5c6cbd0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Array_SorterObjectArray>(),
                                                                                           { "IntroSort", {}, { ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Array_SorterObjectArray.PickPivotAndPartition
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::System::Array_SorterObjectArray::*)(int32_t, int32_t)>(&::System::Array_SorterObjectArray::PickPivotAndPartition)> {
  constexpr static std::size_t size = 0x230;
  constexpr static std::size_t addrs = 0x5c6d020;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Array_SorterObjectArray>(), { "PickPivotAndPartition", {}, { ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Array_SorterObjectArray.Heapsort
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Array_SorterObjectArray::*)(int32_t, int32_t)>(&::System::Array_SorterObjectArray::Heapsort)> {
  constexpr static std::size_t size = 0x94;
  constexpr static std::size_t addrs = 0x5c6cf8c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Array_SorterObjectArray>(), { "Heapsort", {}, { ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Array_SorterObjectArray.DownHeap
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Array_SorterObjectArray::*)(int32_t, int32_t, int32_t)>(&::System::Array_SorterObjectArray::DownHeap)> {
  constexpr static std::size_t size = 0x35c;
  constexpr static std::size_t addrs = 0x5c6d250;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Array_SorterObjectArray>(),
                                                                                           { "DownHeap", {}, { ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Array_SorterObjectArray.InsertionSort
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Array_SorterObjectArray::*)(int32_t, int32_t)>(&::System::Array_SorterObjectArray::InsertionSort)> {
  constexpr static std::size_t size = 0x2a4;
  constexpr static std::size_t addrs = 0x5c6cce8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Array_SorterObjectArray>(), { "InsertionSort", {}, { ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
inline void System::Array_SorterObjectArray::_ctor(::ArrayW<::System::Object*> keys, ::ArrayW<::System::Object*> items, ::System::Collections::IComparer* comparer) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::System::Array_SorterObjectArray>(),
                          { ".ctor", {}, { ::i2c::type_of<::ArrayW<::System::Object*>>(), ::i2c::type_of<::ArrayW<::System::Object*>>(), ::i2c::type_of<::System::Collections::IComparer*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, keys, items, comparer);
}
inline void System::Array_SorterObjectArray::SwapIfGreaterWithItems(int32_t a, int32_t b) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Array_SorterObjectArray>(), { "SwapIfGreaterWithItems", {}, { ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, a, b);
}
inline void System::Array_SorterObjectArray::Swap(int32_t i, int32_t j) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Array_SorterObjectArray>(), { "Swap", {}, { ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, i, j);
}
inline void System::Array_SorterObjectArray::Sort(int32_t left, int32_t length) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Array_SorterObjectArray>(), { "Sort", {}, { ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, left, length);
}
inline void System::Array_SorterObjectArray::IntrospectiveSort(int32_t left, int32_t length) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Array_SorterObjectArray>(), { "IntrospectiveSort", {}, { ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, left, length);
}
inline void System::Array_SorterObjectArray::IntroSort(int32_t lo, int32_t hi, int32_t depthLimit) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Array_SorterObjectArray>(),
                                                                                         { "IntroSort", {}, { ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, lo, hi, depthLimit);
}
inline int32_t System::Array_SorterObjectArray::PickPivotAndPartition(int32_t lo, int32_t hi) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Array_SorterObjectArray>(), { "PickPivotAndPartition", {}, { ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(*this, ___internal_method, lo, hi);
}
inline void System::Array_SorterObjectArray::Heapsort(int32_t lo, int32_t hi) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Array_SorterObjectArray>(), { "Heapsort", {}, { ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, lo, hi);
}
inline void System::Array_SorterObjectArray::DownHeap(int32_t i, int32_t n, int32_t lo) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::System::Array_SorterObjectArray>(), { "DownHeap", {}, { ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, i, n, lo);
}
inline void System::Array_SorterObjectArray::InsertionSort(int32_t lo, int32_t hi) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Array_SorterObjectArray>(), { "InsertionSort", {}, { ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, lo, hi);
}
// Ctor Parameters [CppParam { name: "keys", ty: "::ArrayW<::System::Object*>", modifiers: "", def_value: Some("{}") }, CppParam { name: "items", ty: "::ArrayW<::System::Object*>", modifiers: "",
// def_value: Some("{}") }, CppParam { name: "comparer", ty: "::System::Collections::IComparer*", modifiers: "", def_value: Some("{}") }]
constexpr ::System::Array_SorterObjectArray::Array_SorterObjectArray(::ArrayW<::System::Object*> keys, ::ArrayW<::System::Object*> items, ::System::Collections::IComparer* comparer) noexcept {
  this->keys = keys;
  this->items = items;
  this->comparer = comparer;
}
// Ctor Parameters []
constexpr ::System::Array_SorterObjectArray::Array_SorterObjectArray() {}
//  Writing Method size for method: ::System::Array_SorterGenericArray._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Array_SorterGenericArray::*)(::System::Array*, ::System::Array*, ::System::Collections::IComparer*)>(
    &::System::Array_SorterGenericArray::_ctor)> {
  constexpr static std::size_t size = 0x88;
  constexpr static std::size_t addrs = 0x5c6d5ac;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Array_SorterGenericArray>(),
                                                { ".ctor", {}, { ::i2c::type_of<::System::Array*>(), ::i2c::type_of<::System::Array*>(), ::i2c::type_of<::System::Collections::IComparer*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Array_SorterGenericArray.SwapIfGreaterWithItems
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Array_SorterGenericArray::*)(int32_t, int32_t)>(&::System::Array_SorterGenericArray::SwapIfGreaterWithItems)> {
  constexpr static std::size_t size = 0x1d4;
  constexpr static std::size_t addrs = 0x5c6d634;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Array_SorterGenericArray>(), { "SwapIfGreaterWithItems", {}, { ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Array_SorterGenericArray.Swap
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Array_SorterGenericArray::*)(int32_t, int32_t)>(&::System::Array_SorterGenericArray::Swap)> {
  constexpr static std::size_t size = 0xec;
  constexpr static std::size_t addrs = 0x5c6d808;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Array_SorterGenericArray>(), { "Swap", {}, { ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Array_SorterGenericArray.Sort
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Array_SorterGenericArray::*)(int32_t, int32_t)>(&::System::Array_SorterGenericArray::Sort)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x5c6d8f4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Array_SorterGenericArray>(), { "Sort", {}, { ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Array_SorterGenericArray.IntrospectiveSort
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Array_SorterGenericArray::*)(int32_t, int32_t)>(&::System::Array_SorterGenericArray::IntrospectiveSort)> {
  constexpr static std::size_t size = 0x170;
  constexpr static std::size_t addrs = 0x5c6d8f8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Array_SorterGenericArray>(), { "IntrospectiveSort", {}, { ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Array_SorterGenericArray.IntroSort
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Array_SorterGenericArray::*)(int32_t, int32_t, int32_t)>(&::System::Array_SorterGenericArray::IntroSort)> {
  constexpr static std::size_t size = 0x118;
  constexpr static std::size_t addrs = 0x5c6da68;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Array_SorterGenericArray>(),
                                                                                           { "IntroSort", {}, { ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Array_SorterGenericArray.PickPivotAndPartition
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::System::Array_SorterGenericArray::*)(int32_t, int32_t)>(&::System::Array_SorterGenericArray::PickPivotAndPartition)> {
  constexpr static std::size_t size = 0x220;
  constexpr static std::size_t addrs = 0x5c6ddf8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Array_SorterGenericArray>(), { "PickPivotAndPartition", {}, { ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Array_SorterGenericArray.Heapsort
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Array_SorterGenericArray::*)(int32_t, int32_t)>(&::System::Array_SorterGenericArray::Heapsort)> {
  constexpr static std::size_t size = 0x94;
  constexpr static std::size_t addrs = 0x5c6dd64;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Array_SorterGenericArray>(), { "Heapsort", {}, { ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Array_SorterGenericArray.DownHeap
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Array_SorterGenericArray::*)(int32_t, int32_t, int32_t)>(&::System::Array_SorterGenericArray::DownHeap)> {
  constexpr static std::size_t size = 0x2c4;
  constexpr static std::size_t addrs = 0x5c6e018;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Array_SorterGenericArray>(),
                                                                                           { "DownHeap", {}, { ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Array_SorterGenericArray.InsertionSort
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Array_SorterGenericArray::*)(int32_t, int32_t)>(&::System::Array_SorterGenericArray::InsertionSort)> {
  constexpr static std::size_t size = 0x1e4;
  constexpr static std::size_t addrs = 0x5c6db80;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Array_SorterGenericArray>(), { "InsertionSort", {}, { ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
inline void System::Array_SorterGenericArray::_ctor(::System::Array* keys, ::System::Array* items, ::System::Collections::IComparer* comparer) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Array_SorterGenericArray>(),
                                              { ".ctor", {}, { ::i2c::type_of<::System::Array*>(), ::i2c::type_of<::System::Array*>(), ::i2c::type_of<::System::Collections::IComparer*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, keys, items, comparer);
}
inline void System::Array_SorterGenericArray::SwapIfGreaterWithItems(int32_t a, int32_t b) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Array_SorterGenericArray>(), { "SwapIfGreaterWithItems", {}, { ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, a, b);
}
inline void System::Array_SorterGenericArray::Swap(int32_t i, int32_t j) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Array_SorterGenericArray>(), { "Swap", {}, { ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, i, j);
}
inline void System::Array_SorterGenericArray::Sort(int32_t left, int32_t length) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Array_SorterGenericArray>(), { "Sort", {}, { ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, left, length);
}
inline void System::Array_SorterGenericArray::IntrospectiveSort(int32_t left, int32_t length) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Array_SorterGenericArray>(), { "IntrospectiveSort", {}, { ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, left, length);
}
inline void System::Array_SorterGenericArray::IntroSort(int32_t lo, int32_t hi, int32_t depthLimit) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Array_SorterGenericArray>(),
                                                                                         { "IntroSort", {}, { ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, lo, hi, depthLimit);
}
inline int32_t System::Array_SorterGenericArray::PickPivotAndPartition(int32_t lo, int32_t hi) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Array_SorterGenericArray>(), { "PickPivotAndPartition", {}, { ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(*this, ___internal_method, lo, hi);
}
inline void System::Array_SorterGenericArray::Heapsort(int32_t lo, int32_t hi) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Array_SorterGenericArray>(), { "Heapsort", {}, { ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, lo, hi);
}
inline void System::Array_SorterGenericArray::DownHeap(int32_t i, int32_t n, int32_t lo) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Array_SorterGenericArray>(),
                                                                                         { "DownHeap", {}, { ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, i, n, lo);
}
inline void System::Array_SorterGenericArray::InsertionSort(int32_t lo, int32_t hi) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Array_SorterGenericArray>(), { "InsertionSort", {}, { ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, lo, hi);
}
// Ctor Parameters [CppParam { name: "keys", ty: "::System::Array*", modifiers: "", def_value: Some("{}") }, CppParam { name: "items", ty: "::System::Array*", modifiers: "", def_value: Some("{}") },
// CppParam { name: "comparer", ty: "::System::Collections::IComparer*", modifiers: "", def_value: Some("{}") }]
constexpr ::System::Array_SorterGenericArray::Array_SorterGenericArray(::System::Array* keys, ::System::Array* items, ::System::Collections::IComparer* comparer) noexcept {
  this->keys = keys;
  this->items = items;
  this->comparer = comparer;
}
// Ctor Parameters []
constexpr ::System::Array_SorterGenericArray::Array_SorterGenericArray() {}
//  Writing Method size for method: ::System::Array.CreateInstance
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Array* (*)(::System::Type*, ::ArrayW<int64_t>)>(&::System::Array::CreateInstance)> {
  constexpr static std::size_t size = 0x184;
  constexpr static std::size_t addrs = 0x5c68738;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Array*>(), { "CreateInstance", {}, { ::i2c::type_of<::System::Type*>(), ::i2c::type_of<::ArrayW<int64_t>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Array.System_Collections_ICollection_get_Count
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::System::Array::*)()>(&::System::Array::System_Collections_ICollection_get_Count)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x5c68b1c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Array*>(), { "System.Collections.ICollection.get_Count", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Array.System_Collections_IList_get_IsReadOnly
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::System::Array::*)()>(&::System::Array::System_Collections_IList_get_IsReadOnly)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5c68b20;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Array*>(), { "System.Collections.IList.get_IsReadOnly", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Array.System_Collections_IList_get_Item
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Object* (::System::Array::*)(int32_t)>(&::System::Array::System_Collections_IList_get_Item)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x5c68b28;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Array*>(), { "System.Collections.IList.get_Item", {}, { ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Array.System_Collections_IList_set_Item
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Array::*)(int32_t, ::System::Object*)>(&::System::Array::System_Collections_IList_set_Item)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x5c68b2c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Array*>(), { "System.Collections.IList.set_Item", {}, { ::i2c::type_of<int32_t>(), ::i2c::type_of<::System::Object*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Array.System_Collections_IList_Add
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::System::Array::*)(::System::Object*)>(&::System::Array::System_Collections_IList_Add)> {
  constexpr static std::size_t size = 0x4c;
  constexpr static std::size_t addrs = 0x5c68ca8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Array*>(), { "System.Collections.IList.Add", {}, { ::i2c::type_of<::System::Object*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Array.System_Collections_IList_Contains
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::System::Array::*)(::System::Object*)>(&::System::Array::System_Collections_IList_Contains)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0x5c68cf4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Array*>(), { "System.Collections.IList.Contains", {}, { ::i2c::type_of<::System::Object*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Array.System_Collections_IList_Clear
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Array::*)()>(&::System::Array::System_Collections_IList_Clear)> {
  constexpr static std::size_t size = 0x38;
  constexpr static std::size_t addrs = 0x5c68d98;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Array*>(), { "System.Collections.IList.Clear", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Array.System_Collections_IList_IndexOf
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::System::Array::*)(::System::Object*)>(&::System::Array::System_Collections_IList_IndexOf)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x5c68ef8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Array*>(), { "System.Collections.IList.IndexOf", {}, { ::i2c::type_of<::System::Object*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Array.System_Collections_IList_Insert
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Array::*)(int32_t, ::System::Object*)>(&::System::Array::System_Collections_IList_Insert)> {
  constexpr static std::size_t size = 0x4c;
  constexpr static std::size_t addrs = 0x5c68efc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Array*>(), { "System.Collections.IList.Insert", {}, { ::i2c::type_of<int32_t>(), ::i2c::type_of<::System::Object*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Array.System_Collections_IList_Remove
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Array::*)(::System::Object*)>(&::System::Array::System_Collections_IList_Remove)> {
  constexpr static std::size_t size = 0x4c;
  constexpr static std::size_t addrs = 0x5c68f48;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Array*>(), { "System.Collections.IList.Remove", {}, { ::i2c::type_of<::System::Object*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Array.System_Collections_IList_RemoveAt
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Array::*)(int32_t)>(&::System::Array::System_Collections_IList_RemoveAt)> {
  constexpr static std::size_t size = 0x4c;
  constexpr static std::size_t addrs = 0x5c68f94;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Array*>(), { "System.Collections.IList.RemoveAt", {}, { ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Array.CopyTo
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Array::*)(::System::Array*, int32_t)>(&::System::Array::CopyTo)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0x5c68fe0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Array*>(), { "CopyTo", {}, { ::i2c::type_of<::System::Array*>(), ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Array.Clone
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Object* (::System::Array::*)()>(&::System::Array::Clone)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x5c695fc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Array*>(), { "Clone", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Array.System_Collections_IStructuralComparable_CompareTo
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::System::Array::*)(::System::Object*, ::System::Collections::IComparer*)>(
    &::System::Array::System_Collections_IStructuralComparable_CompareTo)> {
  constexpr static std::size_t size = 0x1d4;
  constexpr static std::size_t addrs = 0x5c69600;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::System::Array*>(),
                                         { "System.Collections.IStructuralComparable.CompareTo", {}, { ::i2c::type_of<::System::Object*>(), ::i2c::type_of<::System::Collections::IComparer*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Array.System_Collections_IStructuralEquatable_Equals
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::System::Array::*)(::System::Object*, ::System::Collections::IEqualityComparer*)>(
    &::System::Array::System_Collections_IStructuralEquatable_Equals)> {
  constexpr static std::size_t size = 0x17c;
  constexpr static std::size_t addrs = 0x5c697d4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(::i2c::class_of<::System::Array*>(),
                            { "System.Collections.IStructuralEquatable.Equals", {}, { ::i2c::type_of<::System::Object*>(), ::i2c::type_of<::System::Collections::IEqualityComparer*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Array.CombineHashCodes
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (*)(int32_t, int32_t)>(&::System::Array::CombineHashCodes)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x5c69950;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Array*>(), { "CombineHashCodes", {}, { ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Array.System_Collections_IStructuralEquatable_GetHashCode
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::System::Array::*)(::System::Collections::IEqualityComparer*)>(
    &::System::Array::System_Collections_IStructuralEquatable_GetHashCode)> {
  constexpr static std::size_t size = 0x174;
  constexpr static std::size_t addrs = 0x5c6995c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(::i2c::class_of<::System::Array*>(), { "System.Collections.IStructuralEquatable.GetHashCode", {}, { ::i2c::type_of<::System::Collections::IEqualityComparer*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Array.BinarySearch
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (*)(::System::Array*, ::System::Object*)>(&::System::Array::BinarySearch)> {
  constexpr static std::size_t size = 0x90;
  constexpr static std::size_t addrs = 0x5c69ad0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Array*>(), { "BinarySearch", {}, { ::i2c::type_of<::System::Array*>(), ::i2c::type_of<::System::Object*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Array.Copy
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::System::Array*, ::System::Array*, int64_t)>(&::System::Array::Copy)> {
  constexpr static std::size_t size = 0x70;
  constexpr static std::size_t addrs = 0x5c6a004;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::System::Array*>(), { "Copy", {}, { ::i2c::type_of<::System::Array*>(), ::i2c::type_of<::System::Array*>(), ::i2c::type_of<int64_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Array.Copy
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::System::Array*, int64_t, ::System::Array*, int64_t, int64_t)>(&::System::Array::Copy)> {
  constexpr static std::size_t size = 0xc8;
  constexpr static std::size_t addrs = 0x5c6a138;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(
                         ::i2c::class_of<::System::Array*>(),
                         { "Copy", {}, { ::i2c::type_of<::System::Array*>(), ::i2c::type_of<int64_t>(), ::i2c::type_of<::System::Array*>(), ::i2c::type_of<int64_t>(), ::i2c::type_of<int64_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Array.CopyTo
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Array::*)(::System::Array*, int64_t)>(&::System::Array::CopyTo)> {
  constexpr static std::size_t size = 0x70;
  constexpr static std::size_t addrs = 0x5c6a200;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Array*>(), { "CopyTo", {}, { ::i2c::type_of<::System::Array*>(), ::i2c::type_of<int64_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Array.get_LongLength
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int64_t (::System::Array::*)()>(&::System::Array::get_LongLength)> {
  constexpr static std::size_t size = 0x64;
  constexpr static std::size_t addrs = 0x5c6a270;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Array*>(), { "get_LongLength", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Array.GetLongLength
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int64_t (::System::Array::*)(int32_t)>(&::System::Array::GetLongLength)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x5c6a2d8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Array*>(), { "GetLongLength", {}, { ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Array.GetValue
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Object* (::System::Array::*)(int64_t)>(&::System::Array::GetValue)> {
  constexpr static std::size_t size = 0x70;
  constexpr static std::size_t addrs = 0x5c6a2ec;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Array*>(), { "GetValue", {}, { ::i2c::type_of<int64_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Array.GetValue
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Object* (::System::Array::*)(int64_t, int64_t)>(&::System::Array::GetValue)> {
  constexpr static std::size_t size = 0xa0;
  constexpr static std::size_t addrs = 0x5c6a35c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Array*>(), { "GetValue", {}, { ::i2c::type_of<int64_t>(), ::i2c::type_of<int64_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Array.GetValue
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Object* (::System::Array::*)(int64_t, int64_t, int64_t)>(&::System::Array::GetValue)> {
  constexpr static std::size_t size = 0xc8;
  constexpr static std::size_t addrs = 0x5c6a488;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Array*>(), { "GetValue", {}, { ::i2c::type_of<int64_t>(), ::i2c::type_of<int64_t>(), ::i2c::type_of<int64_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Array.GetValue
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Object* (::System::Array::*)(::ArrayW<int64_t>)>(&::System::Array::GetValue)> {
  constexpr static std::size_t size = 0x18c;
  constexpr static std::size_t addrs = 0x5c6a5f4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Array*>(), { "GetValue", {}, { ::i2c::type_of<::ArrayW<int64_t>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Array.get_IsFixedSize
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::System::Array::*)()>(&::System::Array::get_IsFixedSize)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5c6a784;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Array*>(), { "get_IsFixedSize", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Array.get_IsReadOnly
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::System::Array::*)()>(&::System::Array::get_IsReadOnly)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5c6a78c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Array*>(), { "get_IsReadOnly", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Array.get_IsSynchronized
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::System::Array::*)()>(&::System::Array::get_IsSynchronized)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5c6a794;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Array*>(), { "get_IsSynchronized", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Array.get_SyncRoot
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Object* (::System::Array::*)()>(&::System::Array::get_SyncRoot)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x5c6a79c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Array*>(), { "get_SyncRoot", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Array.BinarySearch
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (*)(::System::Array*, int32_t, int32_t, ::System::Object*)>(&::System::Array::BinarySearch)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5c6a7a0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::System::Array*>(),
                                         { "BinarySearch", {}, { ::i2c::type_of<::System::Array*>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::System::Object*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Array.BinarySearch
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (*)(::System::Array*, ::System::Object*, ::System::Collections::IComparer*)>(&::System::Array::BinarySearch)> {
  constexpr static std::size_t size = 0x9c;
  constexpr static std::size_t addrs = 0x5c6a7a8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::System::Array*>(),
                                         { "BinarySearch", {}, { ::i2c::type_of<::System::Array*>(), ::i2c::type_of<::System::Object*>(), ::i2c::type_of<::System::Collections::IComparer*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Array.BinarySearch
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (*)(::System::Array*, int32_t, int32_t, ::System::Object*, ::System::Collections::IComparer*)>(&::System::Array::BinarySearch)> {
  constexpr static std::size_t size = 0x4a4;
  constexpr static std::size_t addrs = 0x5c69b60;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Array*>(), { "BinarySearch",
                                                                                                    {},
                                                                                                    { ::i2c::type_of<::System::Array*>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(),
                                                                                                      ::i2c::type_of<::System::Object*>(), ::i2c::type_of<::System::Collections::IComparer*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Array.GetMedian
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (*)(int32_t, int32_t)>(&::System::Array::GetMedian)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x5c6a844;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Array*>(), { "GetMedian", {}, { ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Array.IndexOf
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (*)(::System::Array*, ::System::Object*)>(&::System::Array::IndexOf)> {
  constexpr static std::size_t size = 0x8c;
  constexpr static std::size_t addrs = 0x5c68d0c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Array*>(), { "IndexOf", {}, { ::i2c::type_of<::System::Array*>(), ::i2c::type_of<::System::Object*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Array.IndexOf
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (*)(::System::Array*, ::System::Object*, int32_t)>(&::System::Array::IndexOf)> {
  constexpr static std::size_t size = 0x9c;
  constexpr static std::size_t addrs = 0x5c6aafc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(::i2c::class_of<::System::Array*>(), { "IndexOf", {}, { ::i2c::type_of<::System::Array*>(), ::i2c::type_of<::System::Object*>(), ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Array.IndexOf
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (*)(::System::Array*, ::System::Object*, int32_t, int32_t)>(&::System::Array::IndexOf)> {
  constexpr static std::size_t size = 0x2ac;
  constexpr static std::size_t addrs = 0x5c6a850;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Array*>(),
                                                { "IndexOf", {}, { ::i2c::type_of<::System::Array*>(), ::i2c::type_of<::System::Object*>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Array.LastIndexOf
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (*)(::System::Array*, ::System::Object*)>(&::System::Array::LastIndexOf)> {
  constexpr static std::size_t size = 0x88;
  constexpr static std::size_t addrs = 0x5c6ab98;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Array*>(), { "LastIndexOf", {}, { ::i2c::type_of<::System::Array*>(), ::i2c::type_of<::System::Object*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Array.LastIndexOf
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (*)(::System::Array*, ::System::Object*, int32_t)>(&::System::Array::LastIndexOf)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0x5c6aec8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(::i2c::class_of<::System::Array*>(), { "LastIndexOf", {}, { ::i2c::type_of<::System::Array*>(), ::i2c::type_of<::System::Object*>(), ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Array.LastIndexOf
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (*)(::System::Array*, ::System::Object*, int32_t, int32_t)>(&::System::Array::LastIndexOf)> {
  constexpr static std::size_t size = 0x2a8;
  constexpr static std::size_t addrs = 0x5c6ac20;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::System::Array*>(),
                                         { "LastIndexOf", {}, { ::i2c::type_of<::System::Array*>(), ::i2c::type_of<::System::Object*>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Array.Reverse
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::System::Array*)>(&::System::Array::Reverse)> {
  constexpr static std::size_t size = 0x84;
  constexpr static std::size_t addrs = 0x5c6af20;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Array*>(), { "Reverse", {}, { ::i2c::type_of<::System::Array*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Array.Reverse
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::System::Array*, int32_t, int32_t)>(&::System::Array::Reverse)> {
  constexpr static std::size_t size = 0x24c;
  constexpr static std::size_t addrs = 0x5c6afa4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Array*>(), { "Reverse", {}, { ::i2c::type_of<::System::Array*>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Array.SetValue
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Array::*)(::System::Object*, int64_t)>(&::System::Array::SetValue)> {
  constexpr static std::size_t size = 0x70;
  constexpr static std::size_t addrs = 0x5c6b1f0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Array*>(), { "SetValue", {}, { ::i2c::type_of<::System::Object*>(), ::i2c::type_of<int64_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Array.SetValue
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Array::*)(::System::Object*, int64_t, int64_t)>(&::System::Array::SetValue)> {
  constexpr static std::size_t size = 0xa0;
  constexpr static std::size_t addrs = 0x5c6b260;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::System::Array*>(), { "SetValue", {}, { ::i2c::type_of<::System::Object*>(), ::i2c::type_of<int64_t>(), ::i2c::type_of<int64_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Array.SetValue
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Array::*)(::System::Object*, int64_t, int64_t, int64_t)>(&::System::Array::SetValue)> {
  constexpr static std::size_t size = 0xc8;
  constexpr static std::size_t addrs = 0x5c6b39c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Array*>(),
                                                { "SetValue", {}, { ::i2c::type_of<::System::Object*>(), ::i2c::type_of<int64_t>(), ::i2c::type_of<int64_t>(), ::i2c::type_of<int64_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Array.SetValue
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Array::*)(::System::Object*, ::ArrayW<int64_t>)>(&::System::Array::SetValue)> {
  constexpr static std::size_t size = 0x194;
  constexpr static std::size_t addrs = 0x5c6b510;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Array*>(), { "SetValue", {}, { ::i2c::type_of<::System::Object*>(), ::i2c::type_of<::ArrayW<int64_t>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Array.Sort
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::System::Array*)>(&::System::Array::Sort)> {
  constexpr static std::size_t size = 0x8c;
  constexpr static std::size_t addrs = 0x5c6b6a8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Array*>(), { "Sort", {}, { ::i2c::type_of<::System::Array*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Array.Sort
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::System::Array*, int32_t, int32_t)>(&::System::Array::Sort)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x5c6b970;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Array*>(), { "Sort", {}, { ::i2c::type_of<::System::Array*>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Array.Sort
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::System::Array*, ::System::Collections::IComparer*)>(&::System::Array::Sort)> {
  constexpr static std::size_t size = 0x90;
  constexpr static std::size_t addrs = 0x5c6b984;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Array*>(), { "Sort", {}, { ::i2c::type_of<::System::Array*>(), ::i2c::type_of<::System::Collections::IComparer*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Array.Sort
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::System::Array*, int32_t, int32_t, ::System::Collections::IComparer*)>(&::System::Array::Sort)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x5c6ba14;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(::i2c::class_of<::System::Array*>(),
                            { "Sort", {}, { ::i2c::type_of<::System::Array*>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::System::Collections::IComparer*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Array.Sort
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::System::Array*, ::System::Array*)>(&::System::Array::Sort)> {
  constexpr static std::size_t size = 0x90;
  constexpr static std::size_t addrs = 0x5c6ba28;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Array*>(), { "Sort", {}, { ::i2c::type_of<::System::Array*>(), ::i2c::type_of<::System::Array*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Array.Sort
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::System::Array*, ::System::Array*, ::System::Collections::IComparer*)>(&::System::Array::Sort)> {
  constexpr static std::size_t size = 0x9c;
  constexpr static std::size_t addrs = 0x5c6bab8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Array*>(),
                                                { "Sort", {}, { ::i2c::type_of<::System::Array*>(), ::i2c::type_of<::System::Array*>(), ::i2c::type_of<::System::Collections::IComparer*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Array.Sort
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::System::Array*, ::System::Array*, int32_t, int32_t)>(&::System::Array::Sort)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5c6bb54;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Array*>(),
                                                { "Sort", {}, { ::i2c::type_of<::System::Array*>(), ::i2c::type_of<::System::Array*>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Array.Sort
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::System::Array*, ::System::Array*, int32_t, int32_t, ::System::Collections::IComparer*)>(&::System::Array::Sort)> {
  constexpr static std::size_t size = 0x23c;
  constexpr static std::size_t addrs = 0x5c6b734;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Array*>(), { "Sort",
                                                                                                    {},
                                                                                                    { ::i2c::type_of<::System::Array*>(), ::i2c::type_of<::System::Array*>(), ::i2c::type_of<int32_t>(),
                                                                                                      ::i2c::type_of<int32_t>(), ::i2c::type_of<::System::Collections::IComparer*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Array.GetEnumerator
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Collections::IEnumerator* (::System::Array::*)()>(&::System::Array::GetEnumerator)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x5c6bc54;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Array*>(), { "GetEnumerator", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Array._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Array::*)()>(&::System::Array::_ctor)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x5c6bcb4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Array*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Array.InternalArray__ICollection_get_Count
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::System::Array::*)()>(&::System::Array::InternalArray__ICollection_get_Count)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x5c6bcb8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Array*>(), { "InternalArray__ICollection_get_Count", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Array.InternalArray__ICollection_get_IsReadOnly
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::System::Array::*)()>(&::System::Array::InternalArray__ICollection_get_IsReadOnly)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5c6bcbc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Array*>(), { "InternalArray__ICollection_get_IsReadOnly", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Array.GetRawSzArrayData
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::by_ref<uint8_t> (::System::Array::*)()>(&::System::Array::GetRawSzArrayData)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x5c6bcc4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Array*>(), { "GetRawSzArrayData", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Array.InternalArray__ICollection_Clear
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Array::*)()>(&::System::Array::InternalArray__ICollection_Clear)> {
  constexpr static std::size_t size = 0x4c;
  constexpr static std::size_t addrs = 0x5c6bcd8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Array*>(), { "InternalArray__ICollection_Clear", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Array.InternalArray__IReadOnlyCollection_get_Count
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::System::Array::*)()>(&::System::Array::InternalArray__IReadOnlyCollection_get_Count)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x5c6bd24;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Array*>(), { "InternalArray__IReadOnlyCollection_get_Count", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Array.InternalArray__RemoveAt
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Array::*)(int32_t)>(&::System::Array::InternalArray__RemoveAt)> {
  constexpr static std::size_t size = 0x4c;
  constexpr static std::size_t addrs = 0x5c6bd28;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Array*>(), { "InternalArray__RemoveAt", {}, { ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Array.get_Length
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::System::Array::*)()>(&::System::Array::get_Length)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x5c5eb50;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Array*>(), { "get_Length", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Array.get_Rank
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::System::Array::*)()>(&::System::Array::get_Rank)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x5c69090;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Array*>(), { "get_Rank", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Array.GetRank
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::System::Array::*)()>(&::System::Array::GetRank)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x5c6bd74;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Array*>(), { "GetRank", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Array.GetLength
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::System::Array::*)(int32_t)>(&::System::Array::GetLength)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x5c6a2d4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Array*>(), { "GetLength", {}, { ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Array.GetLowerBound
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::System::Array::*)(int32_t)>(&::System::Array::GetLowerBound)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x5c68dd0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Array*>(), { "GetLowerBound", {}, { ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Array.GetValue
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Object* (::System::Array::*)(::ArrayW<int32_t>)>(&::System::Array::GetValue)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x5c6a780;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Array*>(), { "GetValue", {}, { ::i2c::type_of<::ArrayW<int32_t>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Array.SetValue
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Array::*)(::System::Object*, ::ArrayW<int32_t>)>(&::System::Array::SetValue)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x5c6b6a4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Array*>(), { "SetValue", {}, { ::i2c::type_of<::System::Object*>(), ::i2c::type_of<::ArrayW<int32_t>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Array.GetValueImpl
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Object* (::System::Array::*)(int32_t)>(&::System::Array::GetValueImpl)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x5c6bd80;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Array*>(), { "GetValueImpl", {}, { ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Array.SetValueImpl
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Array::*)(::System::Object*, int32_t)>(&::System::Array::SetValueImpl)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x5c6bdb0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Array*>(), { "SetValueImpl", {}, { ::i2c::type_of<::System::Object*>(), ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Array.FastCopy
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::System::Array*, int32_t, ::System::Array*, int32_t, int32_t)>(&::System::Array::FastCopy)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x5c6bdb4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(
            ::i2c::class_of<::System::Array*>(),
            { "FastCopy", {}, { ::i2c::type_of<::System::Array*>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::System::Array*>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Array.CreateInstanceImpl
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Array* (*)(::System::Type*, ::ArrayW<int32_t>, ::ArrayW<int32_t>)>(&::System::Array::CreateInstanceImpl)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x5c6bdb8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Array*>(),
                                                { "CreateInstanceImpl", {}, { ::i2c::type_of<::System::Type*>(), ::i2c::type_of<::ArrayW<int32_t>>(), ::i2c::type_of<::ArrayW<int32_t>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Array.GetUpperBound
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::System::Array::*)(int32_t)>(&::System::Array::GetUpperBound)> {
  constexpr static std::size_t size = 0x38;
  constexpr static std::size_t addrs = 0x5c6bdbc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Array*>(), { "GetUpperBound", {}, { ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Array.GetValue
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Object* (::System::Array::*)(int32_t)>(&::System::Array::GetValue)> {
  constexpr static std::size_t size = 0x194;
  constexpr static std::size_t addrs = 0x5c5ebb0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Array*>(), { "GetValue", {}, { ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Array.GetValue
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Object* (::System::Array::*)(int32_t, int32_t)>(&::System::Array::GetValue)> {
  constexpr static std::size_t size = 0x8c;
  constexpr static std::size_t addrs = 0x5c6a3fc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Array*>(), { "GetValue", {}, { ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Array.GetValue
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Object* (::System::Array::*)(int32_t, int32_t, int32_t)>(&::System::Array::GetValue)> {
  constexpr static std::size_t size = 0xa4;
  constexpr static std::size_t addrs = 0x5c6a550;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Array*>(), { "GetValue", {}, { ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Array.SetValue
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Array::*)(::System::Object*, int32_t)>(&::System::Array::SetValue)> {
  constexpr static std::size_t size = 0x16c;
  constexpr static std::size_t addrs = 0x5c68b3c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Array*>(), { "SetValue", {}, { ::i2c::type_of<::System::Object*>(), ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Array.SetValue
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Array::*)(::System::Object*, int32_t, int32_t)>(&::System::Array::SetValue)> {
  constexpr static std::size_t size = 0x9c;
  constexpr static std::size_t addrs = 0x5c6b300;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::System::Array*>(), { "SetValue", {}, { ::i2c::type_of<::System::Object*>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Array.SetValue
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Array::*)(::System::Object*, int32_t, int32_t, int32_t)>(&::System::Array::SetValue)> {
  constexpr static std::size_t size = 0xac;
  constexpr static std::size_t addrs = 0x5c6b464;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Array*>(),
                                                { "SetValue", {}, { ::i2c::type_of<::System::Object*>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Array.UnsafeCreateInstance
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Array* (*)(::System::Type*, ::ArrayW<int32_t>, ::ArrayW<int32_t>)>(&::System::Array::UnsafeCreateInstance)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x5c6bdf4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Array*>(),
                                                { "UnsafeCreateInstance", {}, { ::i2c::type_of<::System::Type*>(), ::i2c::type_of<::ArrayW<int32_t>>(), ::i2c::type_of<::ArrayW<int32_t>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Array.UnsafeCreateInstance
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Array* (*)(::System::Type*, int32_t, int32_t)>(&::System::Array::UnsafeCreateInstance)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x5c6c198;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(::i2c::class_of<::System::Array*>(), { "UnsafeCreateInstance", {}, { ::i2c::type_of<::System::Type*>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Array.UnsafeCreateInstance
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Array* (*)(::System::Type*, ::ArrayW<int32_t>)>(&::System::Array::UnsafeCreateInstance)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x5c6c228;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Array*>(), { "UnsafeCreateInstance", {}, { ::i2c::type_of<::System::Type*>(), ::i2c::type_of<::ArrayW<int32_t>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Array.CreateInstance
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Array* (*)(::System::Type*, int32_t)>(&::System::Array::CreateInstance)> {
  constexpr static std::size_t size = 0x7c;
  constexpr static std::size_t addrs = 0x5c6c22c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Array*>(), { "CreateInstance", {}, { ::i2c::type_of<::System::Type*>(), ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Array.CreateInstance
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Array* (*)(::System::Type*, int32_t, int32_t)>(&::System::Array::CreateInstance)> {
  constexpr static std::size_t size = 0x8c;
  constexpr static std::size_t addrs = 0x5c6c19c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::System::Array*>(), { "CreateInstance", {}, { ::i2c::type_of<::System::Type*>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Array.CreateInstance
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Array* (*)(::System::Type*, int32_t, int32_t, int32_t)>(&::System::Array::CreateInstance)> {
  constexpr static std::size_t size = 0xa4;
  constexpr static std::size_t addrs = 0x5c6c2a8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Array*>(),
                                                { "CreateInstance", {}, { ::i2c::type_of<::System::Type*>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Array.CreateInstance
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Array* (*)(::System::Type*, ::ArrayW<int32_t>)>(&::System::Array::CreateInstance)> {
  constexpr static std::size_t size = 0x260;
  constexpr static std::size_t addrs = 0x5c688bc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Array*>(), { "CreateInstance", {}, { ::i2c::type_of<::System::Type*>(), ::i2c::type_of<::ArrayW<int32_t>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Array.CreateInstance
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Array* (*)(::System::Type*, ::ArrayW<int32_t>, ::ArrayW<int32_t>)>(&::System::Array::CreateInstance)> {
  constexpr static std::size_t size = 0x3a0;
  constexpr static std::size_t addrs = 0x5c6bdf8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Array*>(),
                                                { "CreateInstance", {}, { ::i2c::type_of<::System::Type*>(), ::i2c::type_of<::ArrayW<int32_t>>(), ::i2c::type_of<::ArrayW<int32_t>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Array.Clear
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::System::Array*, int32_t, int32_t)>(&::System::Array::Clear)> {
  constexpr static std::size_t size = 0x124;
  constexpr static std::size_t addrs = 0x5c68dd4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Array*>(), { "Clear", {}, { ::i2c::type_of<::System::Array*>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Array.ClearInternal
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::System::Array*, int32_t, int32_t)>(&::System::Array::ClearInternal)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x5c6c34c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::System::Array*>(), { "ClearInternal", {}, { ::i2c::type_of<::System::Array*>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Array.Copy
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::System::Array*, ::System::Array*, int32_t)>(&::System::Array::Copy)> {
  constexpr static std::size_t size = 0xc4;
  constexpr static std::size_t addrs = 0x5c6a074;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::System::Array*>(), { "Copy", {}, { ::i2c::type_of<::System::Array*>(), ::i2c::type_of<::System::Array*>(), ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Array.Copy
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::System::Array*, int32_t, ::System::Array*, int32_t, int32_t)>(&::System::Array::Copy)> {
  constexpr static std::size_t size = 0x560;
  constexpr static std::size_t addrs = 0x5c6909c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(
                         ::i2c::class_of<::System::Array*>(),
                         { "Copy", {}, { ::i2c::type_of<::System::Array*>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::System::Array*>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Array.CreateArrayTypeMismatchException
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::ArrayTypeMismatchException* (*)()>(&::System::Array::CreateArrayTypeMismatchException)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0x5c6c36c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Array*>(), { "CreateArrayTypeMismatchException", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Array.CanAssignArrayElement
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::System::Type*, ::System::Type*)>(&::System::Array::CanAssignArrayElement)> {
  constexpr static std::size_t size = 0xd8;
  constexpr static std::size_t addrs = 0x5c6c3c4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Array*>(), { "CanAssignArrayElement", {}, { ::i2c::type_of<::System::Type*>(), ::i2c::type_of<::System::Type*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Array.ConstrainedCopy
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::System::Array*, int32_t, ::System::Array*, int32_t, int32_t)>(&::System::Array::ConstrainedCopy)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x5c6c49c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(
            ::i2c::class_of<::System::Array*>(),
            { "ConstrainedCopy", {}, { ::i2c::type_of<::System::Array*>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::System::Array*>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Array.Initialize
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Array::*)()>(&::System::Array::Initialize)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x5c6c4a0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Array*>(), { "Initialize", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Array.SortImpl
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::System::Array*, ::System::Array*, int32_t, int32_t, ::System::Collections::IComparer*)>(&::System::Array::SortImpl)> {
  constexpr static std::size_t size = 0xf8;
  constexpr static std::size_t addrs = 0x5c6bb5c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Array*>(), { "SortImpl",
                                                                                                    {},
                                                                                                    { ::i2c::type_of<::System::Array*>(), ::i2c::type_of<::System::Array*>(), ::i2c::type_of<int32_t>(),
                                                                                                      ::i2c::type_of<int32_t>(), ::i2c::type_of<::System::Collections::IComparer*>() } })));
    return ___internal_method;
  }
};
inline ::System::Array* System::Array::CreateInstance(::System::Type* elementType, ::ArrayW<int64_t> lengths) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Array*>(), { "CreateInstance", {}, { ::i2c::type_of<::System::Type*>(), ::i2c::type_of<::ArrayW<int64_t>>() } })));
  return ::cordl_internals::RunMethodRethrow<::System::Array*>(nullptr, ___internal_method, elementType, lengths);
}
template <typename T> inline ::System::Collections::ObjectModel::ReadOnlyCollection_1<T>* System::Array::AsReadOnly(::ArrayW<T> array) {
  static auto* ___internal_method_base =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Array*>(), { "AsReadOnly", { ::i2c::class_of<T>() }, { ::i2c::type_of<::ArrayW<T>>() } })));
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(___internal_method_base, { ::i2c::class_of<T>() })));
  return ::cordl_internals::RunMethodRethrow<::System::Collections::ObjectModel::ReadOnlyCollection_1<T>*>(nullptr, ___internal_method, array);
}
template <typename T> inline void System::Array::Resize(::by_ref<::ArrayW<T>> array, int32_t newSize) {
  static auto* ___internal_method_base = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Array*>(), { "Resize", { ::i2c::class_of<T>() }, { ::i2c::type_of<::by_ref<::ArrayW<T>>>(), ::i2c::type_of<int32_t>() } })));
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(___internal_method_base, { ::i2c::class_of<T>() })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, array, newSize);
}
inline int32_t System::Array::System_Collections_ICollection_get_Count() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Array*>(), { "System.Collections.ICollection.get_Count", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method);
}
inline bool System::Array::System_Collections_IList_get_IsReadOnly() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Array*>(), { "System.Collections.IList.get_IsReadOnly", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline ::System::Object* System::Array::System_Collections_IList_get_Item(int32_t index) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Array*>(), { "System.Collections.IList.get_Item", {}, { ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<::System::Object*>(this, ___internal_method, index);
}
inline void System::Array::System_Collections_IList_set_Item(int32_t index, ::System::Object* value) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Array*>(), { "System.Collections.IList.set_Item", {}, { ::i2c::type_of<int32_t>(), ::i2c::type_of<::System::Object*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, index, value);
}
inline int32_t System::Array::System_Collections_IList_Add(::System::Object* value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Array*>(), { "System.Collections.IList.Add", {}, { ::i2c::type_of<::System::Object*>() } })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method, value);
}
inline bool System::Array::System_Collections_IList_Contains(::System::Object* value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Array*>(), { "System.Collections.IList.Contains", {}, { ::i2c::type_of<::System::Object*>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, value);
}
inline void System::Array::System_Collections_IList_Clear() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Array*>(), { "System.Collections.IList.Clear", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline int32_t System::Array::System_Collections_IList_IndexOf(::System::Object* value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Array*>(), { "System.Collections.IList.IndexOf", {}, { ::i2c::type_of<::System::Object*>() } })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method, value);
}
inline void System::Array::System_Collections_IList_Insert(int32_t index, ::System::Object* value) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Array*>(), { "System.Collections.IList.Insert", {}, { ::i2c::type_of<int32_t>(), ::i2c::type_of<::System::Object*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, index, value);
}
inline void System::Array::System_Collections_IList_Remove(::System::Object* value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Array*>(), { "System.Collections.IList.Remove", {}, { ::i2c::type_of<::System::Object*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void System::Array::System_Collections_IList_RemoveAt(int32_t index) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Array*>(), { "System.Collections.IList.RemoveAt", {}, { ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, index);
}
inline void System::Array::CopyTo(::System::Array* array, int32_t index) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Array*>(), { "CopyTo", {}, { ::i2c::type_of<::System::Array*>(), ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, array, index);
}
inline ::System::Object* System::Array::Clone() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Array*>(), { "Clone", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::System::Object*>(this, ___internal_method);
}
inline int32_t System::Array::System_Collections_IStructuralComparable_CompareTo(::System::Object* other, ::System::Collections::IComparer* comparer) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::System::Array*>(),
                                       { "System.Collections.IStructuralComparable.CompareTo", {}, { ::i2c::type_of<::System::Object*>(), ::i2c::type_of<::System::Collections::IComparer*>() } })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method, other, comparer);
}
inline bool System::Array::System_Collections_IStructuralEquatable_Equals(::System::Object* other, ::System::Collections::IEqualityComparer* comparer) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::System::Array*>(),
                          { "System.Collections.IStructuralEquatable.Equals", {}, { ::i2c::type_of<::System::Object*>(), ::i2c::type_of<::System::Collections::IEqualityComparer*>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, other, comparer);
}
inline int32_t System::Array::CombineHashCodes(int32_t h1, int32_t h2) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Array*>(), { "CombineHashCodes", {}, { ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(nullptr, ___internal_method, h1, h2);
}
inline int32_t System::Array::System_Collections_IStructuralEquatable_GetHashCode(::System::Collections::IEqualityComparer* comparer) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::System::Array*>(), { "System.Collections.IStructuralEquatable.GetHashCode", {}, { ::i2c::type_of<::System::Collections::IEqualityComparer*>() } })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method, comparer);
}
inline int32_t System::Array::BinarySearch(::System::Array* array, ::System::Object* value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Array*>(), { "BinarySearch", {}, { ::i2c::type_of<::System::Array*>(), ::i2c::type_of<::System::Object*>() } })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(nullptr, ___internal_method, array, value);
}
template <typename TInput, typename TOutput> inline ::ArrayW<TOutput> System::Array::ConvertAll(::ArrayW<TInput> array, ::System::Converter_2<TInput, TOutput>* converter) {
  static auto* ___internal_method_base = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Array*>(), { "ConvertAll",
                                                                                     { ::i2c::class_of<TInput>(), ::i2c::class_of<TOutput>() },
                                                                                     { ::i2c::type_of<::ArrayW<TInput>>(), ::i2c::type_of<::System::Converter_2<TInput, TOutput>*>() } })));
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(___internal_method_base, { ::i2c::class_of<TInput>(), ::i2c::class_of<TOutput>() })));
  return ::cordl_internals::RunMethodRethrow<::ArrayW<TOutput>>(nullptr, ___internal_method, array, converter);
}
inline void System::Array::Copy(::System::Array* sourceArray, ::System::Array* destinationArray, int64_t length) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::System::Array*>(), { "Copy", {}, { ::i2c::type_of<::System::Array*>(), ::i2c::type_of<::System::Array*>(), ::i2c::type_of<int64_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, sourceArray, destinationArray, length);
}
inline void System::Array::Copy(::System::Array* sourceArray, int64_t sourceIndex, ::System::Array* destinationArray, int64_t destinationIndex, int64_t length) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(
                       ::i2c::class_of<::System::Array*>(),
                       { "Copy", {}, { ::i2c::type_of<::System::Array*>(), ::i2c::type_of<int64_t>(), ::i2c::type_of<::System::Array*>(), ::i2c::type_of<int64_t>(), ::i2c::type_of<int64_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, sourceArray, sourceIndex, destinationArray, destinationIndex, length);
}
inline void System::Array::CopyTo(::System::Array* array, int64_t index) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Array*>(), { "CopyTo", {}, { ::i2c::type_of<::System::Array*>(), ::i2c::type_of<int64_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, array, index);
}
template <typename T> inline void System::Array::ForEach(::ArrayW<T> array, ::System::Action_1<T>* action) {
  static auto* ___internal_method_base =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::System::Array*>(), { "ForEach", { ::i2c::class_of<T>() }, { ::i2c::type_of<::ArrayW<T>>(), ::i2c::type_of<::System::Action_1<T>*>() } })));
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(___internal_method_base, { ::i2c::class_of<T>() })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, array, action);
}
inline int64_t System::Array::get_LongLength() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Array*>(), { "get_LongLength", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<int64_t>(this, ___internal_method);
}
inline int64_t System::Array::GetLongLength(int32_t dimension) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Array*>(), { "GetLongLength", {}, { ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<int64_t>(this, ___internal_method, dimension);
}
inline ::System::Object* System::Array::GetValue(int64_t index) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Array*>(), { "GetValue", {}, { ::i2c::type_of<int64_t>() } })));
  return ::cordl_internals::RunMethodRethrow<::System::Object*>(this, ___internal_method, index);
}
inline ::System::Object* System::Array::GetValue(int64_t index1, int64_t index2) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Array*>(), { "GetValue", {}, { ::i2c::type_of<int64_t>(), ::i2c::type_of<int64_t>() } })));
  return ::cordl_internals::RunMethodRethrow<::System::Object*>(this, ___internal_method, index1, index2);
}
inline ::System::Object* System::Array::GetValue(int64_t index1, int64_t index2, int64_t index3) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Array*>(), { "GetValue", {}, { ::i2c::type_of<int64_t>(), ::i2c::type_of<int64_t>(), ::i2c::type_of<int64_t>() } })));
  return ::cordl_internals::RunMethodRethrow<::System::Object*>(this, ___internal_method, index1, index2, index3);
}
inline ::System::Object* System::Array::GetValue(::ArrayW<int64_t> indices) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Array*>(), { "GetValue", {}, { ::i2c::type_of<::ArrayW<int64_t>>() } })));
  return ::cordl_internals::RunMethodRethrow<::System::Object*>(this, ___internal_method, indices);
}
inline bool System::Array::get_IsFixedSize() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Array*>(), { "get_IsFixedSize", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline bool System::Array::get_IsReadOnly() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Array*>(), { "get_IsReadOnly", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline bool System::Array::get_IsSynchronized() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Array*>(), { "get_IsSynchronized", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline ::System::Object* System::Array::get_SyncRoot() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Array*>(), { "get_SyncRoot", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::System::Object*>(this, ___internal_method);
}
inline int32_t System::Array::BinarySearch(::System::Array* array, int32_t index, int32_t length, ::System::Object* value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::System::Array*>(),
                                       { "BinarySearch", {}, { ::i2c::type_of<::System::Array*>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::System::Object*>() } })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(nullptr, ___internal_method, array, index, length, value);
}
inline int32_t System::Array::BinarySearch(::System::Array* array, ::System::Object* value, ::System::Collections::IComparer* comparer) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::System::Array*>(),
                                       { "BinarySearch", {}, { ::i2c::type_of<::System::Array*>(), ::i2c::type_of<::System::Object*>(), ::i2c::type_of<::System::Collections::IComparer*>() } })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(nullptr, ___internal_method, array, value, comparer);
}
inline int32_t System::Array::BinarySearch(::System::Array* array, int32_t index, int32_t length, ::System::Object* value, ::System::Collections::IComparer* comparer) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Array*>(), { "BinarySearch",
                                                                                                  {},
                                                                                                  { ::i2c::type_of<::System::Array*>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(),
                                                                                                    ::i2c::type_of<::System::Object*>(), ::i2c::type_of<::System::Collections::IComparer*>() } })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(nullptr, ___internal_method, array, index, length, value, comparer);
}
inline int32_t System::Array::GetMedian(int32_t low, int32_t hi) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Array*>(), { "GetMedian", {}, { ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(nullptr, ___internal_method, low, hi);
}
template <typename T> inline int32_t System::Array::BinarySearch(::ArrayW<T> array, T value) {
  static auto* ___internal_method_base =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Array*>(), { "BinarySearch", { ::i2c::class_of<T>() }, { ::i2c::type_of<::ArrayW<T>>(), ::i2c::type_of<T>() } })));
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(___internal_method_base, { ::i2c::class_of<T>() })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(nullptr, ___internal_method, array, value);
}
template <typename T> inline int32_t System::Array::BinarySearch(::ArrayW<T> array, T value, ::System::Collections::Generic::IComparer_1<T>* comparer) {
  static auto* ___internal_method_base = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::System::Array*>(),
                          { "BinarySearch", { ::i2c::class_of<T>() }, { ::i2c::type_of<::ArrayW<T>>(), ::i2c::type_of<T>(), ::i2c::type_of<::System::Collections::Generic::IComparer_1<T>*>() } })));
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(___internal_method_base, { ::i2c::class_of<T>() })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(nullptr, ___internal_method, array, value, comparer);
}
template <typename T> inline int32_t System::Array::BinarySearch(::ArrayW<T> array, int32_t index, int32_t length, T value) {
  static auto* ___internal_method_base =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::System::Array*>(),
                                       { "BinarySearch", { ::i2c::class_of<T>() }, { ::i2c::type_of<::ArrayW<T>>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<T>() } })));
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(___internal_method_base, { ::i2c::class_of<T>() })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(nullptr, ___internal_method, array, index, length, value);
}
template <typename T> inline int32_t System::Array::BinarySearch(::ArrayW<T> array, int32_t index, int32_t length, T value, ::System::Collections::Generic::IComparer_1<T>* comparer) {
  static auto* ___internal_method_base =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Array*>(), { "BinarySearch",
                                                                                                  { ::i2c::class_of<T>() },
                                                                                                  { ::i2c::type_of<::ArrayW<T>>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(),
                                                                                                    ::i2c::type_of<T>(), ::i2c::type_of<::System::Collections::Generic::IComparer_1<T>*>() } })));
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(___internal_method_base, { ::i2c::class_of<T>() })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(nullptr, ___internal_method, array, index, length, value, comparer);
}
inline int32_t System::Array::IndexOf(::System::Array* array, ::System::Object* value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Array*>(), { "IndexOf", {}, { ::i2c::type_of<::System::Array*>(), ::i2c::type_of<::System::Object*>() } })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(nullptr, ___internal_method, array, value);
}
inline int32_t System::Array::IndexOf(::System::Array* array, ::System::Object* value, int32_t startIndex) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::System::Array*>(), { "IndexOf", {}, { ::i2c::type_of<::System::Array*>(), ::i2c::type_of<::System::Object*>(), ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(nullptr, ___internal_method, array, value, startIndex);
}
inline int32_t System::Array::IndexOf(::System::Array* array, ::System::Object* value, int32_t startIndex, int32_t count) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Array*>(),
                                              { "IndexOf", {}, { ::i2c::type_of<::System::Array*>(), ::i2c::type_of<::System::Object*>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(nullptr, ___internal_method, array, value, startIndex, count);
}
template <typename T> inline int32_t System::Array::IndexOf(::ArrayW<T> array, T value) {
  static auto* ___internal_method_base =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Array*>(), { "IndexOf", { ::i2c::class_of<T>() }, { ::i2c::type_of<::ArrayW<T>>(), ::i2c::type_of<T>() } })));
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(___internal_method_base, { ::i2c::class_of<T>() })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(nullptr, ___internal_method, array, value);
}
template <typename T> inline int32_t System::Array::IndexOf(::ArrayW<T> array, T value, int32_t startIndex) {
  static auto* ___internal_method_base = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::System::Array*>(), { "IndexOf", { ::i2c::class_of<T>() }, { ::i2c::type_of<::ArrayW<T>>(), ::i2c::type_of<T>(), ::i2c::type_of<int32_t>() } })));
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(___internal_method_base, { ::i2c::class_of<T>() })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(nullptr, ___internal_method, array, value, startIndex);
}
template <typename T> inline int32_t System::Array::IndexOf(::ArrayW<T> array, T value, int32_t startIndex, int32_t count) {
  static auto* ___internal_method_base = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Array*>(),
                                              { "IndexOf", { ::i2c::class_of<T>() }, { ::i2c::type_of<::ArrayW<T>>(), ::i2c::type_of<T>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>() } })));
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(___internal_method_base, { ::i2c::class_of<T>() })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(nullptr, ___internal_method, array, value, startIndex, count);
}
inline int32_t System::Array::LastIndexOf(::System::Array* array, ::System::Object* value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Array*>(), { "LastIndexOf", {}, { ::i2c::type_of<::System::Array*>(), ::i2c::type_of<::System::Object*>() } })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(nullptr, ___internal_method, array, value);
}
inline int32_t System::Array::LastIndexOf(::System::Array* array, ::System::Object* value, int32_t startIndex) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::System::Array*>(), { "LastIndexOf", {}, { ::i2c::type_of<::System::Array*>(), ::i2c::type_of<::System::Object*>(), ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(nullptr, ___internal_method, array, value, startIndex);
}
inline int32_t System::Array::LastIndexOf(::System::Array* array, ::System::Object* value, int32_t startIndex, int32_t count) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::System::Array*>(),
                                       { "LastIndexOf", {}, { ::i2c::type_of<::System::Array*>(), ::i2c::type_of<::System::Object*>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(nullptr, ___internal_method, array, value, startIndex, count);
}
template <typename T> inline int32_t System::Array::LastIndexOf(::ArrayW<T> array, T value) {
  static auto* ___internal_method_base =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Array*>(), { "LastIndexOf", { ::i2c::class_of<T>() }, { ::i2c::type_of<::ArrayW<T>>(), ::i2c::type_of<T>() } })));
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(___internal_method_base, { ::i2c::class_of<T>() })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(nullptr, ___internal_method, array, value);
}
template <typename T> inline int32_t System::Array::LastIndexOf(::ArrayW<T> array, T value, int32_t startIndex) {
  static auto* ___internal_method_base = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::System::Array*>(), { "LastIndexOf", { ::i2c::class_of<T>() }, { ::i2c::type_of<::ArrayW<T>>(), ::i2c::type_of<T>(), ::i2c::type_of<int32_t>() } })));
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(___internal_method_base, { ::i2c::class_of<T>() })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(nullptr, ___internal_method, array, value, startIndex);
}
template <typename T> inline int32_t System::Array::LastIndexOf(::ArrayW<T> array, T value, int32_t startIndex, int32_t count) {
  static auto* ___internal_method_base =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::System::Array*>(),
                                       { "LastIndexOf", { ::i2c::class_of<T>() }, { ::i2c::type_of<::ArrayW<T>>(), ::i2c::type_of<T>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>() } })));
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(___internal_method_base, { ::i2c::class_of<T>() })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(nullptr, ___internal_method, array, value, startIndex, count);
}
inline void System::Array::Reverse(::System::Array* array) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Array*>(), { "Reverse", {}, { ::i2c::type_of<::System::Array*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, array);
}
inline void System::Array::Reverse(::System::Array* array, int32_t index, int32_t length) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Array*>(), { "Reverse", {}, { ::i2c::type_of<::System::Array*>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, array, index, length);
}
template <typename T> inline void System::Array::Reverse(::ArrayW<T> array) {
  static auto* ___internal_method_base =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Array*>(), { "Reverse", { ::i2c::class_of<T>() }, { ::i2c::type_of<::ArrayW<T>>() } })));
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(___internal_method_base, { ::i2c::class_of<T>() })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, array);
}
template <typename T> inline void System::Array::Reverse(::ArrayW<T> array, int32_t index, int32_t length) {
  static auto* ___internal_method_base = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::System::Array*>(), { "Reverse", { ::i2c::class_of<T>() }, { ::i2c::type_of<::ArrayW<T>>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>() } })));
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(___internal_method_base, { ::i2c::class_of<T>() })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, array, index, length);
}
inline void System::Array::SetValue(::System::Object* value, int64_t index) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Array*>(), { "SetValue", {}, { ::i2c::type_of<::System::Object*>(), ::i2c::type_of<int64_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value, index);
}
inline void System::Array::SetValue(::System::Object* value, int64_t index1, int64_t index2) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Array*>(), { "SetValue", {}, { ::i2c::type_of<::System::Object*>(), ::i2c::type_of<int64_t>(), ::i2c::type_of<int64_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value, index1, index2);
}
inline void System::Array::SetValue(::System::Object* value, int64_t index1, int64_t index2, int64_t index3) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Array*>(),
                                              { "SetValue", {}, { ::i2c::type_of<::System::Object*>(), ::i2c::type_of<int64_t>(), ::i2c::type_of<int64_t>(), ::i2c::type_of<int64_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value, index1, index2, index3);
}
inline void System::Array::SetValue(::System::Object* value, ::ArrayW<int64_t> indices) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Array*>(), { "SetValue", {}, { ::i2c::type_of<::System::Object*>(), ::i2c::type_of<::ArrayW<int64_t>>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value, indices);
}
inline void System::Array::Sort(::System::Array* array) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Array*>(), { "Sort", {}, { ::i2c::type_of<::System::Array*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, array);
}
inline void System::Array::Sort(::System::Array* array, int32_t index, int32_t length) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Array*>(), { "Sort", {}, { ::i2c::type_of<::System::Array*>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, array, index, length);
}
inline void System::Array::Sort(::System::Array* array, ::System::Collections::IComparer* comparer) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Array*>(), { "Sort", {}, { ::i2c::type_of<::System::Array*>(), ::i2c::type_of<::System::Collections::IComparer*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, array, comparer);
}
inline void System::Array::Sort(::System::Array* array, int32_t index, int32_t length, ::System::Collections::IComparer* comparer) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::System::Array*>(),
                          { "Sort", {}, { ::i2c::type_of<::System::Array*>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::System::Collections::IComparer*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, array, index, length, comparer);
}
inline void System::Array::Sort(::System::Array* keys, ::System::Array* items) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Array*>(), { "Sort", {}, { ::i2c::type_of<::System::Array*>(), ::i2c::type_of<::System::Array*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, keys, items);
}
inline void System::Array::Sort(::System::Array* keys, ::System::Array* items, ::System::Collections::IComparer* comparer) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Array*>(),
                                              { "Sort", {}, { ::i2c::type_of<::System::Array*>(), ::i2c::type_of<::System::Array*>(), ::i2c::type_of<::System::Collections::IComparer*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, keys, items, comparer);
}
inline void System::Array::Sort(::System::Array* keys, ::System::Array* items, int32_t index, int32_t length) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Array*>(),
                                              { "Sort", {}, { ::i2c::type_of<::System::Array*>(), ::i2c::type_of<::System::Array*>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, keys, items, index, length);
}
inline void System::Array::Sort(::System::Array* keys, ::System::Array* items, int32_t index, int32_t length, ::System::Collections::IComparer* comparer) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Array*>(), { "Sort",
                                                                                                  {},
                                                                                                  { ::i2c::type_of<::System::Array*>(), ::i2c::type_of<::System::Array*>(), ::i2c::type_of<int32_t>(),
                                                                                                    ::i2c::type_of<int32_t>(), ::i2c::type_of<::System::Collections::IComparer*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, keys, items, index, length, comparer);
}
template <typename T> inline void System::Array::Sort(::ArrayW<T> array) {
  static auto* ___internal_method_base =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Array*>(), { "Sort", { ::i2c::class_of<T>() }, { ::i2c::type_of<::ArrayW<T>>() } })));
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(___internal_method_base, { ::i2c::class_of<T>() })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, array);
}
template <typename T> inline void System::Array::Sort(::ArrayW<T> array, int32_t index, int32_t length) {
  static auto* ___internal_method_base = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::System::Array*>(), { "Sort", { ::i2c::class_of<T>() }, { ::i2c::type_of<::ArrayW<T>>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>() } })));
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(___internal_method_base, { ::i2c::class_of<T>() })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, array, index, length);
}
template <typename T> inline void System::Array::Sort(::ArrayW<T> array, ::System::Collections::Generic::IComparer_1<T>* comparer) {
  static auto* ___internal_method_base = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Array*>(),
                                              { "Sort", { ::i2c::class_of<T>() }, { ::i2c::type_of<::ArrayW<T>>(), ::i2c::type_of<::System::Collections::Generic::IComparer_1<T>*>() } })));
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(___internal_method_base, { ::i2c::class_of<T>() })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, array, comparer);
}
template <typename T> inline void System::Array::Sort(::ArrayW<T> array, int32_t index, int32_t length, ::System::Collections::Generic::IComparer_1<T>* comparer) {
  static auto* ___internal_method_base =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Array*>(), { "Sort",
                                                                                                  { ::i2c::class_of<T>() },
                                                                                                  { ::i2c::type_of<::ArrayW<T>>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(),
                                                                                                    ::i2c::type_of<::System::Collections::Generic::IComparer_1<T>*>() } })));
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(___internal_method_base, { ::i2c::class_of<T>() })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, array, index, length, comparer);
}
template <typename T> inline void System::Array::Sort(::ArrayW<T> array, ::System::Comparison_1<T>* comparison) {
  static auto* ___internal_method_base =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::System::Array*>(), { "Sort", { ::i2c::class_of<T>() }, { ::i2c::type_of<::ArrayW<T>>(), ::i2c::type_of<::System::Comparison_1<T>*>() } })));
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(___internal_method_base, { ::i2c::class_of<T>() })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, array, comparison);
}
template <typename TKey, typename TValue> inline void System::Array::Sort(::ArrayW<TKey> keys, ::ArrayW<TValue> items) {
  static auto* ___internal_method_base = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Array*>(),
                                              { "Sort", { ::i2c::class_of<TKey>(), ::i2c::class_of<TValue>() }, { ::i2c::type_of<::ArrayW<TKey>>(), ::i2c::type_of<::ArrayW<TValue>>() } })));
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(___internal_method_base, { ::i2c::class_of<TKey>(), ::i2c::class_of<TValue>() })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, keys, items);
}
template <typename TKey, typename TValue> inline void System::Array::Sort(::ArrayW<TKey> keys, ::ArrayW<TValue> items, int32_t index, int32_t length) {
  static auto* ___internal_method_base = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::System::Array*>(), { "Sort",
                                                                 { ::i2c::class_of<TKey>(), ::i2c::class_of<TValue>() },
                                                                 { ::i2c::type_of<::ArrayW<TKey>>(), ::i2c::type_of<::ArrayW<TValue>>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>() } })));
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(___internal_method_base, { ::i2c::class_of<TKey>(), ::i2c::class_of<TValue>() })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, keys, items, index, length);
}
template <typename TKey, typename TValue> inline void System::Array::Sort(::ArrayW<TKey> keys, ::ArrayW<TValue> items, ::System::Collections::Generic::IComparer_1<TKey>* comparer) {
  static auto* ___internal_method_base = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Array*>(),
                                              { "Sort",
                                                { ::i2c::class_of<TKey>(), ::i2c::class_of<TValue>() },
                                                { ::i2c::type_of<::ArrayW<TKey>>(), ::i2c::type_of<::ArrayW<TValue>>(), ::i2c::type_of<::System::Collections::Generic::IComparer_1<TKey>*>() } })));
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(___internal_method_base, { ::i2c::class_of<TKey>(), ::i2c::class_of<TValue>() })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, keys, items, comparer);
}
template <typename TKey, typename TValue>
inline void System::Array::Sort(::ArrayW<TKey> keys, ::ArrayW<TValue> items, int32_t index, int32_t length, ::System::Collections::Generic::IComparer_1<TKey>* comparer) {
  static auto* ___internal_method_base = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Array*>(), { "Sort",
                                                                                     { ::i2c::class_of<TKey>(), ::i2c::class_of<TValue>() },
                                                                                     { ::i2c::type_of<::ArrayW<TKey>>(), ::i2c::type_of<::ArrayW<TValue>>(), ::i2c::type_of<int32_t>(),
                                                                                       ::i2c::type_of<int32_t>(), ::i2c::type_of<::System::Collections::Generic::IComparer_1<TKey>*>() } })));
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(___internal_method_base, { ::i2c::class_of<TKey>(), ::i2c::class_of<TValue>() })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, keys, items, index, length, comparer);
}
template <typename T> inline bool System::Array::Exists(::ArrayW<T> array, ::System::Predicate_1<T>* match) {
  static auto* ___internal_method_base =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::System::Array*>(), { "Exists", { ::i2c::class_of<T>() }, { ::i2c::type_of<::ArrayW<T>>(), ::i2c::type_of<::System::Predicate_1<T>*>() } })));
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(___internal_method_base, { ::i2c::class_of<T>() })));
  return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, array, match);
}
template <typename T> inline void System::Array::Fill(::ArrayW<T> array, T value) {
  static auto* ___internal_method_base =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Array*>(), { "Fill", { ::i2c::class_of<T>() }, { ::i2c::type_of<::ArrayW<T>>(), ::i2c::type_of<T>() } })));
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(___internal_method_base, { ::i2c::class_of<T>() })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, array, value);
}
template <typename T> inline void System::Array::Fill(::ArrayW<T> array, T value, int32_t startIndex, int32_t count) {
  static auto* ___internal_method_base = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Array*>(),
                                              { "Fill", { ::i2c::class_of<T>() }, { ::i2c::type_of<::ArrayW<T>>(), ::i2c::type_of<T>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>() } })));
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(___internal_method_base, { ::i2c::class_of<T>() })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, array, value, startIndex, count);
}
template <typename T> inline T System::Array::Find(::ArrayW<T> array, ::System::Predicate_1<T>* match) {
  static auto* ___internal_method_base =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::System::Array*>(), { "Find", { ::i2c::class_of<T>() }, { ::i2c::type_of<::ArrayW<T>>(), ::i2c::type_of<::System::Predicate_1<T>*>() } })));
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(___internal_method_base, { ::i2c::class_of<T>() })));
  return ::cordl_internals::RunMethodRethrow<T>(nullptr, ___internal_method, array, match);
}
template <typename T> inline ::ArrayW<T> System::Array::FindAll(::ArrayW<T> array, ::System::Predicate_1<T>* match) {
  static auto* ___internal_method_base =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::System::Array*>(), { "FindAll", { ::i2c::class_of<T>() }, { ::i2c::type_of<::ArrayW<T>>(), ::i2c::type_of<::System::Predicate_1<T>*>() } })));
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(___internal_method_base, { ::i2c::class_of<T>() })));
  return ::cordl_internals::RunMethodRethrow<::ArrayW<T>>(nullptr, ___internal_method, array, match);
}
template <typename T> inline int32_t System::Array::FindIndex(::ArrayW<T> array, ::System::Predicate_1<T>* match) {
  static auto* ___internal_method_base = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::System::Array*>(), { "FindIndex", { ::i2c::class_of<T>() }, { ::i2c::type_of<::ArrayW<T>>(), ::i2c::type_of<::System::Predicate_1<T>*>() } })));
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(___internal_method_base, { ::i2c::class_of<T>() })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(nullptr, ___internal_method, array, match);
}
template <typename T> inline int32_t System::Array::FindIndex(::ArrayW<T> array, int32_t startIndex, ::System::Predicate_1<T>* match) {
  static auto* ___internal_method_base = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Array*>(),
                                              { "FindIndex", { ::i2c::class_of<T>() }, { ::i2c::type_of<::ArrayW<T>>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::System::Predicate_1<T>*>() } })));
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(___internal_method_base, { ::i2c::class_of<T>() })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(nullptr, ___internal_method, array, startIndex, match);
}
template <typename T> inline int32_t System::Array::FindIndex(::ArrayW<T> array, int32_t startIndex, int32_t count, ::System::Predicate_1<T>* match) {
  static auto* ___internal_method_base = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(
          ::i2c::class_of<::System::Array*>(),
          { "FindIndex", { ::i2c::class_of<T>() }, { ::i2c::type_of<::ArrayW<T>>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::System::Predicate_1<T>*>() } })));
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(___internal_method_base, { ::i2c::class_of<T>() })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(nullptr, ___internal_method, array, startIndex, count, match);
}
template <typename T> inline T System::Array::FindLast(::ArrayW<T> array, ::System::Predicate_1<T>* match) {
  static auto* ___internal_method_base =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::System::Array*>(), { "FindLast", { ::i2c::class_of<T>() }, { ::i2c::type_of<::ArrayW<T>>(), ::i2c::type_of<::System::Predicate_1<T>*>() } })));
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(___internal_method_base, { ::i2c::class_of<T>() })));
  return ::cordl_internals::RunMethodRethrow<T>(nullptr, ___internal_method, array, match);
}
template <typename T> inline int32_t System::Array::FindLastIndex(::ArrayW<T> array, ::System::Predicate_1<T>* match) {
  static auto* ___internal_method_base = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::System::Array*>(), { "FindLastIndex", { ::i2c::class_of<T>() }, { ::i2c::type_of<::ArrayW<T>>(), ::i2c::type_of<::System::Predicate_1<T>*>() } })));
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(___internal_method_base, { ::i2c::class_of<T>() })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(nullptr, ___internal_method, array, match);
}
template <typename T> inline int32_t System::Array::FindLastIndex(::ArrayW<T> array, int32_t startIndex, ::System::Predicate_1<T>* match) {
  static auto* ___internal_method_base =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::System::Array*>(),
                                       { "FindLastIndex", { ::i2c::class_of<T>() }, { ::i2c::type_of<::ArrayW<T>>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::System::Predicate_1<T>*>() } })));
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(___internal_method_base, { ::i2c::class_of<T>() })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(nullptr, ___internal_method, array, startIndex, match);
}
template <typename T> inline int32_t System::Array::FindLastIndex(::ArrayW<T> array, int32_t startIndex, int32_t count, ::System::Predicate_1<T>* match) {
  static auto* ___internal_method_base = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(
          ::i2c::class_of<::System::Array*>(),
          { "FindLastIndex", { ::i2c::class_of<T>() }, { ::i2c::type_of<::ArrayW<T>>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::System::Predicate_1<T>*>() } })));
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(___internal_method_base, { ::i2c::class_of<T>() })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(nullptr, ___internal_method, array, startIndex, count, match);
}
template <typename T> inline bool System::Array::TrueForAll(::ArrayW<T> array, ::System::Predicate_1<T>* match) {
  static auto* ___internal_method_base = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::System::Array*>(), { "TrueForAll", { ::i2c::class_of<T>() }, { ::i2c::type_of<::ArrayW<T>>(), ::i2c::type_of<::System::Predicate_1<T>*>() } })));
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(___internal_method_base, { ::i2c::class_of<T>() })));
  return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, array, match);
}
inline ::System::Collections::IEnumerator* System::Array::GetEnumerator() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Array*>(), { "GetEnumerator", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::System::Collections::IEnumerator*>(this, ___internal_method);
}
inline void System::Array::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Array*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline int32_t System::Array::InternalArray__ICollection_get_Count() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Array*>(), { "InternalArray__ICollection_get_Count", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method);
}
inline bool System::Array::InternalArray__ICollection_get_IsReadOnly() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Array*>(), { "InternalArray__ICollection_get_IsReadOnly", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline ::by_ref<uint8_t> System::Array::GetRawSzArrayData() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Array*>(), { "GetRawSzArrayData", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::by_ref<uint8_t>>(this, ___internal_method);
}
template <typename T> inline ::System::Collections::Generic::IEnumerator_1<T>* System::Array::InternalArray__IEnumerable_GetEnumerator() {
  static auto* ___internal_method_base =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Array*>(), { "InternalArray__IEnumerable_GetEnumerator", { ::i2c::class_of<T>() }, {} })));
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(___internal_method_base, { ::i2c::class_of<T>() })));
  return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::IEnumerator_1<T>*>(this, ___internal_method);
}
inline void System::Array::InternalArray__ICollection_Clear() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Array*>(), { "InternalArray__ICollection_Clear", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
template <typename T> inline void System::Array::InternalArray__ICollection_Add(T item) {
  static auto* ___internal_method_base =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Array*>(), { "InternalArray__ICollection_Add", { ::i2c::class_of<T>() }, { ::i2c::type_of<T>() } })));
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(___internal_method_base, { ::i2c::class_of<T>() })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, item);
}
template <typename T> inline bool System::Array::InternalArray__ICollection_Remove(T item) {
  static auto* ___internal_method_base =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Array*>(), { "InternalArray__ICollection_Remove", { ::i2c::class_of<T>() }, { ::i2c::type_of<T>() } })));
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(___internal_method_base, { ::i2c::class_of<T>() })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, item);
}
template <typename T> inline bool System::Array::InternalArray__ICollection_Contains(T item) {
  static auto* ___internal_method_base =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Array*>(), { "InternalArray__ICollection_Contains", { ::i2c::class_of<T>() }, { ::i2c::type_of<T>() } })));
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(___internal_method_base, { ::i2c::class_of<T>() })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, item);
}
template <typename T> inline void System::Array::InternalArray__ICollection_CopyTo(::ArrayW<T> array, int32_t arrayIndex) {
  static auto* ___internal_method_base = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::System::Array*>(), { "InternalArray__ICollection_CopyTo", { ::i2c::class_of<T>() }, { ::i2c::type_of<::ArrayW<T>>(), ::i2c::type_of<int32_t>() } })));
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(___internal_method_base, { ::i2c::class_of<T>() })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, array, arrayIndex);
}
template <typename T> inline T System::Array::InternalArray__IReadOnlyList_get_Item(int32_t index) {
  static auto* ___internal_method_base =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Array*>(), { "InternalArray__IReadOnlyList_get_Item", { ::i2c::class_of<T>() }, { ::i2c::type_of<int32_t>() } })));
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(___internal_method_base, { ::i2c::class_of<T>() })));
  return ::cordl_internals::RunMethodRethrow<T>(this, ___internal_method, index);
}
inline int32_t System::Array::InternalArray__IReadOnlyCollection_get_Count() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Array*>(), { "InternalArray__IReadOnlyCollection_get_Count", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method);
}
template <typename T> inline void System::Array::InternalArray__Insert(int32_t index, T item) {
  static auto* ___internal_method_base = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Array*>(), { "InternalArray__Insert", { ::i2c::class_of<T>() }, { ::i2c::type_of<int32_t>(), ::i2c::type_of<T>() } })));
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(___internal_method_base, { ::i2c::class_of<T>() })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, index, item);
}
inline void System::Array::InternalArray__RemoveAt(int32_t index) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Array*>(), { "InternalArray__RemoveAt", {}, { ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, index);
}
template <typename T> inline int32_t System::Array::InternalArray__IndexOf(T item) {
  static auto* ___internal_method_base =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Array*>(), { "InternalArray__IndexOf", { ::i2c::class_of<T>() }, { ::i2c::type_of<T>() } })));
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(___internal_method_base, { ::i2c::class_of<T>() })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method, item);
}
template <typename T> inline T System::Array::InternalArray__get_Item(int32_t index) {
  static auto* ___internal_method_base =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Array*>(), { "InternalArray__get_Item", { ::i2c::class_of<T>() }, { ::i2c::type_of<int32_t>() } })));
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(___internal_method_base, { ::i2c::class_of<T>() })));
  return ::cordl_internals::RunMethodRethrow<T>(this, ___internal_method, index);
}
template <typename T> inline void System::Array::InternalArray__set_Item(int32_t index, T item) {
  static auto* ___internal_method_base = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Array*>(), { "InternalArray__set_Item", { ::i2c::class_of<T>() }, { ::i2c::type_of<int32_t>(), ::i2c::type_of<T>() } })));
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(___internal_method_base, { ::i2c::class_of<T>() })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, index, item);
}
template <typename T> inline void System::Array::GetGenericValueImpl(int32_t pos, ::by_ref<T> value) {
  static auto* ___internal_method_base = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Array*>(), { "GetGenericValueImpl", { ::i2c::class_of<T>() }, { ::i2c::type_of<int32_t>(), ::i2c::type_of<::by_ref<T>>() } })));
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(___internal_method_base, { ::i2c::class_of<T>() })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, pos, value);
}
template <typename T> inline void System::Array::SetGenericValueImpl(int32_t pos, ::by_ref<T> value) {
  static auto* ___internal_method_base = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Array*>(), { "SetGenericValueImpl", { ::i2c::class_of<T>() }, { ::i2c::type_of<int32_t>(), ::i2c::type_of<::by_ref<T>>() } })));
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(___internal_method_base, { ::i2c::class_of<T>() })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, pos, value);
}
inline int32_t System::Array::get_Length() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Array*>(), { "get_Length", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method);
}
inline int32_t System::Array::get_Rank() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Array*>(), { "get_Rank", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method);
}
inline int32_t System::Array::GetRank() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Array*>(), { "GetRank", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method);
}
inline int32_t System::Array::GetLength(int32_t dimension) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Array*>(), { "GetLength", {}, { ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method, dimension);
}
inline int32_t System::Array::GetLowerBound(int32_t dimension) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Array*>(), { "GetLowerBound", {}, { ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method, dimension);
}
inline ::System::Object* System::Array::GetValue(::ArrayW<int32_t> indices) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Array*>(), { "GetValue", {}, { ::i2c::type_of<::ArrayW<int32_t>>() } })));
  return ::cordl_internals::RunMethodRethrow<::System::Object*>(this, ___internal_method, indices);
}
inline void System::Array::SetValue(::System::Object* value, ::ArrayW<int32_t> indices) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Array*>(), { "SetValue", {}, { ::i2c::type_of<::System::Object*>(), ::i2c::type_of<::ArrayW<int32_t>>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value, indices);
}
inline ::System::Object* System::Array::GetValueImpl(int32_t pos) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Array*>(), { "GetValueImpl", {}, { ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<::System::Object*>(this, ___internal_method, pos);
}
inline void System::Array::SetValueImpl(::System::Object* value, int32_t pos) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Array*>(), { "SetValueImpl", {}, { ::i2c::type_of<::System::Object*>(), ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value, pos);
}
inline bool System::Array::FastCopy(::System::Array* source, int32_t source_idx, ::System::Array* dest, int32_t dest_idx, int32_t length) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(
          ::i2c::class_of<::System::Array*>(),
          { "FastCopy", {}, { ::i2c::type_of<::System::Array*>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::System::Array*>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, source, source_idx, dest, dest_idx, length);
}
inline ::System::Array* System::Array::CreateInstanceImpl(::System::Type* elementType, ::ArrayW<int32_t> lengths, ::ArrayW<int32_t> bounds) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Array*>(),
                                              { "CreateInstanceImpl", {}, { ::i2c::type_of<::System::Type*>(), ::i2c::type_of<::ArrayW<int32_t>>(), ::i2c::type_of<::ArrayW<int32_t>>() } })));
  return ::cordl_internals::RunMethodRethrow<::System::Array*>(nullptr, ___internal_method, elementType, lengths, bounds);
}
inline int32_t System::Array::GetUpperBound(int32_t dimension) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Array*>(), { "GetUpperBound", {}, { ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method, dimension);
}
inline ::System::Object* System::Array::GetValue(int32_t index) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Array*>(), { "GetValue", {}, { ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<::System::Object*>(this, ___internal_method, index);
}
inline ::System::Object* System::Array::GetValue(int32_t index1, int32_t index2) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Array*>(), { "GetValue", {}, { ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<::System::Object*>(this, ___internal_method, index1, index2);
}
inline ::System::Object* System::Array::GetValue(int32_t index1, int32_t index2, int32_t index3) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Array*>(), { "GetValue", {}, { ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<::System::Object*>(this, ___internal_method, index1, index2, index3);
}
inline void System::Array::SetValue(::System::Object* value, int32_t index) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Array*>(), { "SetValue", {}, { ::i2c::type_of<::System::Object*>(), ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value, index);
}
inline void System::Array::SetValue(::System::Object* value, int32_t index1, int32_t index2) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Array*>(), { "SetValue", {}, { ::i2c::type_of<::System::Object*>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value, index1, index2);
}
inline void System::Array::SetValue(::System::Object* value, int32_t index1, int32_t index2, int32_t index3) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Array*>(),
                                              { "SetValue", {}, { ::i2c::type_of<::System::Object*>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value, index1, index2, index3);
}
inline ::System::Array* System::Array::UnsafeCreateInstance(::System::Type* elementType, ::ArrayW<int32_t> lengths, ::ArrayW<int32_t> lowerBounds) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Array*>(),
                                              { "UnsafeCreateInstance", {}, { ::i2c::type_of<::System::Type*>(), ::i2c::type_of<::ArrayW<int32_t>>(), ::i2c::type_of<::ArrayW<int32_t>>() } })));
  return ::cordl_internals::RunMethodRethrow<::System::Array*>(nullptr, ___internal_method, elementType, lengths, lowerBounds);
}
inline ::System::Array* System::Array::UnsafeCreateInstance(::System::Type* elementType, int32_t length1, int32_t length2) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::System::Array*>(), { "UnsafeCreateInstance", {}, { ::i2c::type_of<::System::Type*>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<::System::Array*>(nullptr, ___internal_method, elementType, length1, length2);
}
inline ::System::Array* System::Array::UnsafeCreateInstance(::System::Type* elementType, ::ArrayW<int32_t> lengths) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Array*>(), { "UnsafeCreateInstance", {}, { ::i2c::type_of<::System::Type*>(), ::i2c::type_of<::ArrayW<int32_t>>() } })));
  return ::cordl_internals::RunMethodRethrow<::System::Array*>(nullptr, ___internal_method, elementType, lengths);
}
inline ::System::Array* System::Array::CreateInstance(::System::Type* elementType, int32_t length) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Array*>(), { "CreateInstance", {}, { ::i2c::type_of<::System::Type*>(), ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<::System::Array*>(nullptr, ___internal_method, elementType, length);
}
inline ::System::Array* System::Array::CreateInstance(::System::Type* elementType, int32_t length1, int32_t length2) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::System::Array*>(), { "CreateInstance", {}, { ::i2c::type_of<::System::Type*>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<::System::Array*>(nullptr, ___internal_method, elementType, length1, length2);
}
inline ::System::Array* System::Array::CreateInstance(::System::Type* elementType, int32_t length1, int32_t length2, int32_t length3) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Array*>(),
                                              { "CreateInstance", {}, { ::i2c::type_of<::System::Type*>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<::System::Array*>(nullptr, ___internal_method, elementType, length1, length2, length3);
}
inline ::System::Array* System::Array::CreateInstance(::System::Type* elementType, ::ArrayW<int32_t> lengths) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Array*>(), { "CreateInstance", {}, { ::i2c::type_of<::System::Type*>(), ::i2c::type_of<::ArrayW<int32_t>>() } })));
  return ::cordl_internals::RunMethodRethrow<::System::Array*>(nullptr, ___internal_method, elementType, lengths);
}
inline ::System::Array* System::Array::CreateInstance(::System::Type* elementType, ::ArrayW<int32_t> lengths, ::ArrayW<int32_t> lowerBounds) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Array*>(),
                                                           { "CreateInstance", {}, { ::i2c::type_of<::System::Type*>(), ::i2c::type_of<::ArrayW<int32_t>>(), ::i2c::type_of<::ArrayW<int32_t>>() } })));
  return ::cordl_internals::RunMethodRethrow<::System::Array*>(nullptr, ___internal_method, elementType, lengths, lowerBounds);
}
inline void System::Array::Clear(::System::Array* array, int32_t index, int32_t length) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Array*>(), { "Clear", {}, { ::i2c::type_of<::System::Array*>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, array, index, length);
}
inline void System::Array::ClearInternal(::System::Array* a, int32_t index, int32_t count) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::System::Array*>(), { "ClearInternal", {}, { ::i2c::type_of<::System::Array*>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, a, index, count);
}
inline void System::Array::Copy(::System::Array* sourceArray, ::System::Array* destinationArray, int32_t length) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::System::Array*>(), { "Copy", {}, { ::i2c::type_of<::System::Array*>(), ::i2c::type_of<::System::Array*>(), ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, sourceArray, destinationArray, length);
}
inline void System::Array::Copy(::System::Array* sourceArray, int32_t sourceIndex, ::System::Array* destinationArray, int32_t destinationIndex, int32_t length) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(
                       ::i2c::class_of<::System::Array*>(),
                       { "Copy", {}, { ::i2c::type_of<::System::Array*>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::System::Array*>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, sourceArray, sourceIndex, destinationArray, destinationIndex, length);
}
inline ::System::ArrayTypeMismatchException* System::Array::CreateArrayTypeMismatchException() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Array*>(), { "CreateArrayTypeMismatchException", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::System::ArrayTypeMismatchException*>(nullptr, ___internal_method);
}
inline bool System::Array::CanAssignArrayElement(::System::Type* source, ::System::Type* target) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Array*>(), { "CanAssignArrayElement", {}, { ::i2c::type_of<::System::Type*>(), ::i2c::type_of<::System::Type*>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, source, target);
}
inline void System::Array::ConstrainedCopy(::System::Array* sourceArray, int32_t sourceIndex, ::System::Array* destinationArray, int32_t destinationIndex, int32_t length) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(
          ::i2c::class_of<::System::Array*>(),
          { "ConstrainedCopy", {}, { ::i2c::type_of<::System::Array*>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::System::Array*>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, sourceArray, sourceIndex, destinationArray, destinationIndex, length);
}
template <typename T> inline ::ArrayW<T> System::Array::Empty() {
  static auto* ___internal_method_base = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Array*>(), { "Empty", { ::i2c::class_of<T>() }, {} })));
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(___internal_method_base, { ::i2c::class_of<T>() })));
  return ::cordl_internals::RunMethodRethrow<::ArrayW<T>>(nullptr, ___internal_method);
}
inline void System::Array::Initialize() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Array*>(), { "Initialize", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
template <typename T> inline int32_t System::Array::IndexOfImpl(::ArrayW<T> array, T value, int32_t startIndex, int32_t count) {
  static auto* ___internal_method_base =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::System::Array*>(),
                                       { "IndexOfImpl", { ::i2c::class_of<T>() }, { ::i2c::type_of<::ArrayW<T>>(), ::i2c::type_of<T>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>() } })));
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(___internal_method_base, { ::i2c::class_of<T>() })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(nullptr, ___internal_method, array, value, startIndex, count);
}
template <typename T> inline int32_t System::Array::LastIndexOfImpl(::ArrayW<T> array, T value, int32_t startIndex, int32_t count) {
  static auto* ___internal_method_base =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::System::Array*>(),
                                       { "LastIndexOfImpl", { ::i2c::class_of<T>() }, { ::i2c::type_of<::ArrayW<T>>(), ::i2c::type_of<T>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>() } })));
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(___internal_method_base, { ::i2c::class_of<T>() })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(nullptr, ___internal_method, array, value, startIndex, count);
}
inline void System::Array::SortImpl(::System::Array* keys, ::System::Array* items, int32_t index, int32_t length, ::System::Collections::IComparer* comparer) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Array*>(), { "SortImpl",
                                                                                                  {},
                                                                                                  { ::i2c::type_of<::System::Array*>(), ::i2c::type_of<::System::Array*>(), ::i2c::type_of<int32_t>(),
                                                                                                    ::i2c::type_of<int32_t>(), ::i2c::type_of<::System::Collections::IComparer*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, keys, items, index, length, comparer);
}
template <typename T> inline T System::Array::UnsafeLoad(::ArrayW<T> array, int32_t index) {
  static auto* ___internal_method_base = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Array*>(), { "UnsafeLoad", { ::i2c::class_of<T>() }, { ::i2c::type_of<::ArrayW<T>>(), ::i2c::type_of<int32_t>() } })));
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(___internal_method_base, { ::i2c::class_of<T>() })));
  return ::cordl_internals::RunMethodRethrow<T>(nullptr, ___internal_method, array, index);
}
template <typename T> inline void System::Array::UnsafeStore(::ArrayW<T> array, int32_t index, T value) {
  static auto* ___internal_method_base = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::System::Array*>(), { "UnsafeStore", { ::i2c::class_of<T>() }, { ::i2c::type_of<::ArrayW<T>>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<T>() } })));
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(___internal_method_base, { ::i2c::class_of<T>() })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, array, index, value);
}
template <typename S, typename R> inline R System::Array::UnsafeMov(S instance) {
  static auto* ___internal_method_base =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Array*>(), { "UnsafeMov", { ::i2c::class_of<S>(), ::i2c::class_of<R>() }, { ::i2c::type_of<S>() } })));
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(___internal_method_base, { ::i2c::class_of<S>(), ::i2c::class_of<R>() })));
  return ::cordl_internals::RunMethodRethrow<R>(nullptr, ___internal_method, instance);
}
inline ::System::Array* System::Array::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::System::Array*>());
}
/// @brief Convert operator to "::System::Collections::ICollection"
constexpr System::Array::operator ::System::Collections::ICollection*() noexcept {
  return static_cast<::System::Collections::ICollection*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::Collections::ICollection"
constexpr ::System::Collections::ICollection* System::Array::i___System__Collections__ICollection() noexcept {
  return static_cast<::System::Collections::ICollection*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::System::Collections::IEnumerable"
constexpr System::Array::operator ::System::Collections::IEnumerable*() noexcept {
  return static_cast<::System::Collections::IEnumerable*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::Collections::IEnumerable"
constexpr ::System::Collections::IEnumerable* System::Array::i___System__Collections__IEnumerable() noexcept {
  return static_cast<::System::Collections::IEnumerable*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::System::Collections::IList"
constexpr System::Array::operator ::System::Collections::IList*() noexcept {
  return static_cast<::System::Collections::IList*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::Collections::IList"
constexpr ::System::Collections::IList* System::Array::i___System__Collections__IList() noexcept {
  return static_cast<::System::Collections::IList*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::System::Collections::IStructuralComparable"
constexpr System::Array::operator ::System::Collections::IStructuralComparable*() noexcept {
  return static_cast<::System::Collections::IStructuralComparable*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::Collections::IStructuralComparable"
constexpr ::System::Collections::IStructuralComparable* System::Array::i___System__Collections__IStructuralComparable() noexcept {
  return static_cast<::System::Collections::IStructuralComparable*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::System::Collections::IStructuralEquatable"
constexpr System::Array::operator ::System::Collections::IStructuralEquatable*() noexcept {
  return static_cast<::System::Collections::IStructuralEquatable*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::Collections::IStructuralEquatable"
constexpr ::System::Collections::IStructuralEquatable* System::Array::i___System__Collections__IStructuralEquatable() noexcept {
  return static_cast<::System::Collections::IStructuralEquatable*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::System::ICloneable"
constexpr System::Array::operator ::System::ICloneable*() noexcept {
  return static_cast<::System::ICloneable*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::ICloneable"
constexpr ::System::ICloneable* System::Array::i___System__ICloneable() noexcept {
  return static_cast<::System::ICloneable*>(static_cast<void*>(this));
}
// Ctor Parameters []
constexpr ::System::Array::Array() {}
