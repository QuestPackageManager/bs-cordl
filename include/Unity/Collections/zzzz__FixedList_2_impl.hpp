#pragma once
// IWYU pragma private; include "Unity\Collections\FixedList_2.hpp"
#include "Unity/Collections/zzzz__FixedList_2_def.hpp"
#include "System/Collections/Generic/zzzz__IEnumerable_1_def.hpp"
#include "Unity/Collections/zzzz__AllocatorManager_def.hpp"
#include "Unity/Collections/zzzz__IIndexable_1_def.hpp"
#include "Unity/Collections/zzzz__INativeList_1_def.hpp"
#include "Unity/Collections/zzzz__NativeArray_1_def.hpp"
template <typename T, typename U> inline uint16_t Unity::Collections::FixedList_2<T, U>::get_length() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Collections::FixedList_2<T, U>>(), { "get_length", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<uint16_t>(*this, ___internal_method);
}
template <typename T, typename U> inline void Unity::Collections::FixedList_2<T, U>::set_length(uint16_t value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Collections::FixedList_2<T, U>>(), { "set_length", {}, { ::i2c::type_of<uint16_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, value);
}
template <typename T, typename U> inline uint8_t* Unity::Collections::FixedList_2<T, U>::get_buffer() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Collections::FixedList_2<T, U>>(), { "get_buffer", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<uint8_t*>(*this, ___internal_method);
}
template <typename T, typename U> inline int32_t Unity::Collections::FixedList_2<T, U>::get_Length() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Collections::FixedList_2<T, U>>(), { "get_Length", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(*this, ___internal_method);
}
template <typename T, typename U> inline void Unity::Collections::FixedList_2<T, U>::set_Length(int32_t value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Collections::FixedList_2<T, U>>(), { "set_Length", {}, { ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, value);
}
template <typename T, typename U> inline ::System::Collections::Generic::IEnumerable_1<T>* Unity::Collections::FixedList_2<T, U>::get_Elements() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Collections::FixedList_2<T, U>>(), { "get_Elements", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::IEnumerable_1<T>*>(*this, ___internal_method);
}
template <typename T, typename U> inline bool Unity::Collections::FixedList_2<T, U>::get_IsEmpty() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Collections::FixedList_2<T, U>>(), { "get_IsEmpty", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<bool>(*this, ___internal_method);
}
template <typename T, typename U> inline int32_t Unity::Collections::FixedList_2<T, U>::get_LengthInBytes() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Collections::FixedList_2<T, U>>(), { "get_LengthInBytes", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(*this, ___internal_method);
}
template <typename T, typename U> inline uint8_t* Unity::Collections::FixedList_2<T, U>::get_Buffer() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Collections::FixedList_2<T, U>>(), { "get_Buffer", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<uint8_t*>(*this, ___internal_method);
}
template <typename T, typename U> inline int32_t Unity::Collections::FixedList_2<T, U>::get_Capacity() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Collections::FixedList_2<T, U>>(), { "get_Capacity", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(*this, ___internal_method);
}
template <typename T, typename U> inline void Unity::Collections::FixedList_2<T, U>::set_Capacity(int32_t value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Collections::FixedList_2<T, U>>(), { "set_Capacity", {}, { ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, value);
}
template <typename T, typename U> inline T Unity::Collections::FixedList_2<T, U>::get_Item(int32_t index) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Collections::FixedList_2<T, U>>(), { "get_Item", {}, { ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<T>(*this, ___internal_method, index);
}
template <typename T, typename U> inline void Unity::Collections::FixedList_2<T, U>::set_Item(int32_t index, T value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Collections::FixedList_2<T, U>>(), { "set_Item", {}, { ::i2c::type_of<int32_t>(), ::i2c::type_of<T>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, index, value);
}
template <typename T, typename U> inline ::by_ref<T> Unity::Collections::FixedList_2<T, U>::ElementAt(int32_t index) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Collections::FixedList_2<T, U>>(), { "ElementAt", {}, { ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<::by_ref<T>>(*this, ___internal_method, index);
}
template <typename T, typename U> inline int32_t Unity::Collections::FixedList_2<T, U>::GetHashCode() {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::Unity::Collections::FixedList_2<T, U>>(), 2 })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(*this, ___internal_method);
}
template <typename T, typename U> inline void Unity::Collections::FixedList_2<T, U>::Add(::by_ref<T> item) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Collections::FixedList_2<T, U>>(), { "Add", {}, { ::i2c::type_of<::by_ref<T>>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, item);
}
template <typename T, typename U> inline void Unity::Collections::FixedList_2<T, U>::AddRange(void* ptr, int32_t length) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Collections::FixedList_2<T, U>>(), { "AddRange", {}, { ::i2c::type_of<void*>(), ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, ptr, length);
}
template <typename T, typename U> inline void Unity::Collections::FixedList_2<T, U>::AddNoResize(::by_ref<T> item) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Collections::FixedList_2<T, U>>(), { "AddNoResize", {}, { ::i2c::type_of<::by_ref<T>>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, item);
}
template <typename T, typename U> inline void Unity::Collections::FixedList_2<T, U>::AddRangeNoResize(void* ptr, int32_t length) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Collections::FixedList_2<T, U>>(), { "AddRangeNoResize", {}, { ::i2c::type_of<void*>(), ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, ptr, length);
}
template <typename T, typename U> inline void Unity::Collections::FixedList_2<T, U>::AddReplicate(::by_ref<T> value, int32_t count) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Collections::FixedList_2<T, U>>(), { "AddReplicate", {}, { ::i2c::type_of<::by_ref<T>>(), ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, value, count);
}
template <typename T, typename U> inline void Unity::Collections::FixedList_2<T, U>::Clear() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Collections::FixedList_2<T, U>>(), { "Clear", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method);
}
template <typename T, typename U> inline void Unity::Collections::FixedList_2<T, U>::InsertRangeWithBeginEnd(int32_t begin, int32_t end) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::Unity::Collections::FixedList_2<T, U>>(), { "InsertRangeWithBeginEnd", {}, { ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, begin, end);
}
template <typename T, typename U> inline void Unity::Collections::FixedList_2<T, U>::InsertRange(int32_t index, int32_t count) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Collections::FixedList_2<T, U>>(), { "InsertRange", {}, { ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, index, count);
}
template <typename T, typename U> inline void Unity::Collections::FixedList_2<T, U>::Insert(int32_t index, ::by_ref<T> item) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Collections::FixedList_2<T, U>>(), { "Insert", {}, { ::i2c::type_of<int32_t>(), ::i2c::type_of<::by_ref<T>>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, index, item);
}
template <typename T, typename U> inline void Unity::Collections::FixedList_2<T, U>::RemoveAtSwapBack(int32_t index) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Collections::FixedList_2<T, U>>(), { "RemoveAtSwapBack", {}, { ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, index);
}
template <typename T, typename U> inline void Unity::Collections::FixedList_2<T, U>::RemoveRangeSwapBack(int32_t index, int32_t count) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Collections::FixedList_2<T, U>>(), { "RemoveRangeSwapBack", {}, { ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, index, count);
}
template <typename T, typename U> inline void Unity::Collections::FixedList_2<T, U>::RemoveAt(int32_t index) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Collections::FixedList_2<T, U>>(), { "RemoveAt", {}, { ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, index);
}
template <typename T, typename U> inline void Unity::Collections::FixedList_2<T, U>::RemoveRange(int32_t index, int32_t count) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Collections::FixedList_2<T, U>>(), { "RemoveRange", {}, { ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, index, count);
}
template <typename T, typename U> inline ::ArrayW<T> Unity::Collections::FixedList_2<T, U>::ToArray() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Collections::FixedList_2<T, U>>(), { "ToArray", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::ArrayW<T>>(*this, ___internal_method);
}
template <typename T, typename U> inline ::Unity::Collections::NativeArray_1<T> Unity::Collections::FixedList_2<T, U>::ToNativeArray(::Unity::Collections::AllocatorManager_AllocatorHandle allocator) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Collections::FixedList_2<T, U>>(),
                                                                                         { "ToNativeArray", {}, { ::i2c::type_of<::Unity::Collections::AllocatorManager_AllocatorHandle>() } })));
  return ::cordl_internals::RunMethodRethrow<::Unity::Collections::NativeArray_1<T>>(*this, ___internal_method, allocator);
}
/// @brief Convert operator to "::Unity::Collections::INativeList_1<T>"
template <typename T, typename U> constexpr Unity::Collections::FixedList_2<T, U>::operator ::Unity::Collections::INativeList_1<T>*() {
  return static_cast<::Unity::Collections::INativeList_1<T>*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
/// @brief Convert to "::Unity::Collections::INativeList_1<T>"
template <typename T, typename U> constexpr ::Unity::Collections::INativeList_1<T>* Unity::Collections::FixedList_2<T, U>::i___Unity__Collections__INativeList_1_T_() {
  return static_cast<::Unity::Collections::INativeList_1<T>*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
/// @brief Convert operator to "::Unity::Collections::IIndexable_1<T>"
template <typename T, typename U> constexpr Unity::Collections::FixedList_2<T, U>::operator ::Unity::Collections::IIndexable_1<T>*() {
  return static_cast<::Unity::Collections::IIndexable_1<T>*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
/// @brief Convert to "::Unity::Collections::IIndexable_1<T>"
template <typename T, typename U> constexpr ::Unity::Collections::IIndexable_1<T>* Unity::Collections::FixedList_2<T, U>::i___Unity__Collections__IIndexable_1_T_() {
  return static_cast<::Unity::Collections::IIndexable_1<T>*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
// Ctor Parameters [CppParam { name: "data", ty: "U", modifiers: "", def_value: Some("{}") }]
template <typename T, typename U> constexpr ::Unity::Collections::FixedList_2<T, U>::FixedList_2(U data) noexcept {
  this->data = data;
}
// Ctor Parameters []
template <typename T, typename U> constexpr ::Unity::Collections::FixedList_2<T, U>::FixedList_2() {}
