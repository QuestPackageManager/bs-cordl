#pragma once
// IWYU pragma private; include "GlobalNamespace/BeatmapObjectsInTimeRowProcessor.hpp"
#include "GlobalNamespace/zzzz__BeatmapDataItem_impl.hpp"
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
  ::cordl_internals::setInstanceField(this, &this->___didFinishTimeSliceEvent, value);
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
  ::cordl_internals::setInstanceField(this, &this->___didStartNewTimeSliceEvent, value);
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
  ::cordl_internals::setInstanceField(this, &this->___didAddItemEvent, value);
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
  ::cordl_internals::setInstanceField(this, &this->____items, value);
}
template <typename T> inline float_t GlobalNamespace::BeatmapObjectsInTimeRowProcessor_TimeSliceContainer_1<T>::get_time() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::BeatmapObjectsInTimeRowProcessor_TimeSliceContainer_1<T>*>::get(), "get_time",
                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<float_t, false>(this, ___internal_method);
}
template <typename T> inline void GlobalNamespace::BeatmapObjectsInTimeRowProcessor_TimeSliceContainer_1<T>::set_time(float_t value) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::BeatmapObjectsInTimeRowProcessor_TimeSliceContainer_1<T>*>::get(), "set_time",
                                               std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
template <typename T> inline float_t GlobalNamespace::BeatmapObjectsInTimeRowProcessor_TimeSliceContainer_1<T>::get_previousTimeSliceTime() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::BeatmapObjectsInTimeRowProcessor_TimeSliceContainer_1<T>*>::get(),
                                               "get_previousTimeSliceTime", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<float_t, false>(this, ___internal_method);
}
template <typename T> inline void GlobalNamespace::BeatmapObjectsInTimeRowProcessor_TimeSliceContainer_1<T>::set_previousTimeSliceTime(float_t value) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::BeatmapObjectsInTimeRowProcessor_TimeSliceContainer_1<T>*>::get(), "set_previousTimeSliceTime",
      std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
template <typename T> inline ::System::Collections::Generic::IReadOnlyList_1<T>* GlobalNamespace::BeatmapObjectsInTimeRowProcessor_TimeSliceContainer_1<T>::get_items() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::BeatmapObjectsInTimeRowProcessor_TimeSliceContainer_1<T>*>::get(), "get_items",
                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::IReadOnlyList_1<T>*, false>(this, ___internal_method);
}
template <typename T>
inline void GlobalNamespace::BeatmapObjectsInTimeRowProcessor_TimeSliceContainer_1<T>::add_didFinishTimeSliceEvent(
    ::System::Action_2<::GlobalNamespace::BeatmapObjectsInTimeRowProcessor_TimeSliceContainer_1<T>*, float_t>* value) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::BeatmapObjectsInTimeRowProcessor_TimeSliceContainer_1<T>*>::get(), "add_didFinishTimeSliceEvent",
      std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action_2<::GlobalNamespace::BeatmapObjectsInTimeRowProcessor_TimeSliceContainer_1<T>*, float_t>*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
template <typename T>
inline void GlobalNamespace::BeatmapObjectsInTimeRowProcessor_TimeSliceContainer_1<T>::remove_didFinishTimeSliceEvent(
    ::System::Action_2<::GlobalNamespace::BeatmapObjectsInTimeRowProcessor_TimeSliceContainer_1<T>*, float_t>* value) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::BeatmapObjectsInTimeRowProcessor_TimeSliceContainer_1<T>*>::get(), "remove_didFinishTimeSliceEvent",
      std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action_2<::GlobalNamespace::BeatmapObjectsInTimeRowProcessor_TimeSliceContainer_1<T>*, float_t>*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
template <typename T>
inline void GlobalNamespace::BeatmapObjectsInTimeRowProcessor_TimeSliceContainer_1<T>::add_didStartNewTimeSliceEvent(
    ::System::Action_1<::GlobalNamespace::BeatmapObjectsInTimeRowProcessor_TimeSliceContainer_1<T>*>* value) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::BeatmapObjectsInTimeRowProcessor_TimeSliceContainer_1<T>*>::get(), "add_didStartNewTimeSliceEvent",
      std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action_1<::GlobalNamespace::BeatmapObjectsInTimeRowProcessor_TimeSliceContainer_1<T>*>*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
