#pragma once
// IWYU pragma private; include "BeatmapSaveDataVersion3\EventBoxGroup_1.hpp"
#include "BeatmapSaveDataVersion3/zzzz__EventBoxGroup_impl.hpp"
#include "BeatmapSaveDataVersion3/zzzz__EventBoxGroup_1_def.hpp"
#include "BeatmapSaveDataVersion3/zzzz__EventBox_def.hpp"
#include "System/Collections/Generic/zzzz__IReadOnlyList_1_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
template <typename T> constexpr ::System::Collections::Generic::List_1<T>*& BeatmapSaveDataVersion3::EventBoxGroup_1<T>::__cordl_internal_get_e() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___e;
}
template <typename T> constexpr ::System::Collections::Generic::List_1<T>* const& BeatmapSaveDataVersion3::EventBoxGroup_1<T>::__cordl_internal_get_e() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___e;
}
template <typename T> constexpr void BeatmapSaveDataVersion3::EventBoxGroup_1<T>::__cordl_internal_set_e(::System::Collections::Generic::List_1<T>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___e = value;
}
template <typename T> inline ::System::Collections::Generic::IReadOnlyList_1<::BeatmapSaveDataVersion3::EventBox*>* BeatmapSaveDataVersion3::EventBoxGroup_1<T>::get_baseEventBoxes() {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::BeatmapSaveDataVersion3::EventBoxGroup_1<T>*>(), 7 })));
  return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::IReadOnlyList_1<::BeatmapSaveDataVersion3::EventBox*>*>(this, ___internal_method);
}
template <typename T> inline ::System::Collections::Generic::IReadOnlyList_1<T>* BeatmapSaveDataVersion3::EventBoxGroup_1<T>::get_eventBoxes() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::BeatmapSaveDataVersion3::EventBoxGroup_1<T>*>(), { "get_eventBoxes", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::IReadOnlyList_1<T>*>(this, ___internal_method);
}
template <typename T> inline void BeatmapSaveDataVersion3::EventBoxGroup_1<T>::_ctor(float_t beat, int32_t groupId, ::System::Collections::Generic::List_1<T>* eventBoxes) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::BeatmapSaveDataVersion3::EventBoxGroup_1<T>*>(),
                                                           { ".ctor", {}, { ::i2c::type_of<float_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::System::Collections::Generic::List_1<T>*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, beat, groupId, eventBoxes);
}
template <typename T>
inline ::BeatmapSaveDataVersion3::EventBoxGroup_1<T>* BeatmapSaveDataVersion3::EventBoxGroup_1<T>::New_ctor(float_t beat, int32_t groupId, ::System::Collections::Generic::List_1<T>* eventBoxes) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::BeatmapSaveDataVersion3::EventBoxGroup_1<T>*>(beat, groupId, eventBoxes));
}
// Ctor Parameters []
template <typename T> constexpr ::BeatmapSaveDataVersion3::EventBoxGroup_1<T>::EventBoxGroup_1() {}
