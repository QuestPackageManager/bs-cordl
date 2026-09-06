#pragma once
// IWYU pragma private; include "GlobalNamespace/BeatmapEventDataProcessor_1.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "GlobalNamespace/zzzz__BeatmapEventDataProcessor_1_def.hpp"
#include "GlobalNamespace/zzzz__BeatmapDataItem_def.hpp"
#include "GlobalNamespace/zzzz__ISortedListItemProcessor_1_def.hpp"
#include "System/Collections/Generic/zzzz__LinkedListNode_1_def.hpp"
template <typename T>
inline void GlobalNamespace::BeatmapEventDataProcessor_1<T>::ProcessInsertedData(::System::Collections::Generic::LinkedListNode_1<::GlobalNamespace::BeatmapDataItem*>* insertedNode) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::BeatmapEventDataProcessor_1<T>*>(),
                                              { "ProcessInsertedData", {}, { ::i2c::type_of<::System::Collections::Generic::LinkedListNode_1<::GlobalNamespace::BeatmapDataItem*>*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, insertedNode);
}
template <typename T>
inline void GlobalNamespace::BeatmapEventDataProcessor_1<T>::ProcessBeforeDeleteData(::System::Collections::Generic::LinkedListNode_1<::GlobalNamespace::BeatmapDataItem*>* nodeToDelete) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::BeatmapEventDataProcessor_1<T>*>(),
                                              { "ProcessBeforeDeleteData", {}, { ::i2c::type_of<::System::Collections::Generic::LinkedListNode_1<::GlobalNamespace::BeatmapDataItem*>*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, nodeToDelete);
}
template <typename T>
inline void GlobalNamespace::BeatmapEventDataProcessor_1<T>::ProcessBeforeDeleteEventDataCommon(::System::Collections::Generic::LinkedListNode_1<::GlobalNamespace::BeatmapDataItem*>* nodeToDelete) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::GlobalNamespace::BeatmapEventDataProcessor_1<T>*>(),
                                       { "ProcessBeforeDeleteEventDataCommon", {}, { ::i2c::type_of<::System::Collections::Generic::LinkedListNode_1<::GlobalNamespace::BeatmapDataItem*>*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, nodeToDelete);
}
template <typename T>
inline void GlobalNamespace::BeatmapEventDataProcessor_1<T>::ProcessInsertedEventDataCommon(::System::Collections::Generic::LinkedListNode_1<::GlobalNamespace::BeatmapDataItem*>* insertedNode) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::BeatmapEventDataProcessor_1<T>*>(),
                                              { "ProcessInsertedEventDataCommon", {}, { ::i2c::type_of<::System::Collections::Generic::LinkedListNode_1<::GlobalNamespace::BeatmapDataItem*>*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, insertedNode);
}
template <typename T>
inline void GlobalNamespace::BeatmapEventDataProcessor_1<T>::ProcessInsertedEventDataInternal(::System::Collections::Generic::LinkedListNode_1<::GlobalNamespace::BeatmapDataItem*>* insertedNode) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::GlobalNamespace::BeatmapEventDataProcessor_1<T>*>(), 6 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, insertedNode);
}
template <typename T>
inline void GlobalNamespace::BeatmapEventDataProcessor_1<T>::ProcessBeforeDeleteEventDataInternal(::System::Collections::Generic::LinkedListNode_1<::GlobalNamespace::BeatmapDataItem*>* nodeToDelete) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::GlobalNamespace::BeatmapEventDataProcessor_1<T>*>(), 7 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, nodeToDelete);
}
template <typename T> inline void GlobalNamespace::BeatmapEventDataProcessor_1<T>::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::BeatmapEventDataProcessor_1<T>*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
template <typename T> inline ::GlobalNamespace::BeatmapEventDataProcessor_1<T>* GlobalNamespace::BeatmapEventDataProcessor_1<T>::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::BeatmapEventDataProcessor_1<T>*>());
}
/// @brief Convert operator to "::GlobalNamespace::ISortedListItemProcessor_1<::GlobalNamespace::BeatmapDataItem*>"
template <typename T> constexpr GlobalNamespace::BeatmapEventDataProcessor_1<T>::operator ::GlobalNamespace::ISortedListItemProcessor_1<::GlobalNamespace::BeatmapDataItem*>*() noexcept {
  return static_cast<::GlobalNamespace::ISortedListItemProcessor_1<::GlobalNamespace::BeatmapDataItem*>*>(static_cast<void*>(this));
}
/// @brief Convert to "::GlobalNamespace::ISortedListItemProcessor_1<::GlobalNamespace::BeatmapDataItem*>"
template <typename T>
constexpr ::GlobalNamespace::ISortedListItemProcessor_1<::GlobalNamespace::BeatmapDataItem*>*
GlobalNamespace::BeatmapEventDataProcessor_1<T>::i___GlobalNamespace__ISortedListItemProcessor_1___GlobalNamespace__BeatmapDataItem__() noexcept {
  return static_cast<::GlobalNamespace::ISortedListItemProcessor_1<::GlobalNamespace::BeatmapDataItem*>*>(static_cast<void*>(this));
}
// Ctor Parameters []
template <typename T> constexpr ::GlobalNamespace::BeatmapEventDataProcessor_1<T>::BeatmapEventDataProcessor_1() {}