template <typename T>
inline void GlobalNamespace::BeatmapObjectsInTimeRowProcessor_TimeSliceContainer_1<T>::remove_didStartNewTimeSliceEvent(
    ::System::Action_1<::GlobalNamespace::BeatmapObjectsInTimeRowProcessor_TimeSliceContainer_1<T>*>* value) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::BeatmapObjectsInTimeRowProcessor_TimeSliceContainer_1<T>*>::get(), "remove_didStartNewTimeSliceEvent",
      std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action_1<::GlobalNamespace::BeatmapObjectsInTimeRowProcessor_TimeSliceContainer_1<T>*>*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
template <typename T>
inline void GlobalNamespace::BeatmapObjectsInTimeRowProcessor_TimeSliceContainer_1<T>::add_didAddItemEvent(
    ::System::Action_2<::GlobalNamespace::BeatmapObjectsInTimeRowProcessor_TimeSliceContainer_1<T>*, T>* value) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::BeatmapObjectsInTimeRowProcessor_TimeSliceContainer_1<T>*>::get(), "add_didAddItemEvent",
      std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action_2<::GlobalNamespace::BeatmapObjectsInTimeRowProcessor_TimeSliceContainer_1<T>*, T>*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
template <typename T>
inline void GlobalNamespace::BeatmapObjectsInTimeRowProcessor_TimeSliceContainer_1<T>::remove_didAddItemEvent(
    ::System::Action_2<::GlobalNamespace::BeatmapObjectsInTimeRowProcessor_TimeSliceContainer_1<T>*, T>* value) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::BeatmapObjectsInTimeRowProcessor_TimeSliceContainer_1<T>*>::get(), "remove_didAddItemEvent",
      std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action_2<::GlobalNamespace::BeatmapObjectsInTimeRowProcessor_TimeSliceContainer_1<T>*, T>*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
