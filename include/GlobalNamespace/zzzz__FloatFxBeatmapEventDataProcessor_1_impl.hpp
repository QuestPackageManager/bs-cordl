#pragma once
// IWYU pragma private; include "GlobalNamespace/FloatFxBeatmapEventDataProcessor_1.hpp"
#include "GlobalNamespace/zzzz__BeatmapEventDataProcessor_1_impl.hpp"
#include "GlobalNamespace/zzzz__FloatFxBeatmapEventDataProcessor_1_def.hpp"
#include "GlobalNamespace/zzzz__BeatmapDataItem_def.hpp"
#include "System/Collections/Generic/zzzz__LinkedListNode_1_def.hpp"
template <typename T>
inline void
GlobalNamespace::FloatFxBeatmapEventDataProcessor_1<T>::ProcessInsertedEventDataInternal(::System::Collections::Generic::LinkedListNode_1<::GlobalNamespace::BeatmapDataItem*>* insertedNode) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::GlobalNamespace::FloatFxBeatmapEventDataProcessor_1<T>*>(), 6 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, insertedNode);
}
template <typename T>
inline void
GlobalNamespace::FloatFxBeatmapEventDataProcessor_1<T>::ProcessBeforeDeleteEventDataInternal(::System::Collections::Generic::LinkedListNode_1<::GlobalNamespace::BeatmapDataItem*>* nodeToDelete) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::GlobalNamespace::FloatFxBeatmapEventDataProcessor_1<T>*>(), 7 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, nodeToDelete);
}
template <typename T> inline void GlobalNamespace::FloatFxBeatmapEventDataProcessor_1<T>::UpdateByOther(T current, T other) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::GlobalNamespace::FloatFxBeatmapEventDataProcessor_1<T>*>(), 8 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, current, other);
}
template <typename T> inline void GlobalNamespace::FloatFxBeatmapEventDataProcessor_1<T>::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::FloatFxBeatmapEventDataProcessor_1<T>*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
template <typename T> inline ::GlobalNamespace::FloatFxBeatmapEventDataProcessor_1<T>* GlobalNamespace::FloatFxBeatmapEventDataProcessor_1<T>::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::FloatFxBeatmapEventDataProcessor_1<T>*>());
}
// Ctor Parameters []
template <typename T> constexpr ::GlobalNamespace::FloatFxBeatmapEventDataProcessor_1<T>::FloatFxBeatmapEventDataProcessor_1() {}
