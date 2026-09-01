#pragma once
// IWYU pragma private; include "GlobalNamespace\BeatmapObjectsInTimeRowProcessor.hpp"
#include "GlobalNamespace/zzzz__BeatmapDataItem_impl.hpp"
#include "System/Collections/Generic/zzzz__List_1_impl.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "GlobalNamespace/zzzz__BeatmapObjectsInTimeRowProcessor_def.hpp"
#include "GlobalNamespace/zzzz__BeatmapDataItem_def.hpp"
#include "GlobalNamespace/zzzz__BeatmapObjectsInTimeRowProcessor_def.hpp"
#include "GlobalNamespace/zzzz__ColorType_def.hpp"
#include "GlobalNamespace/zzzz__NoteData_def.hpp"
#include "GlobalNamespace/zzzz__SliderData_def.hpp"
#include "System/Collections/Generic/zzzz__Dictionary_2_def.hpp"
#include "System/Collections/Generic/zzzz__IReadOnlyList_1_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
#include "System/zzzz__Action_1_def.hpp"
#include "System/zzzz__Action_2_def.hpp"
#include "System/zzzz__Func_2_def.hpp"
template <typename T> constexpr float_t& GlobalNamespace::BeatmapObjectsInTimeRowProcessor_TimeSliceContainer_1<T>::__cordl_internal_get__time_k__BackingField() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____time_k__BackingField;
}
template <typename T> constexpr float_t const& GlobalNamespace::BeatmapObjectsInTimeRowProcessor_TimeSliceContainer_1<T>::__cordl_internal_get__time_k__BackingField() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____time_k__BackingField;
}
template <typename T> constexpr void GlobalNamespace::BeatmapObjectsInTimeRowProcessor_TimeSliceContainer_1<T>::__cordl_internal_set__time_k__BackingField(float_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____time_k__BackingField = value;
}
template <typename T> constexpr float_t& GlobalNamespace::BeatmapObjectsInTimeRowProcessor_TimeSliceContainer_1<T>::__cordl_internal_get__previousTimeSliceTime_k__BackingField() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____previousTimeSliceTime_k__BackingField;
}
template <typename T> constexpr float_t const& GlobalNamespace::BeatmapObjectsInTimeRowProcessor_TimeSliceContainer_1<T>::__cordl_internal_get__previousTimeSliceTime_k__BackingField() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____previousTimeSliceTime_k__BackingField;
}
template <typename T> constexpr void GlobalNamespace::BeatmapObjectsInTimeRowProcessor_TimeSliceContainer_1<T>::__cordl_internal_set__previousTimeSliceTime_k__BackingField(float_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____previousTimeSliceTime_k__BackingField = value;
}
template <typename T>
constexpr ::System::Action_2<::GlobalNamespace::BeatmapObjectsInTimeRowProcessor_TimeSliceContainer_1<T>*, float_t>*&
GlobalNamespace::BeatmapObjectsInTimeRowProcessor_TimeSliceContainer_1<T>::__cordl_internal_get_didFinishTimeSliceEvent() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___didFinishTimeSliceEvent;
}
template <typename T>
constexpr ::System::Action_2<::GlobalNamespace::BeatmapObjectsInTimeRowProcessor_TimeSliceContainer_1<T>*, float_t>* const&
GlobalNamespace::BeatmapObjectsInTimeRowProcessor_TimeSliceContainer_1<T>::__cordl_internal_get_didFinishTimeSliceEvent() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___didFinishTimeSliceEvent;
}
template <typename T>
constexpr void GlobalNamespace::BeatmapObjectsInTimeRowProcessor_TimeSliceContainer_1<T>::__cordl_internal_set_didFinishTimeSliceEvent(
    ::System::Action_2<::GlobalNamespace::BeatmapObjectsInTimeRowProcessor_TimeSliceContainer_1<T>*, float_t>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___didFinishTimeSliceEvent = value;
}
template <typename T>
constexpr ::System::Action_1<::GlobalNamespace::BeatmapObjectsInTimeRowProcessor_TimeSliceContainer_1<T>*>*&
GlobalNamespace::BeatmapObjectsInTimeRowProcessor_TimeSliceContainer_1<T>::__cordl_internal_get_didStartNewTimeSliceEvent() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___didStartNewTimeSliceEvent;
}
template <typename T>
constexpr ::System::Action_1<::GlobalNamespace::BeatmapObjectsInTimeRowProcessor_TimeSliceContainer_1<T>*>* const&
GlobalNamespace::BeatmapObjectsInTimeRowProcessor_TimeSliceContainer_1<T>::__cordl_internal_get_didStartNewTimeSliceEvent() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___didStartNewTimeSliceEvent;
}
template <typename T>
constexpr void GlobalNamespace::BeatmapObjectsInTimeRowProcessor_TimeSliceContainer_1<T>::__cordl_internal_set_didStartNewTimeSliceEvent(
    ::System::Action_1<::GlobalNamespace::BeatmapObjectsInTimeRowProcessor_TimeSliceContainer_1<T>*>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___didStartNewTimeSliceEvent = value;
}
template <typename T>
constexpr ::System::Action_2<::GlobalNamespace::BeatmapObjectsInTimeRowProcessor_TimeSliceContainer_1<T>*, T>*&
GlobalNamespace::BeatmapObjectsInTimeRowProcessor_TimeSliceContainer_1<T>::__cordl_internal_get_didAddItemEvent() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___didAddItemEvent;
}
template <typename T>
constexpr ::System::Action_2<::GlobalNamespace::BeatmapObjectsInTimeRowProcessor_TimeSliceContainer_1<T>*, T>* const&
GlobalNamespace::BeatmapObjectsInTimeRowProcessor_TimeSliceContainer_1<T>::__cordl_internal_get_didAddItemEvent() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___didAddItemEvent;
}
template <typename T>
constexpr void GlobalNamespace::BeatmapObjectsInTimeRowProcessor_TimeSliceContainer_1<T>::__cordl_internal_set_didAddItemEvent(
    ::System::Action_2<::GlobalNamespace::BeatmapObjectsInTimeRowProcessor_TimeSliceContainer_1<T>*, T>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___didAddItemEvent = value;
}
template <typename T> constexpr ::System::Collections::Generic::List_1<T>*& GlobalNamespace::BeatmapObjectsInTimeRowProcessor_TimeSliceContainer_1<T>::__cordl_internal_get__items() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____items;
}
template <typename T> constexpr ::System::Collections::Generic::List_1<T>* const& GlobalNamespace::BeatmapObjectsInTimeRowProcessor_TimeSliceContainer_1<T>::__cordl_internal_get__items() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____items;
}
template <typename T> constexpr void GlobalNamespace::BeatmapObjectsInTimeRowProcessor_TimeSliceContainer_1<T>::__cordl_internal_set__items(::System::Collections::Generic::List_1<T>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____items = value;
}
template <typename T> inline float_t GlobalNamespace::BeatmapObjectsInTimeRowProcessor_TimeSliceContainer_1<T>::get_time() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::BeatmapObjectsInTimeRowProcessor_TimeSliceContainer_1<T>*>(), { "get_time", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<float_t>(this, ___internal_method);
}
template <typename T> inline void GlobalNamespace::BeatmapObjectsInTimeRowProcessor_TimeSliceContainer_1<T>::set_time(float_t value) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::BeatmapObjectsInTimeRowProcessor_TimeSliceContainer_1<T>*>(), { "set_time", {}, { ::i2c::type_of<float_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
template <typename T> inline float_t GlobalNamespace::BeatmapObjectsInTimeRowProcessor_TimeSliceContainer_1<T>::get_previousTimeSliceTime() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::BeatmapObjectsInTimeRowProcessor_TimeSliceContainer_1<T>*>(), { "get_previousTimeSliceTime", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<float_t>(this, ___internal_method);
}
template <typename T> inline void GlobalNamespace::BeatmapObjectsInTimeRowProcessor_TimeSliceContainer_1<T>::set_previousTimeSliceTime(float_t value) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::BeatmapObjectsInTimeRowProcessor_TimeSliceContainer_1<T>*>(),
                                                                                         { "set_previousTimeSliceTime", {}, { ::i2c::type_of<float_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
template <typename T> inline ::System::Collections::Generic::IReadOnlyList_1<T>* GlobalNamespace::BeatmapObjectsInTimeRowProcessor_TimeSliceContainer_1<T>::get_items() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::BeatmapObjectsInTimeRowProcessor_TimeSliceContainer_1<T>*>(), { "get_items", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::IReadOnlyList_1<T>*>(this, ___internal_method);
}
template <typename T>
inline void GlobalNamespace::BeatmapObjectsInTimeRowProcessor_TimeSliceContainer_1<T>::add_didFinishTimeSliceEvent(
    ::System::Action_2<::GlobalNamespace::BeatmapObjectsInTimeRowProcessor_TimeSliceContainer_1<T>*, float_t>* value) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::GlobalNamespace::BeatmapObjectsInTimeRowProcessor_TimeSliceContainer_1<T>*>(),
                          { "add_didFinishTimeSliceEvent", {}, { ::i2c::type_of<::System::Action_2<::GlobalNamespace::BeatmapObjectsInTimeRowProcessor_TimeSliceContainer_1<T>*, float_t>*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
template <typename T>
inline void GlobalNamespace::BeatmapObjectsInTimeRowProcessor_TimeSliceContainer_1<T>::remove_didFinishTimeSliceEvent(
    ::System::Action_2<::GlobalNamespace::BeatmapObjectsInTimeRowProcessor_TimeSliceContainer_1<T>*, float_t>* value) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::GlobalNamespace::BeatmapObjectsInTimeRowProcessor_TimeSliceContainer_1<T>*>(),
                          { "remove_didFinishTimeSliceEvent", {}, { ::i2c::type_of<::System::Action_2<::GlobalNamespace::BeatmapObjectsInTimeRowProcessor_TimeSliceContainer_1<T>*, float_t>*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
template <typename T>
inline void GlobalNamespace::BeatmapObjectsInTimeRowProcessor_TimeSliceContainer_1<T>::add_didStartNewTimeSliceEvent(
    ::System::Action_1<::GlobalNamespace::BeatmapObjectsInTimeRowProcessor_TimeSliceContainer_1<T>*>* value) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::GlobalNamespace::BeatmapObjectsInTimeRowProcessor_TimeSliceContainer_1<T>*>(),
                          { "add_didStartNewTimeSliceEvent", {}, { ::i2c::type_of<::System::Action_1<::GlobalNamespace::BeatmapObjectsInTimeRowProcessor_TimeSliceContainer_1<T>*>*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
template <typename T>
inline void GlobalNamespace::BeatmapObjectsInTimeRowProcessor_TimeSliceContainer_1<T>::remove_didStartNewTimeSliceEvent(
    ::System::Action_1<::GlobalNamespace::BeatmapObjectsInTimeRowProcessor_TimeSliceContainer_1<T>*>* value) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::GlobalNamespace::BeatmapObjectsInTimeRowProcessor_TimeSliceContainer_1<T>*>(),
                          { "remove_didStartNewTimeSliceEvent", {}, { ::i2c::type_of<::System::Action_1<::GlobalNamespace::BeatmapObjectsInTimeRowProcessor_TimeSliceContainer_1<T>*>*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
template <typename T>
inline void GlobalNamespace::BeatmapObjectsInTimeRowProcessor_TimeSliceContainer_1<T>::add_didAddItemEvent(
    ::System::Action_2<::GlobalNamespace::BeatmapObjectsInTimeRowProcessor_TimeSliceContainer_1<T>*, T>* value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::GlobalNamespace::BeatmapObjectsInTimeRowProcessor_TimeSliceContainer_1<T>*>(),
                                       { "add_didAddItemEvent", {}, { ::i2c::type_of<::System::Action_2<::GlobalNamespace::BeatmapObjectsInTimeRowProcessor_TimeSliceContainer_1<T>*, T>*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
template <typename T>
inline void GlobalNamespace::BeatmapObjectsInTimeRowProcessor_TimeSliceContainer_1<T>::remove_didAddItemEvent(
    ::System::Action_2<::GlobalNamespace::BeatmapObjectsInTimeRowProcessor_TimeSliceContainer_1<T>*, T>* value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::GlobalNamespace::BeatmapObjectsInTimeRowProcessor_TimeSliceContainer_1<T>*>(),
                                       { "remove_didAddItemEvent", {}, { ::i2c::type_of<::System::Action_2<::GlobalNamespace::BeatmapObjectsInTimeRowProcessor_TimeSliceContainer_1<T>*, T>*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
template <typename T> inline void GlobalNamespace::BeatmapObjectsInTimeRowProcessor_TimeSliceContainer_1<T>::_ctor(int32_t capacity) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::BeatmapObjectsInTimeRowProcessor_TimeSliceContainer_1<T>*>(), { ".ctor", {}, { ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, capacity);
}
template <typename T> inline void GlobalNamespace::BeatmapObjectsInTimeRowProcessor_TimeSliceContainer_1<T>::Add(T item) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::BeatmapObjectsInTimeRowProcessor_TimeSliceContainer_1<T>*>(), { "Add", {}, { ::i2c::type_of<T>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, item);
}
template <typename T> inline void GlobalNamespace::BeatmapObjectsInTimeRowProcessor_TimeSliceContainer_1<T>::AddWithoutNotifications(T item) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::GlobalNamespace::BeatmapObjectsInTimeRowProcessor_TimeSliceContainer_1<T>*>(), { "AddWithoutNotifications", {}, { ::i2c::type_of<T>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, item);
}
template <typename T> inline void GlobalNamespace::BeatmapObjectsInTimeRowProcessor_TimeSliceContainer_1<T>::FinishTimeSlice(float_t nextTimeSliceTime) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::GlobalNamespace::BeatmapObjectsInTimeRowProcessor_TimeSliceContainer_1<T>*>(), { "FinishTimeSlice", {}, { ::i2c::type_of<float_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, nextTimeSliceTime);
}
template <typename T> inline void GlobalNamespace::BeatmapObjectsInTimeRowProcessor_TimeSliceContainer_1<T>::StartNewTimeSlice(float_t newSliceTime) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::GlobalNamespace::BeatmapObjectsInTimeRowProcessor_TimeSliceContainer_1<T>*>(), { "StartNewTimeSlice", {}, { ::i2c::type_of<float_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, newSliceTime);
}
template <typename T>
inline ::GlobalNamespace::BeatmapObjectsInTimeRowProcessor_TimeSliceContainer_1<T>* GlobalNamespace::BeatmapObjectsInTimeRowProcessor_TimeSliceContainer_1<T>::New_ctor(int32_t capacity) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::BeatmapObjectsInTimeRowProcessor_TimeSliceContainer_1<T>*>(capacity));
}
// Ctor Parameters []
template <typename T> constexpr ::GlobalNamespace::BeatmapObjectsInTimeRowProcessor_TimeSliceContainer_1<T>::BeatmapObjectsInTimeRowProcessor_TimeSliceContainer_1() {}
//  Writing Method size for method: ::GlobalNamespace::BeatmapObjectsInTimeRowProcessor_SliderTailData._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::BeatmapObjectsInTimeRowProcessor_SliderTailData::*)(::GlobalNamespace::SliderData*)>(
    &::GlobalNamespace::BeatmapObjectsInTimeRowProcessor_SliderTailData::_ctor)> {
  constexpr static std::size_t size = 0x8c;
  constexpr static std::size_t addrs = 0x325edbc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::BeatmapObjectsInTimeRowProcessor_SliderTailData*>(),
                                                                                           { ".ctor", {}, { ::i2c::type_of<::GlobalNamespace::SliderData*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::BeatmapObjectsInTimeRowProcessor_SliderTailData.GetCopy
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::GlobalNamespace::BeatmapDataItem* (::GlobalNamespace::BeatmapObjectsInTimeRowProcessor_SliderTailData::*)()>(
    &::GlobalNamespace::BeatmapObjectsInTimeRowProcessor_SliderTailData::GetCopy)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x32614fc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::GlobalNamespace::BeatmapObjectsInTimeRowProcessor_SliderTailData*>(),
                                                                                          { ::i2c::class_of<::GlobalNamespace::BeatmapObjectsInTimeRowProcessor_SliderTailData*>(), 6 }));
    return ___internal_method;
  }
};
constexpr ::GlobalNamespace::SliderData*& GlobalNamespace::BeatmapObjectsInTimeRowProcessor_SliderTailData::__cordl_internal_get_slider() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___slider;
}
constexpr ::GlobalNamespace::SliderData* const& GlobalNamespace::BeatmapObjectsInTimeRowProcessor_SliderTailData::__cordl_internal_get_slider() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___slider;
}
constexpr void GlobalNamespace::BeatmapObjectsInTimeRowProcessor_SliderTailData::__cordl_internal_set_slider(::GlobalNamespace::SliderData* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___slider = value;
}
inline void GlobalNamespace::BeatmapObjectsInTimeRowProcessor_SliderTailData::_ctor(::GlobalNamespace::SliderData* slider) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::GlobalNamespace::BeatmapObjectsInTimeRowProcessor_SliderTailData*>(), { ".ctor", {}, { ::i2c::type_of<::GlobalNamespace::SliderData*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, slider);
}
inline ::GlobalNamespace::BeatmapDataItem* GlobalNamespace::BeatmapObjectsInTimeRowProcessor_SliderTailData::GetCopy() {
  auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::GlobalNamespace::BeatmapObjectsInTimeRowProcessor_SliderTailData*>(), 6 })));
  return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::BeatmapDataItem*>(this, ___internal_method);
}
inline ::GlobalNamespace::BeatmapObjectsInTimeRowProcessor_SliderTailData* GlobalNamespace::BeatmapObjectsInTimeRowProcessor_SliderTailData::New_ctor(::GlobalNamespace::SliderData* slider) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::BeatmapObjectsInTimeRowProcessor_SliderTailData*>(slider));
}
// Ctor Parameters []
constexpr ::GlobalNamespace::BeatmapObjectsInTimeRowProcessor_SliderTailData::BeatmapObjectsInTimeRowProcessor_SliderTailData() {}
//  Writing Method size for method: ::GlobalNamespace::BeatmapObjectsInTimeRowProcessor___c._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::BeatmapObjectsInTimeRowProcessor___c::*)()>(&::GlobalNamespace::BeatmapObjectsInTimeRowProcessor___c::_ctor)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x3261554;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::BeatmapObjectsInTimeRowProcessor___c*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::BeatmapObjectsInTimeRowProcessor___c._HandleCurrentTimeSliceColorNotesDidFinishTimeSlice_b__17_0
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::GlobalNamespace::BeatmapObjectsInTimeRowProcessor___c::*)(::GlobalNamespace::BeatmapDataItem*)>(
    &::GlobalNamespace::BeatmapObjectsInTimeRowProcessor___c::_HandleCurrentTimeSliceColorNotesDidFinishTimeSlice_b__17_0)> {
  constexpr static std::size_t size = 0xc0;
  constexpr static std::size_t addrs = 0x3261558;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::BeatmapObjectsInTimeRowProcessor___c*>(),
                                                             { "<HandleCurrentTimeSliceColorNotesDidFinishTimeSlice>b__17_0", {}, { ::i2c::type_of<::GlobalNamespace::BeatmapDataItem*>() } })));
    return ___internal_method;
  }
};
inline void GlobalNamespace::BeatmapObjectsInTimeRowProcessor___c::setStaticF___9(::GlobalNamespace::BeatmapObjectsInTimeRowProcessor___c* value) {
  ::cordl_internals::setStaticField<::GlobalNamespace::BeatmapObjectsInTimeRowProcessor___c*, "<>9", ::GlobalNamespace::BeatmapObjectsInTimeRowProcessor___c*>(
      std::forward<::GlobalNamespace::BeatmapObjectsInTimeRowProcessor___c*>(value));
}
inline ::GlobalNamespace::BeatmapObjectsInTimeRowProcessor___c* GlobalNamespace::BeatmapObjectsInTimeRowProcessor___c::getStaticF___9() {
  return ::cordl_internals::getStaticField<::GlobalNamespace::BeatmapObjectsInTimeRowProcessor___c*, "<>9", ::GlobalNamespace::BeatmapObjectsInTimeRowProcessor___c*>();
}
inline void GlobalNamespace::BeatmapObjectsInTimeRowProcessor___c::setStaticF___9__17_0(::System::Func_2<::GlobalNamespace::BeatmapDataItem*, bool>* value) {
  ::cordl_internals::setStaticField<::System::Func_2<::GlobalNamespace::BeatmapDataItem*, bool>*, "<>9__17_0", ::GlobalNamespace::BeatmapObjectsInTimeRowProcessor___c*>(
      std::forward<::System::Func_2<::GlobalNamespace::BeatmapDataItem*, bool>*>(value));
}
inline ::System::Func_2<::GlobalNamespace::BeatmapDataItem*, bool>* GlobalNamespace::BeatmapObjectsInTimeRowProcessor___c::getStaticF___9__17_0() {
  return ::cordl_internals::getStaticField<::System::Func_2<::GlobalNamespace::BeatmapDataItem*, bool>*, "<>9__17_0", ::GlobalNamespace::BeatmapObjectsInTimeRowProcessor___c*>();
}
inline void GlobalNamespace::BeatmapObjectsInTimeRowProcessor___c::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::BeatmapObjectsInTimeRowProcessor___c*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline bool GlobalNamespace::BeatmapObjectsInTimeRowProcessor___c::_HandleCurrentTimeSliceColorNotesDidFinishTimeSlice_b__17_0(::GlobalNamespace::BeatmapDataItem* item) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::BeatmapObjectsInTimeRowProcessor___c*>(),
                                                           { "<HandleCurrentTimeSliceColorNotesDidFinishTimeSlice>b__17_0", {}, { ::i2c::type_of<::GlobalNamespace::BeatmapDataItem*>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, item);
}
inline ::GlobalNamespace::BeatmapObjectsInTimeRowProcessor___c* GlobalNamespace::BeatmapObjectsInTimeRowProcessor___c::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::BeatmapObjectsInTimeRowProcessor___c*>());
}
// Ctor Parameters []
constexpr ::GlobalNamespace::BeatmapObjectsInTimeRowProcessor___c::BeatmapObjectsInTimeRowProcessor___c() {}
//  Writing Method size for method: ::GlobalNamespace::BeatmapObjectsInTimeRowProcessor___c__DisplayClass17_0._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::BeatmapObjectsInTimeRowProcessor___c__DisplayClass17_0::*)()>(
    &::GlobalNamespace::BeatmapObjectsInTimeRowProcessor___c__DisplayClass17_0::_ctor)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x32611f4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::BeatmapObjectsInTimeRowProcessor___c__DisplayClass17_0*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::BeatmapObjectsInTimeRowProcessor___c__DisplayClass17_0._HandleCurrentTimeSliceColorNotesDidFinishTimeSlice_b__1
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::GlobalNamespace::BeatmapObjectsInTimeRowProcessor___c__DisplayClass17_0::*)(::GlobalNamespace::SliderData*)>(
    &::GlobalNamespace::BeatmapObjectsInTimeRowProcessor___c__DisplayClass17_0::_HandleCurrentTimeSliceColorNotesDidFinishTimeSlice_b__1)> {
  constexpr static std::size_t size = 0x8c;
  constexpr static std::size_t addrs = 0x3261618;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::BeatmapObjectsInTimeRowProcessor___c__DisplayClass17_0*>(),
                                                             { "<HandleCurrentTimeSliceColorNotesDidFinishTimeSlice>b__1", {}, { ::i2c::type_of<::GlobalNamespace::SliderData*>() } })));
    return ___internal_method;
  }
};
constexpr float_t& GlobalNamespace::BeatmapObjectsInTimeRowProcessor___c__DisplayClass17_0::__cordl_internal_get_currentTimeSliceTime() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___currentTimeSliceTime;
}
constexpr float_t const& GlobalNamespace::BeatmapObjectsInTimeRowProcessor___c__DisplayClass17_0::__cordl_internal_get_currentTimeSliceTime() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___currentTimeSliceTime;
}
constexpr void GlobalNamespace::BeatmapObjectsInTimeRowProcessor___c__DisplayClass17_0::__cordl_internal_set_currentTimeSliceTime(float_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___currentTimeSliceTime = value;
}
inline void GlobalNamespace::BeatmapObjectsInTimeRowProcessor___c__DisplayClass17_0::_ctor() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::BeatmapObjectsInTimeRowProcessor___c__DisplayClass17_0*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline bool GlobalNamespace::BeatmapObjectsInTimeRowProcessor___c__DisplayClass17_0::_HandleCurrentTimeSliceColorNotesDidFinishTimeSlice_b__1(::GlobalNamespace::SliderData* tail) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::BeatmapObjectsInTimeRowProcessor___c__DisplayClass17_0*>(),
                                                           { "<HandleCurrentTimeSliceColorNotesDidFinishTimeSlice>b__1", {}, { ::i2c::type_of<::GlobalNamespace::SliderData*>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, tail);
}
inline ::GlobalNamespace::BeatmapObjectsInTimeRowProcessor___c__DisplayClass17_0* GlobalNamespace::BeatmapObjectsInTimeRowProcessor___c__DisplayClass17_0::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::BeatmapObjectsInTimeRowProcessor___c__DisplayClass17_0*>());
}
// Ctor Parameters []
constexpr ::GlobalNamespace::BeatmapObjectsInTimeRowProcessor___c__DisplayClass17_0::BeatmapObjectsInTimeRowProcessor___c__DisplayClass17_0() {}
//  Writing Method size for method: ::GlobalNamespace::BeatmapObjectsInTimeRowProcessor._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::BeatmapObjectsInTimeRowProcessor::*)(int32_t)>(&::GlobalNamespace::BeatmapObjectsInTimeRowProcessor::_ctor)> {
  constexpr static std::size_t size = 0x608;
  constexpr static std::size_t addrs = 0x325e118;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::BeatmapObjectsInTimeRowProcessor*>(), { ".ctor", {}, { ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::BeatmapObjectsInTimeRowProcessor.ProcessNote
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::BeatmapObjectsInTimeRowProcessor::*)(::GlobalNamespace::NoteData*)>(
    &::GlobalNamespace::BeatmapObjectsInTimeRowProcessor::ProcessNote)> {
  constexpr static std::size_t size = 0xe8;
  constexpr static std::size_t addrs = 0x325e720;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::BeatmapObjectsInTimeRowProcessor*>(), { "ProcessNote", {}, { ::i2c::type_of<::GlobalNamespace::NoteData*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::BeatmapObjectsInTimeRowProcessor.ProcessSlider
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::BeatmapObjectsInTimeRowProcessor::*)(::GlobalNamespace::SliderData*)>(
    &::GlobalNamespace::BeatmapObjectsInTimeRowProcessor::ProcessSlider)> {
  constexpr static std::size_t size = 0x184;
  constexpr static std::size_t addrs = 0x325e808;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::GlobalNamespace::BeatmapObjectsInTimeRowProcessor*>(), { "ProcessSlider", {}, { ::i2c::type_of<::GlobalNamespace::SliderData*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::BeatmapObjectsInTimeRowProcessor.ProcessAllRemainingData
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::BeatmapObjectsInTimeRowProcessor::*)()>(
    &::GlobalNamespace::BeatmapObjectsInTimeRowProcessor::ProcessAllRemainingData)> {
  constexpr static std::size_t size = 0x1ec;
  constexpr static std::size_t addrs = 0x325e98c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::BeatmapObjectsInTimeRowProcessor*>(), { "ProcessAllRemainingData", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::BeatmapObjectsInTimeRowProcessor.HandleCurrentTimeSliceColorNotesDidAddItem
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::BeatmapObjectsInTimeRowProcessor::*)(
    ::GlobalNamespace::BeatmapObjectsInTimeRowProcessor_TimeSliceContainer_1<::GlobalNamespace::NoteData*>*, ::GlobalNamespace::NoteData*)>(
    &::GlobalNamespace::BeatmapObjectsInTimeRowProcessor::HandleCurrentTimeSliceColorNotesDidAddItem)> {
  constexpr static std::size_t size = 0x70;
  constexpr static std::size_t addrs = 0x325eb78;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::BeatmapObjectsInTimeRowProcessor*>(),
                                                             { "HandleCurrentTimeSliceColorNotesDidAddItem",
                                                               {},
                                                               { ::i2c::type_of<::GlobalNamespace::BeatmapObjectsInTimeRowProcessor_TimeSliceContainer_1<::GlobalNamespace::NoteData*>*>(),
                                                                 ::i2c::type_of<::GlobalNamespace::NoteData*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::BeatmapObjectsInTimeRowProcessor.HandleCurrentNewTimeSliceAllNotesAndSlidersDidStartNewTimeSlice
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<
    static_cast<void (::GlobalNamespace::BeatmapObjectsInTimeRowProcessor::*)(::GlobalNamespace::BeatmapObjectsInTimeRowProcessor_TimeSliceContainer_1<::GlobalNamespace::BeatmapDataItem*>*)>(
        &::GlobalNamespace::BeatmapObjectsInTimeRowProcessor::HandleCurrentNewTimeSliceAllNotesAndSlidersDidStartNewTimeSlice)> {
  constexpr static std::size_t size = 0x1d4;
  constexpr static std::size_t addrs = 0x325ebe8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::BeatmapObjectsInTimeRowProcessor*>(),
                                                { "HandleCurrentNewTimeSliceAllNotesAndSlidersDidStartNewTimeSlice",
                                                  {},
                                                  { ::i2c::type_of<::GlobalNamespace::BeatmapObjectsInTimeRowProcessor_TimeSliceContainer_1<::GlobalNamespace::BeatmapDataItem*>*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::BeatmapObjectsInTimeRowProcessor.HandleCurrentTimeSliceAllNotesAndSlidersDidFinishTimeSlice
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<
    static_cast<void (::GlobalNamespace::BeatmapObjectsInTimeRowProcessor::*)(::GlobalNamespace::BeatmapObjectsInTimeRowProcessor_TimeSliceContainer_1<::GlobalNamespace::BeatmapDataItem*>*, float_t)>(
        &::GlobalNamespace::BeatmapObjectsInTimeRowProcessor::HandleCurrentTimeSliceAllNotesAndSlidersDidFinishTimeSlice)> {
  constexpr static std::size_t size = 0x1be8;
  constexpr static std::size_t addrs = 0x325ee48;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(::i2c::class_of<::GlobalNamespace::BeatmapObjectsInTimeRowProcessor*>(),
                            { "HandleCurrentTimeSliceAllNotesAndSlidersDidFinishTimeSlice",
                              {},
                              { ::i2c::type_of<::GlobalNamespace::BeatmapObjectsInTimeRowProcessor_TimeSliceContainer_1<::GlobalNamespace::BeatmapDataItem*>*>(), ::i2c::type_of<float_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::BeatmapObjectsInTimeRowProcessor.HandleCurrentTimeSliceColorNotesDidFinishTimeSlice
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<
    static_cast<void (::GlobalNamespace::BeatmapObjectsInTimeRowProcessor::*)(::GlobalNamespace::BeatmapObjectsInTimeRowProcessor_TimeSliceContainer_1<::GlobalNamespace::NoteData*>*, float_t)>(
        &::GlobalNamespace::BeatmapObjectsInTimeRowProcessor::HandleCurrentTimeSliceColorNotesDidFinishTimeSlice)> {
  constexpr static std::size_t size = 0x6b0;
  constexpr static std::size_t addrs = 0x3260b44;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(::i2c::class_of<::GlobalNamespace::BeatmapObjectsInTimeRowProcessor*>(),
                            { "HandleCurrentTimeSliceColorNotesDidFinishTimeSlice",
                              {},
                              { ::i2c::type_of<::GlobalNamespace::BeatmapObjectsInTimeRowProcessor_TimeSliceContainer_1<::GlobalNamespace::NoteData*>*>(), ::i2c::type_of<float_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::BeatmapObjectsInTimeRowProcessor.HandlePerColorTypeTimeSliceContainerDidFinishTimeSlice
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<
    static_cast<void (::GlobalNamespace::BeatmapObjectsInTimeRowProcessor::*)(::GlobalNamespace::BeatmapObjectsInTimeRowProcessor_TimeSliceContainer_1<::GlobalNamespace::NoteData*>*, float_t)>(
        &::GlobalNamespace::BeatmapObjectsInTimeRowProcessor::HandlePerColorTypeTimeSliceContainerDidFinishTimeSlice)> {
  constexpr static std::size_t size = 0x2d0;
  constexpr static std::size_t addrs = 0x32611f8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(::i2c::class_of<::GlobalNamespace::BeatmapObjectsInTimeRowProcessor*>(),
                            { "HandlePerColorTypeTimeSliceContainerDidFinishTimeSlice",
                              {},
                              { ::i2c::type_of<::GlobalNamespace::BeatmapObjectsInTimeRowProcessor_TimeSliceContainer_1<::GlobalNamespace::NoteData*>*>(), ::i2c::type_of<float_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::BeatmapObjectsInTimeRowProcessor.SliderHeadPositionOverlapsWithNote
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::GlobalNamespace::SliderData*, ::GlobalNamespace::NoteData*)>(
    &::GlobalNamespace::BeatmapObjectsInTimeRowProcessor::SliderHeadPositionOverlapsWithNote)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0x3260a30;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::BeatmapObjectsInTimeRowProcessor*>(),
                                                { "SliderHeadPositionOverlapsWithNote", {}, { ::i2c::type_of<::GlobalNamespace::SliderData*>(), ::i2c::type_of<::GlobalNamespace::NoteData*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::BeatmapObjectsInTimeRowProcessor.SliderHeadPositionOverlapsWithSliderTail
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::GlobalNamespace::SliderData*, ::GlobalNamespace::SliderData*)>(
    &::GlobalNamespace::BeatmapObjectsInTimeRowProcessor::SliderHeadPositionOverlapsWithSliderTail)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0x3260a70;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::GlobalNamespace::BeatmapObjectsInTimeRowProcessor*>(),
                                         { "SliderHeadPositionOverlapsWithSliderTail", {}, { ::i2c::type_of<::GlobalNamespace::SliderData*>(), ::i2c::type_of<::GlobalNamespace::SliderData*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::BeatmapObjectsInTimeRowProcessor.SliderTailPositionOverlapsWithNote
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::GlobalNamespace::SliderData*, ::GlobalNamespace::NoteData*)>(
    &::GlobalNamespace::BeatmapObjectsInTimeRowProcessor::SliderTailPositionOverlapsWithNote)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0x3260b04;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::BeatmapObjectsInTimeRowProcessor*>(),
                                                { "SliderTailPositionOverlapsWithNote", {}, { ::i2c::type_of<::GlobalNamespace::SliderData*>(), ::i2c::type_of<::GlobalNamespace::NoteData*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::BeatmapObjectsInTimeRowProcessor.SliderHeadPositionOverlapsWithBurstTail
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::GlobalNamespace::SliderData*, ::GlobalNamespace::SliderData*)>(
    &::GlobalNamespace::BeatmapObjectsInTimeRowProcessor::SliderHeadPositionOverlapsWithBurstTail)> {
  constexpr static std::size_t size = 0x54;
  constexpr static std::size_t addrs = 0x3260ab0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::GlobalNamespace::BeatmapObjectsInTimeRowProcessor*>(),
                                         { "SliderHeadPositionOverlapsWithBurstTail", {}, { ::i2c::type_of<::GlobalNamespace::SliderData*>(), ::i2c::type_of<::GlobalNamespace::SliderData*>() } })));
    return ___internal_method;
  }
};
constexpr ::GlobalNamespace::BeatmapObjectsInTimeRowProcessor_TimeSliceContainer_1<::GlobalNamespace::NoteData*>*&
GlobalNamespace::BeatmapObjectsInTimeRowProcessor::__cordl_internal_get__currentTimeSliceColorNotes() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____currentTimeSliceColorNotes;
}
constexpr ::GlobalNamespace::BeatmapObjectsInTimeRowProcessor_TimeSliceContainer_1<::GlobalNamespace::NoteData*>* const&
GlobalNamespace::BeatmapObjectsInTimeRowProcessor::__cordl_internal_get__currentTimeSliceColorNotes() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____currentTimeSliceColorNotes;
}
constexpr void GlobalNamespace::BeatmapObjectsInTimeRowProcessor::__cordl_internal_set__currentTimeSliceColorNotes(
    ::GlobalNamespace::BeatmapObjectsInTimeRowProcessor_TimeSliceContainer_1<::GlobalNamespace::NoteData*>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____currentTimeSliceColorNotes = value;
}
constexpr ::GlobalNamespace::BeatmapObjectsInTimeRowProcessor_TimeSliceContainer_1<::GlobalNamespace::BeatmapDataItem*>*&
GlobalNamespace::BeatmapObjectsInTimeRowProcessor::__cordl_internal_get__currentTimeSliceAllNotesAndSliders() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____currentTimeSliceAllNotesAndSliders;
}
constexpr ::GlobalNamespace::BeatmapObjectsInTimeRowProcessor_TimeSliceContainer_1<::GlobalNamespace::BeatmapDataItem*>* const&
GlobalNamespace::BeatmapObjectsInTimeRowProcessor::__cordl_internal_get__currentTimeSliceAllNotesAndSliders() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____currentTimeSliceAllNotesAndSliders;
}
constexpr void GlobalNamespace::BeatmapObjectsInTimeRowProcessor::__cordl_internal_set__currentTimeSliceAllNotesAndSliders(
    ::GlobalNamespace::BeatmapObjectsInTimeRowProcessor_TimeSliceContainer_1<::GlobalNamespace::BeatmapDataItem*>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____currentTimeSliceAllNotesAndSliders = value;
}
constexpr ::System::Collections::Generic::Dictionary_2<::GlobalNamespace::ColorType, ::GlobalNamespace::BeatmapObjectsInTimeRowProcessor_TimeSliceContainer_1<::GlobalNamespace::NoteData*>*>*&
GlobalNamespace::BeatmapObjectsInTimeRowProcessor::__cordl_internal_get__currentTimeSliceNotesByColorType() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____currentTimeSliceNotesByColorType;
}
constexpr ::System::Collections::Generic::Dictionary_2<::GlobalNamespace::ColorType, ::GlobalNamespace::BeatmapObjectsInTimeRowProcessor_TimeSliceContainer_1<::GlobalNamespace::NoteData*>*>* const&
GlobalNamespace::BeatmapObjectsInTimeRowProcessor::__cordl_internal_get__currentTimeSliceNotesByColorType() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____currentTimeSliceNotesByColorType;
}
constexpr void GlobalNamespace::BeatmapObjectsInTimeRowProcessor::__cordl_internal_set__currentTimeSliceNotesByColorType(
    ::System::Collections::Generic::Dictionary_2<::GlobalNamespace::ColorType, ::GlobalNamespace::BeatmapObjectsInTimeRowProcessor_TimeSliceContainer_1<::GlobalNamespace::NoteData*>*>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____currentTimeSliceNotesByColorType = value;
}
constexpr ::System::Collections::Generic::List_1<::GlobalNamespace::SliderData*>*& GlobalNamespace::BeatmapObjectsInTimeRowProcessor::__cordl_internal_get__unprocessedSliderTails() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____unprocessedSliderTails;
}
constexpr ::System::Collections::Generic::List_1<::GlobalNamespace::SliderData*>* const& GlobalNamespace::BeatmapObjectsInTimeRowProcessor::__cordl_internal_get__unprocessedSliderTails() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____unprocessedSliderTails;
}
constexpr void GlobalNamespace::BeatmapObjectsInTimeRowProcessor::__cordl_internal_set__unprocessedSliderTails(::System::Collections::Generic::List_1<::GlobalNamespace::SliderData*>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____unprocessedSliderTails = value;
}
constexpr ::ArrayW<::System::Collections::Generic::List_1<::GlobalNamespace::NoteData*>*>&
GlobalNamespace::BeatmapObjectsInTimeRowProcessor::__cordl_internal_get__notesInColumnsReusableProcessingListOfLists() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____notesInColumnsReusableProcessingListOfLists;
}
constexpr ::ArrayW<::System::Collections::Generic::List_1<::GlobalNamespace::NoteData*>*> const&
GlobalNamespace::BeatmapObjectsInTimeRowProcessor::__cordl_internal_get__notesInColumnsReusableProcessingListOfLists() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____notesInColumnsReusableProcessingListOfLists;
}
constexpr void GlobalNamespace::BeatmapObjectsInTimeRowProcessor::__cordl_internal_set__notesInColumnsReusableProcessingListOfLists(
    ::ArrayW<::System::Collections::Generic::List_1<::GlobalNamespace::NoteData*>*> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____notesInColumnsReusableProcessingListOfLists = value;
}
constexpr int32_t& GlobalNamespace::BeatmapObjectsInTimeRowProcessor::__cordl_internal_get__numberOfLines() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____numberOfLines;
}
constexpr int32_t const& GlobalNamespace::BeatmapObjectsInTimeRowProcessor::__cordl_internal_get__numberOfLines() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____numberOfLines;
}
constexpr void GlobalNamespace::BeatmapObjectsInTimeRowProcessor::__cordl_internal_set__numberOfLines(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____numberOfLines = value;
}
inline void GlobalNamespace::BeatmapObjectsInTimeRowProcessor::_ctor(int32_t numberOfLines) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::BeatmapObjectsInTimeRowProcessor*>(), { ".ctor", {}, { ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, numberOfLines);
}
inline void GlobalNamespace::BeatmapObjectsInTimeRowProcessor::ProcessNote(::GlobalNamespace::NoteData* noteData) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::BeatmapObjectsInTimeRowProcessor*>(), { "ProcessNote", {}, { ::i2c::type_of<::GlobalNamespace::NoteData*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, noteData);
}
inline void GlobalNamespace::BeatmapObjectsInTimeRowProcessor::ProcessSlider(::GlobalNamespace::SliderData* sliderData) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::BeatmapObjectsInTimeRowProcessor*>(), { "ProcessSlider", {}, { ::i2c::type_of<::GlobalNamespace::SliderData*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, sliderData);
}
inline void GlobalNamespace::BeatmapObjectsInTimeRowProcessor::ProcessAllRemainingData() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::BeatmapObjectsInTimeRowProcessor*>(), { "ProcessAllRemainingData", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::BeatmapObjectsInTimeRowProcessor::HandleCurrentTimeSliceColorNotesDidAddItem(
    ::GlobalNamespace::BeatmapObjectsInTimeRowProcessor_TimeSliceContainer_1<::GlobalNamespace::NoteData*>* timeSliceContainer, ::GlobalNamespace::NoteData* noteData) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::BeatmapObjectsInTimeRowProcessor*>(),
                                                           { "HandleCurrentTimeSliceColorNotesDidAddItem",
                                                             {},
                                                             { ::i2c::type_of<::GlobalNamespace::BeatmapObjectsInTimeRowProcessor_TimeSliceContainer_1<::GlobalNamespace::NoteData*>*>(),
                                                               ::i2c::type_of<::GlobalNamespace::NoteData*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, timeSliceContainer, noteData);
}
inline void GlobalNamespace::BeatmapObjectsInTimeRowProcessor::HandleCurrentNewTimeSliceAllNotesAndSlidersDidStartNewTimeSlice(
    ::GlobalNamespace::BeatmapObjectsInTimeRowProcessor_TimeSliceContainer_1<::GlobalNamespace::BeatmapDataItem*>* allObjectsTimeSlice) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::BeatmapObjectsInTimeRowProcessor*>(),
                                                           { "HandleCurrentNewTimeSliceAllNotesAndSlidersDidStartNewTimeSlice",
                                                             {},
                                                             { ::i2c::type_of<::GlobalNamespace::BeatmapObjectsInTimeRowProcessor_TimeSliceContainer_1<::GlobalNamespace::BeatmapDataItem*>*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, allObjectsTimeSlice);
}
inline void GlobalNamespace::BeatmapObjectsInTimeRowProcessor::HandleCurrentTimeSliceAllNotesAndSlidersDidFinishTimeSlice(
    ::GlobalNamespace::BeatmapObjectsInTimeRowProcessor_TimeSliceContainer_1<::GlobalNamespace::BeatmapDataItem*>* allObjectsTimeSlice, float_t nextTimeSliceTime) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::GlobalNamespace::BeatmapObjectsInTimeRowProcessor*>(),
                          { "HandleCurrentTimeSliceAllNotesAndSlidersDidFinishTimeSlice",
                            {},
                            { ::i2c::type_of<::GlobalNamespace::BeatmapObjectsInTimeRowProcessor_TimeSliceContainer_1<::GlobalNamespace::BeatmapDataItem*>*>(), ::i2c::type_of<float_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, allObjectsTimeSlice, nextTimeSliceTime);
}
inline void GlobalNamespace::BeatmapObjectsInTimeRowProcessor::HandleCurrentTimeSliceColorNotesDidFinishTimeSlice(
    ::GlobalNamespace::BeatmapObjectsInTimeRowProcessor_TimeSliceContainer_1<::GlobalNamespace::NoteData*>* currentTimeSlice, float_t nextTimeSliceTime) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::GlobalNamespace::BeatmapObjectsInTimeRowProcessor*>(),
                                       { "HandleCurrentTimeSliceColorNotesDidFinishTimeSlice",
                                         {},
                                         { ::i2c::type_of<::GlobalNamespace::BeatmapObjectsInTimeRowProcessor_TimeSliceContainer_1<::GlobalNamespace::NoteData*>*>(), ::i2c::type_of<float_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, currentTimeSlice, nextTimeSliceTime);
}
inline void GlobalNamespace::BeatmapObjectsInTimeRowProcessor::HandlePerColorTypeTimeSliceContainerDidFinishTimeSlice(
    ::GlobalNamespace::BeatmapObjectsInTimeRowProcessor_TimeSliceContainer_1<::GlobalNamespace::NoteData*>* timeSliceContainer, float_t nextTimeSliceTime) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::GlobalNamespace::BeatmapObjectsInTimeRowProcessor*>(),
                                       { "HandlePerColorTypeTimeSliceContainerDidFinishTimeSlice",
                                         {},
                                         { ::i2c::type_of<::GlobalNamespace::BeatmapObjectsInTimeRowProcessor_TimeSliceContainer_1<::GlobalNamespace::NoteData*>*>(), ::i2c::type_of<float_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, timeSliceContainer, nextTimeSliceTime);
}
inline bool GlobalNamespace::BeatmapObjectsInTimeRowProcessor::SliderHeadPositionOverlapsWithNote(::GlobalNamespace::SliderData* slider, ::GlobalNamespace::NoteData* note) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::BeatmapObjectsInTimeRowProcessor*>(),
                                              { "SliderHeadPositionOverlapsWithNote", {}, { ::i2c::type_of<::GlobalNamespace::SliderData*>(), ::i2c::type_of<::GlobalNamespace::NoteData*>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, slider, note);
}
inline bool GlobalNamespace::BeatmapObjectsInTimeRowProcessor::SliderHeadPositionOverlapsWithSliderTail(::GlobalNamespace::SliderData* headSlider, ::GlobalNamespace::SliderData* tailSlider) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::GlobalNamespace::BeatmapObjectsInTimeRowProcessor*>(),
                                       { "SliderHeadPositionOverlapsWithSliderTail", {}, { ::i2c::type_of<::GlobalNamespace::SliderData*>(), ::i2c::type_of<::GlobalNamespace::SliderData*>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, headSlider, tailSlider);
}
inline bool GlobalNamespace::BeatmapObjectsInTimeRowProcessor::SliderTailPositionOverlapsWithNote(::GlobalNamespace::SliderData* slider, ::GlobalNamespace::NoteData* note) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::BeatmapObjectsInTimeRowProcessor*>(),
                                              { "SliderTailPositionOverlapsWithNote", {}, { ::i2c::type_of<::GlobalNamespace::SliderData*>(), ::i2c::type_of<::GlobalNamespace::NoteData*>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, slider, note);
}
inline bool GlobalNamespace::BeatmapObjectsInTimeRowProcessor::SliderHeadPositionOverlapsWithBurstTail(::GlobalNamespace::SliderData* slider, ::GlobalNamespace::SliderData* sliderTail) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::GlobalNamespace::BeatmapObjectsInTimeRowProcessor*>(),
                                       { "SliderHeadPositionOverlapsWithBurstTail", {}, { ::i2c::type_of<::GlobalNamespace::SliderData*>(), ::i2c::type_of<::GlobalNamespace::SliderData*>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, slider, sliderTail);
}
inline ::GlobalNamespace::BeatmapObjectsInTimeRowProcessor* GlobalNamespace::BeatmapObjectsInTimeRowProcessor::New_ctor(int32_t numberOfLines) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::BeatmapObjectsInTimeRowProcessor*>(numberOfLines));
}
// Ctor Parameters []
constexpr ::GlobalNamespace::BeatmapObjectsInTimeRowProcessor::BeatmapObjectsInTimeRowProcessor() {}