template <typename T> inline void GlobalNamespace::BeatmapObjectsInTimeRowProcessor_TimeSliceContainer_1<T>::_ctor(int32_t capacity) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::BeatmapObjectsInTimeRowProcessor_TimeSliceContainer_1<T>*>::get(), ".ctor",
                                               std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, capacity);
}
template <typename T> inline void GlobalNamespace::BeatmapObjectsInTimeRowProcessor_TimeSliceContainer_1<T>::Add(T item) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::BeatmapObjectsInTimeRowProcessor_TimeSliceContainer_1<T>*>::get(), "Add",
                                               std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<T>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, item);
}
template <typename T> inline void GlobalNamespace::BeatmapObjectsInTimeRowProcessor_TimeSliceContainer_1<T>::AddWithoutNotifications(T item) {
  static auto* ___internal_method = THROW_UNLESS((
      ::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::BeatmapObjectsInTimeRowProcessor_TimeSliceContainer_1<T>*>::get(), "AddWithoutNotifications",
                                 std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<T>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, item);
}
template <typename T> inline void GlobalNamespace::BeatmapObjectsInTimeRowProcessor_TimeSliceContainer_1<T>::FinishTimeSlice(float_t nextTimeSliceTime) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::BeatmapObjectsInTimeRowProcessor_TimeSliceContainer_1<T>*>::get(), "FinishTimeSlice",
                                  std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, nextTimeSliceTime);
}
template <typename T> inline void GlobalNamespace::BeatmapObjectsInTimeRowProcessor_TimeSliceContainer_1<T>::StartNewTimeSlice(float_t newSliceTime) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::BeatmapObjectsInTimeRowProcessor_TimeSliceContainer_1<T>*>::get(), "StartNewTimeSlice",
                                  std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, newSliceTime);
}
template <typename T>
inline ::GlobalNamespace::BeatmapObjectsInTimeRowProcessor_TimeSliceContainer_1<T>* GlobalNamespace::BeatmapObjectsInTimeRowProcessor_TimeSliceContainer_1<T>::New_ctor(int32_t capacity) {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::GlobalNamespace::BeatmapObjectsInTimeRowProcessor_TimeSliceContainer_1<T>*>(capacity));
}
// Ctor Parameters []
template <typename T> constexpr ::GlobalNamespace::BeatmapObjectsInTimeRowProcessor_TimeSliceContainer_1<T>::BeatmapObjectsInTimeRowProcessor_TimeSliceContainer_1() {}
//  Writing Method size for method: ::GlobalNamespace::BeatmapObjectsInTimeRowProcessor_SliderTailData._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::BeatmapObjectsInTimeRowProcessor_SliderTailData::*)(::GlobalNamespace::SliderData*)>(
    &::GlobalNamespace::BeatmapObjectsInTimeRowProcessor_SliderTailData::_ctor)> {
  constexpr static std::size_t size = 0x50;
  constexpr static std::size_t addrs = 0x224bc40;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::BeatmapObjectsInTimeRowProcessor_SliderTailData*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::SliderData*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::BeatmapObjectsInTimeRowProcessor_SliderTailData.GetCopy
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::GlobalNamespace::BeatmapDataItem* (::GlobalNamespace::BeatmapObjectsInTimeRowProcessor_SliderTailData::*)()>(
    &::GlobalNamespace::BeatmapObjectsInTimeRowProcessor_SliderTailData::GetCopy)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x224e0d4;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::BeatmapObjectsInTimeRowProcessor_SliderTailData*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::BeatmapObjectsInTimeRowProcessor_SliderTailData*>::get(), 6));
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
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___slider)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline void GlobalNamespace::BeatmapObjectsInTimeRowProcessor_SliderTailData::_ctor(::GlobalNamespace::SliderData* slider) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::BeatmapObjectsInTimeRowProcessor_SliderTailData*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::SliderData*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, slider);
}
inline ::GlobalNamespace::BeatmapDataItem* GlobalNamespace::BeatmapObjectsInTimeRowProcessor_SliderTailData::GetCopy() {
  auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::BeatmapObjectsInTimeRowProcessor_SliderTailData*>::get(), 6)));
  return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::BeatmapDataItem*, false>(this, ___internal_method);
}
inline ::GlobalNamespace::BeatmapObjectsInTimeRowProcessor_SliderTailData* GlobalNamespace::BeatmapObjectsInTimeRowProcessor_SliderTailData::New_ctor(::GlobalNamespace::SliderData* slider) {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::GlobalNamespace::BeatmapObjectsInTimeRowProcessor_SliderTailData*>(slider));
}
// Ctor Parameters []
constexpr ::GlobalNamespace::BeatmapObjectsInTimeRowProcessor_SliderTailData::BeatmapObjectsInTimeRowProcessor_SliderTailData() {}
//  Writing Method size for method: ::GlobalNamespace::BeatmapObjectsInTimeRowProcessor___c._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::BeatmapObjectsInTimeRowProcessor___c::*)()>(
    &::GlobalNamespace::BeatmapObjectsInTimeRowProcessor___c::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x224e134;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::BeatmapObjectsInTimeRowProcessor___c*>::get(),
                                                                               ".ctor", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::BeatmapObjectsInTimeRowProcessor___c._HandleCurrentTimeSliceColorNotesDidFinishTimeSlice_b__17_0
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::GlobalNamespace::BeatmapObjectsInTimeRowProcessor___c::*)(::GlobalNamespace::BeatmapDataItem*)>(
    &::GlobalNamespace::BeatmapObjectsInTimeRowProcessor___c::_HandleCurrentTimeSliceColorNotesDidFinishTimeSlice_b__17_0)> {
  constexpr static std::size_t size = 0xb8;
  constexpr static std::size_t addrs = 0x224e13c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::BeatmapObjectsInTimeRowProcessor___c*>::get(), "<HandleCurrentTimeSliceColorNotesDidFinishTimeSlice>b__17_0",
        std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::BeatmapDataItem*>::get() })));
    return ___internal_method;
  }
};
inline void GlobalNamespace::BeatmapObjectsInTimeRowProcessor___c::setStaticF___9(::GlobalNamespace::BeatmapObjectsInTimeRowProcessor___c* value) {
  ::cordl_internals::setStaticField<::GlobalNamespace::BeatmapObjectsInTimeRowProcessor___c*, "<>9",
                                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::BeatmapObjectsInTimeRowProcessor___c*>::get>(
      std::forward<::GlobalNamespace::BeatmapObjectsInTimeRowProcessor___c*>(value));
}
inline ::GlobalNamespace::BeatmapObjectsInTimeRowProcessor___c* GlobalNamespace::BeatmapObjectsInTimeRowProcessor___c::getStaticF___9() {
  return ::cordl_internals::getStaticField<::GlobalNamespace::BeatmapObjectsInTimeRowProcessor___c*, "<>9",
                                           ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::BeatmapObjectsInTimeRowProcessor___c*>::get>();
}
inline void GlobalNamespace::BeatmapObjectsInTimeRowProcessor___c::setStaticF___9__17_0(::System::Func_2<::GlobalNamespace::BeatmapDataItem*, bool>* value) {
  ::cordl_internals::setStaticField<::System::Func_2<::GlobalNamespace::BeatmapDataItem*, bool>*, "<>9__17_0",
                                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::BeatmapObjectsInTimeRowProcessor___c*>::get>(
      std::forward<::System::Func_2<::GlobalNamespace::BeatmapDataItem*, bool>*>(value));
}
inline ::System::Func_2<::GlobalNamespace::BeatmapDataItem*, bool>* GlobalNamespace::BeatmapObjectsInTimeRowProcessor___c::getStaticF___9__17_0() {
  return ::cordl_internals::getStaticField<::System::Func_2<::GlobalNamespace::BeatmapDataItem*, bool>*, "<>9__17_0",
                                           ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::BeatmapObjectsInTimeRowProcessor___c*>::get>();
}
inline void GlobalNamespace::BeatmapObjectsInTimeRowProcessor___c::_ctor() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::BeatmapObjectsInTimeRowProcessor___c*>::get(),
                                                                             ".ctor", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline bool GlobalNamespace::BeatmapObjectsInTimeRowProcessor___c::_HandleCurrentTimeSliceColorNotesDidFinishTimeSlice_b__17_0(::GlobalNamespace::BeatmapDataItem* item) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::BeatmapObjectsInTimeRowProcessor___c*>::get(), "<HandleCurrentTimeSliceColorNotesDidFinishTimeSlice>b__17_0",
      std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::BeatmapDataItem*>::get() })));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method, item);
}
inline ::GlobalNamespace::BeatmapObjectsInTimeRowProcessor___c* GlobalNamespace::BeatmapObjectsInTimeRowProcessor___c::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::GlobalNamespace::BeatmapObjectsInTimeRowProcessor___c*>());
}
// Ctor Parameters []
constexpr ::GlobalNamespace::BeatmapObjectsInTimeRowProcessor___c::BeatmapObjectsInTimeRowProcessor___c() {}
//  Writing Method size for method: ::GlobalNamespace::BeatmapObjectsInTimeRowProcessor___c__DisplayClass17_0._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::BeatmapObjectsInTimeRowProcessor___c__DisplayClass17_0::*)()>(
    &::GlobalNamespace::BeatmapObjectsInTimeRowProcessor___c__DisplayClass17_0::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x224dd24;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::BeatmapObjectsInTimeRowProcessor___c__DisplayClass17_0*>::get(), ".ctor",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::BeatmapObjectsInTimeRowProcessor___c__DisplayClass17_0._HandleCurrentTimeSliceColorNotesDidFinishTimeSlice_b__1
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::GlobalNamespace::BeatmapObjectsInTimeRowProcessor___c__DisplayClass17_0::*)(::GlobalNamespace::SliderData*)>(
    &::GlobalNamespace::BeatmapObjectsInTimeRowProcessor___c__DisplayClass17_0::_HandleCurrentTimeSliceColorNotesDidFinishTimeSlice_b__1)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x224e1f4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::BeatmapObjectsInTimeRowProcessor___c__DisplayClass17_0*>::get(),
                                                 "<HandleCurrentTimeSliceColorNotesDidFinishTimeSlice>b__1", std::span<Il2CppClass const* const, 0>(),
                                                 ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::SliderData*>::get() })));
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
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::BeatmapObjectsInTimeRowProcessor___c__DisplayClass17_0*>::get(), ".ctor",
                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline bool GlobalNamespace::BeatmapObjectsInTimeRowProcessor___c__DisplayClass17_0::_HandleCurrentTimeSliceColorNotesDidFinishTimeSlice_b__1(::GlobalNamespace::SliderData* tail) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::BeatmapObjectsInTimeRowProcessor___c__DisplayClass17_0*>::get(),
                                               "<HandleCurrentTimeSliceColorNotesDidFinishTimeSlice>b__1", std::span<Il2CppClass const* const, 0>(),
                                               ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::SliderData*>::get() })));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method, tail);
}
inline ::GlobalNamespace::BeatmapObjectsInTimeRowProcessor___c__DisplayClass17_0* GlobalNamespace::BeatmapObjectsInTimeRowProcessor___c__DisplayClass17_0::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::GlobalNamespace::BeatmapObjectsInTimeRowProcessor___c__DisplayClass17_0*>());
}
// Ctor Parameters []
constexpr ::GlobalNamespace::BeatmapObjectsInTimeRowProcessor___c__DisplayClass17_0::BeatmapObjectsInTimeRowProcessor___c__DisplayClass17_0() {}
//  Writing Method size for method: ::GlobalNamespace::BeatmapObjectsInTimeRowProcessor._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::BeatmapObjectsInTimeRowProcessor::*)(int32_t)>(
    &::GlobalNamespace::BeatmapObjectsInTimeRowProcessor::_ctor)> {
  constexpr static std::size_t size = 0x59c;
  constexpr static std::size_t addrs = 0x224b050;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::BeatmapObjectsInTimeRowProcessor*>::get(), ".ctor",
                                    std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::BeatmapObjectsInTimeRowProcessor.ProcessNote
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::BeatmapObjectsInTimeRowProcessor::*)(::GlobalNamespace::NoteData*)>(
    &::GlobalNamespace::BeatmapObjectsInTimeRowProcessor::ProcessNote)> {
  constexpr static std::size_t size = 0xd4;
  constexpr static std::size_t addrs = 0x224b5ec;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::BeatmapObjectsInTimeRowProcessor*>::get(), "ProcessNote", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::NoteData*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::BeatmapObjectsInTimeRowProcessor.ProcessSlider
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::BeatmapObjectsInTimeRowProcessor::*)(::GlobalNamespace::SliderData*)>(
    &::GlobalNamespace::BeatmapObjectsInTimeRowProcessor::ProcessSlider)> {
  constexpr static std::size_t size = 0x170;
  constexpr static std::size_t addrs = 0x224b6c0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::BeatmapObjectsInTimeRowProcessor*>::get(), "ProcessSlider", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::SliderData*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::BeatmapObjectsInTimeRowProcessor.ProcessAllRemainingData
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::BeatmapObjectsInTimeRowProcessor::*)()>(
    &::GlobalNamespace::BeatmapObjectsInTimeRowProcessor::ProcessAllRemainingData)> {
  constexpr static std::size_t size = 0x1fc;
  constexpr static std::size_t addrs = 0x224b830;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::BeatmapObjectsInTimeRowProcessor*>::get(),
                                                                               "ProcessAllRemainingData", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::BeatmapObjectsInTimeRowProcessor.HandleCurrentTimeSliceColorNotesDidAddItem
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::BeatmapObjectsInTimeRowProcessor::*)(
    ::GlobalNamespace::BeatmapObjectsInTimeRowProcessor_TimeSliceContainer_1<::GlobalNamespace::NoteData*>*, ::GlobalNamespace::NoteData*)>(
    &::GlobalNamespace::BeatmapObjectsInTimeRowProcessor::HandleCurrentTimeSliceColorNotesDidAddItem)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x224ba2c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::BeatmapObjectsInTimeRowProcessor*>::get(), "HandleCurrentTimeSliceColorNotesDidAddItem",
        std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 2>{
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::BeatmapObjectsInTimeRowProcessor_TimeSliceContainer_1<::GlobalNamespace::NoteData*>*>::get(),
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::NoteData*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::BeatmapObjectsInTimeRowProcessor.HandleCurrentNewTimeSliceAllNotesAndSlidersDidStartNewTimeSlice
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<void (::GlobalNamespace::BeatmapObjectsInTimeRowProcessor::*)(::GlobalNamespace::BeatmapObjectsInTimeRowProcessor_TimeSliceContainer_1<::GlobalNamespace::BeatmapDataItem*>*)>(
        &::GlobalNamespace::BeatmapObjectsInTimeRowProcessor::HandleCurrentNewTimeSliceAllNotesAndSlidersDidStartNewTimeSlice)> {
  constexpr static std::size_t size = 0x1b4;
  constexpr static std::size_t addrs = 0x224ba8c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::BeatmapObjectsInTimeRowProcessor*>::get(), "HandleCurrentNewTimeSliceAllNotesAndSlidersDidStartNewTimeSlice",
        std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::BeatmapObjectsInTimeRowProcessor_TimeSliceContainer_1<::GlobalNamespace::BeatmapDataItem*>*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::BeatmapObjectsInTimeRowProcessor.HandleCurrentTimeSliceAllNotesAndSlidersDidFinishTimeSlice
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<void (::GlobalNamespace::BeatmapObjectsInTimeRowProcessor::*)(::GlobalNamespace::BeatmapObjectsInTimeRowProcessor_TimeSliceContainer_1<::GlobalNamespace::BeatmapDataItem*>*, float_t)>(
        &::GlobalNamespace::BeatmapObjectsInTimeRowProcessor::HandleCurrentTimeSliceAllNotesAndSlidersDidFinishTimeSlice)> {
  constexpr static std::size_t size = 0x1920;
  constexpr static std::size_t addrs = 0x224bc90;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::BeatmapObjectsInTimeRowProcessor*>::get(), "HandleCurrentTimeSliceAllNotesAndSlidersDidFinishTimeSlice",
        std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 2>{
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::BeatmapObjectsInTimeRowProcessor_TimeSliceContainer_1<::GlobalNamespace::BeatmapDataItem*>*>::get(),
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::BeatmapObjectsInTimeRowProcessor.HandleCurrentTimeSliceColorNotesDidFinishTimeSlice
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<void (::GlobalNamespace::BeatmapObjectsInTimeRowProcessor::*)(::GlobalNamespace::BeatmapObjectsInTimeRowProcessor_TimeSliceContainer_1<::GlobalNamespace::NoteData*>*, float_t)>(
        &::GlobalNamespace::BeatmapObjectsInTimeRowProcessor::HandleCurrentTimeSliceColorNotesDidFinishTimeSlice)> {
  constexpr static std::size_t size = 0x6a0;
  constexpr static std::size_t addrs = 0x224d684;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::BeatmapObjectsInTimeRowProcessor*>::get(), "HandleCurrentTimeSliceColorNotesDidFinishTimeSlice",
        std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 2>{
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::BeatmapObjectsInTimeRowProcessor_TimeSliceContainer_1<::GlobalNamespace::NoteData*>*>::get(),
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::BeatmapObjectsInTimeRowProcessor.HandlePerColorTypeTimeSliceContainerDidFinishTimeSlice
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<void (::GlobalNamespace::BeatmapObjectsInTimeRowProcessor::*)(::GlobalNamespace::BeatmapObjectsInTimeRowProcessor_TimeSliceContainer_1<::GlobalNamespace::NoteData*>*, float_t)>(
        &::GlobalNamespace::BeatmapObjectsInTimeRowProcessor::HandlePerColorTypeTimeSliceContainerDidFinishTimeSlice)> {
  constexpr static std::size_t size = 0x35c;
  constexpr static std::size_t addrs = 0x224dd2c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::BeatmapObjectsInTimeRowProcessor*>::get(), "HandlePerColorTypeTimeSliceContainerDidFinishTimeSlice",
        std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 2>{
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::BeatmapObjectsInTimeRowProcessor_TimeSliceContainer_1<::GlobalNamespace::NoteData*>*>::get(),
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::BeatmapObjectsInTimeRowProcessor.SliderHeadPositionOverlapsWithNote
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)(::GlobalNamespace::SliderData*, ::GlobalNamespace::NoteData*)>(
    &::GlobalNamespace::BeatmapObjectsInTimeRowProcessor::SliderHeadPositionOverlapsWithNote)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0x224d5b0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::BeatmapObjectsInTimeRowProcessor*>::get(),
                                                 "SliderHeadPositionOverlapsWithNote", std::span<Il2CppClass const* const, 0>(),
                                                 ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::SliderData*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::NoteData*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::BeatmapObjectsInTimeRowProcessor.SliderTailPositionOverlapsWithNote
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)(::GlobalNamespace::SliderData*, ::GlobalNamespace::NoteData*)>(
    &::GlobalNamespace::BeatmapObjectsInTimeRowProcessor::SliderTailPositionOverlapsWithNote)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0x224d644;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::BeatmapObjectsInTimeRowProcessor*>::get(),
                                                 "SliderTailPositionOverlapsWithNote", std::span<Il2CppClass const* const, 0>(),
                                                 ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::SliderData*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::NoteData*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::BeatmapObjectsInTimeRowProcessor.SliderHeadPositionOverlapsWithBurstTail
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)(::GlobalNamespace::SliderData*, ::GlobalNamespace::SliderData*)>(
    &::GlobalNamespace::BeatmapObjectsInTimeRowProcessor::SliderHeadPositionOverlapsWithBurstTail)> {
  constexpr static std::size_t size = 0x54;
  constexpr static std::size_t addrs = 0x224d5f0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::BeatmapObjectsInTimeRowProcessor*>::get(),
                                                 "SliderHeadPositionOverlapsWithBurstTail", std::span<Il2CppClass const* const, 0>(),
                                                 ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::SliderData*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::SliderData*>::get() })));
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
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____currentTimeSliceColorNotes)), cordl_internals::convert(std::forward<decltype(value)>(value)));
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
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____currentTimeSliceAllNotesAndSliders)), cordl_internals::convert(std::forward<decltype(value)>(value)));
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
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____currentTimeSliceNotesByColorType)), cordl_internals::convert(std::forward<decltype(value)>(value)));
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
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____unprocessedSliderTails)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::ArrayW<::System::Collections::Generic::List_1<::GlobalNamespace::NoteData*>*, ::Array<::System::Collections::Generic::List_1<::GlobalNamespace::NoteData*>*>*>&
GlobalNamespace::BeatmapObjectsInTimeRowProcessor::__cordl_internal_get__notesInColumnsReusableProcessingListOfLists() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____notesInColumnsReusableProcessingListOfLists;
}
constexpr ::ArrayW<::System::Collections::Generic::List_1<::GlobalNamespace::NoteData*>*, ::Array<::System::Collections::Generic::List_1<::GlobalNamespace::NoteData*>*>*> const&
GlobalNamespace::BeatmapObjectsInTimeRowProcessor::__cordl_internal_get__notesInColumnsReusableProcessingListOfLists() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____notesInColumnsReusableProcessingListOfLists;
}
constexpr void GlobalNamespace::BeatmapObjectsInTimeRowProcessor::__cordl_internal_set__notesInColumnsReusableProcessingListOfLists(
    ::ArrayW<::System::Collections::Generic::List_1<::GlobalNamespace::NoteData*>*, ::Array<::System::Collections::Generic::List_1<::GlobalNamespace::NoteData*>*>*> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____notesInColumnsReusableProcessingListOfLists)),
                                          cordl_internals::convert(std::forward<decltype(value)>(value)));
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
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::BeatmapObjectsInTimeRowProcessor*>::get(), ".ctor",
                                               std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, numberOfLines);
}
inline void GlobalNamespace::BeatmapObjectsInTimeRowProcessor::ProcessNote(::GlobalNamespace::NoteData* noteData) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::BeatmapObjectsInTimeRowProcessor*>::get(), "ProcessNote", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::NoteData*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, noteData);
}
inline void GlobalNamespace::BeatmapObjectsInTimeRowProcessor::ProcessSlider(::GlobalNamespace::SliderData* sliderData) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::BeatmapObjectsInTimeRowProcessor*>::get(), "ProcessSlider", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::SliderData*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, sliderData);
}
inline void GlobalNamespace::BeatmapObjectsInTimeRowProcessor::ProcessAllRemainingData() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::BeatmapObjectsInTimeRowProcessor*>::get(),
                                                                             "ProcessAllRemainingData", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void GlobalNamespace::BeatmapObjectsInTimeRowProcessor::HandleCurrentTimeSliceColorNotesDidAddItem(
    ::GlobalNamespace::BeatmapObjectsInTimeRowProcessor_TimeSliceContainer_1<::GlobalNamespace::NoteData*>* timeSliceContainer, ::GlobalNamespace::NoteData* noteData) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::BeatmapObjectsInTimeRowProcessor*>::get(), "HandleCurrentTimeSliceColorNotesDidAddItem",
      std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::BeatmapObjectsInTimeRowProcessor_TimeSliceContainer_1<::GlobalNamespace::NoteData*>*>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::NoteData*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, timeSliceContainer, noteData);
}
inline void GlobalNamespace::BeatmapObjectsInTimeRowProcessor::HandleCurrentNewTimeSliceAllNotesAndSlidersDidStartNewTimeSlice(
    ::GlobalNamespace::BeatmapObjectsInTimeRowProcessor_TimeSliceContainer_1<::GlobalNamespace::BeatmapDataItem*>* allObjectsTimeSlice) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::BeatmapObjectsInTimeRowProcessor*>::get(), "HandleCurrentNewTimeSliceAllNotesAndSlidersDidStartNewTimeSlice",
      std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::BeatmapObjectsInTimeRowProcessor_TimeSliceContainer_1<::GlobalNamespace::BeatmapDataItem*>*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, allObjectsTimeSlice);
}
inline void GlobalNamespace::BeatmapObjectsInTimeRowProcessor::HandleCurrentTimeSliceAllNotesAndSlidersDidFinishTimeSlice(
    ::GlobalNamespace::BeatmapObjectsInTimeRowProcessor_TimeSliceContainer_1<::GlobalNamespace::BeatmapDataItem*>* allObjectsTimeSlice, float_t nextTimeSliceTime) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::BeatmapObjectsInTimeRowProcessor*>::get(), "HandleCurrentTimeSliceAllNotesAndSlidersDidFinishTimeSlice",
      std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::BeatmapObjectsInTimeRowProcessor_TimeSliceContainer_1<::GlobalNamespace::BeatmapDataItem*>*>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, allObjectsTimeSlice, nextTimeSliceTime);
}
inline void GlobalNamespace::BeatmapObjectsInTimeRowProcessor::HandleCurrentTimeSliceColorNotesDidFinishTimeSlice(
    ::GlobalNamespace::BeatmapObjectsInTimeRowProcessor_TimeSliceContainer_1<::GlobalNamespace::NoteData*>* currentTimeSlice, float_t nextTimeSliceTime) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::BeatmapObjectsInTimeRowProcessor*>::get(), "HandleCurrentTimeSliceColorNotesDidFinishTimeSlice",
      std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::BeatmapObjectsInTimeRowProcessor_TimeSliceContainer_1<::GlobalNamespace::NoteData*>*>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, currentTimeSlice, nextTimeSliceTime);
}
inline void GlobalNamespace::BeatmapObjectsInTimeRowProcessor::HandlePerColorTypeTimeSliceContainerDidFinishTimeSlice(
    ::GlobalNamespace::BeatmapObjectsInTimeRowProcessor_TimeSliceContainer_1<::GlobalNamespace::NoteData*>* timeSliceContainer, float_t nextTimeSliceTime) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::BeatmapObjectsInTimeRowProcessor*>::get(), "HandlePerColorTypeTimeSliceContainerDidFinishTimeSlice",
      std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::BeatmapObjectsInTimeRowProcessor_TimeSliceContainer_1<::GlobalNamespace::NoteData*>*>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, timeSliceContainer, nextTimeSliceTime);
}
inline bool GlobalNamespace::BeatmapObjectsInTimeRowProcessor::SliderHeadPositionOverlapsWithNote(::GlobalNamespace::SliderData* slider, ::GlobalNamespace::NoteData* note) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::BeatmapObjectsInTimeRowProcessor*>::get(),
                                               "SliderHeadPositionOverlapsWithNote", std::span<Il2CppClass const* const, 0>(),
                                               ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::SliderData*>::get(),
                                                                                   ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::NoteData*>::get() })));
  return ::cordl_internals::RunMethodRethrow<bool, false>(nullptr, ___internal_method, slider, note);
}
inline bool GlobalNamespace::BeatmapObjectsInTimeRowProcessor::SliderTailPositionOverlapsWithNote(::GlobalNamespace::SliderData* slider, ::GlobalNamespace::NoteData* note) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::BeatmapObjectsInTimeRowProcessor*>::get(),
                                               "SliderTailPositionOverlapsWithNote", std::span<Il2CppClass const* const, 0>(),
                                               ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::SliderData*>::get(),
                                                                                   ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::NoteData*>::get() })));
  return ::cordl_internals::RunMethodRethrow<bool, false>(nullptr, ___internal_method, slider, note);
}
inline bool GlobalNamespace::BeatmapObjectsInTimeRowProcessor::SliderHeadPositionOverlapsWithBurstTail(::GlobalNamespace::SliderData* slider, ::GlobalNamespace::SliderData* sliderTail) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::BeatmapObjectsInTimeRowProcessor*>::get(),
                                               "SliderHeadPositionOverlapsWithBurstTail", std::span<Il2CppClass const* const, 0>(),
                                               ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::SliderData*>::get(),
                                                                                   ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::SliderData*>::get() })));
  return ::cordl_internals::RunMethodRethrow<bool, false>(nullptr, ___internal_method, slider, sliderTail);
}
inline ::GlobalNamespace::BeatmapObjectsInTimeRowProcessor* GlobalNamespace::BeatmapObjectsInTimeRowProcessor::New_ctor(int32_t numberOfLines) {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::GlobalNamespace::BeatmapObjectsInTimeRowProcessor*>(numberOfLines));
}
// Ctor Parameters []
constexpr ::GlobalNamespace::BeatmapObjectsInTimeRowProcessor::BeatmapObjectsInTimeRowProcessor() {}
