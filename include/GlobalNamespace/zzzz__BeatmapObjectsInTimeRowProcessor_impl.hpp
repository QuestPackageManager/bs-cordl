#pragma once
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
template <typename T> constexpr float_t& GlobalNamespace::__BeatmapObjectsInTimeRowProcessor__TimeSliceContainer_1<T>::__get__time_k__BackingField() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____time_k__BackingField;
}
template <typename T> constexpr float_t const& GlobalNamespace::__BeatmapObjectsInTimeRowProcessor__TimeSliceContainer_1<T>::__get__time_k__BackingField() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____time_k__BackingField;
}
template <typename T> constexpr void GlobalNamespace::__BeatmapObjectsInTimeRowProcessor__TimeSliceContainer_1<T>::__set__time_k__BackingField(float_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____time_k__BackingField = value;
}
template <typename T> constexpr float_t& GlobalNamespace::__BeatmapObjectsInTimeRowProcessor__TimeSliceContainer_1<T>::__get__previousTimeSliceTime_k__BackingField() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____previousTimeSliceTime_k__BackingField;
}
template <typename T> constexpr float_t const& GlobalNamespace::__BeatmapObjectsInTimeRowProcessor__TimeSliceContainer_1<T>::__get__previousTimeSliceTime_k__BackingField() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____previousTimeSliceTime_k__BackingField;
}
template <typename T> constexpr void GlobalNamespace::__BeatmapObjectsInTimeRowProcessor__TimeSliceContainer_1<T>::__set__previousTimeSliceTime_k__BackingField(float_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____previousTimeSliceTime_k__BackingField = value;
}
template <typename T>
constexpr ::System::Action_2<::GlobalNamespace::__BeatmapObjectsInTimeRowProcessor__TimeSliceContainer_1<T>*, float_t>*&
GlobalNamespace::__BeatmapObjectsInTimeRowProcessor__TimeSliceContainer_1<T>::__get_didFinishTimeSliceEvent() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___didFinishTimeSliceEvent;
}
template <typename T>
constexpr ::cordl_internals::to_const_pointer<::System::Action_2<::GlobalNamespace::__BeatmapObjectsInTimeRowProcessor__TimeSliceContainer_1<T>*, float_t>*> const&
GlobalNamespace::__BeatmapObjectsInTimeRowProcessor__TimeSliceContainer_1<T>::__get_didFinishTimeSliceEvent() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___didFinishTimeSliceEvent;
}
template <typename T>
constexpr void GlobalNamespace::__BeatmapObjectsInTimeRowProcessor__TimeSliceContainer_1<T>::__set_didFinishTimeSliceEvent(
    ::System::Action_2<::GlobalNamespace::__BeatmapObjectsInTimeRowProcessor__TimeSliceContainer_1<T>*, float_t>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___didFinishTimeSliceEvent)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
template <typename T>
constexpr ::System::Action_1<::GlobalNamespace::__BeatmapObjectsInTimeRowProcessor__TimeSliceContainer_1<T>*>*&
GlobalNamespace::__BeatmapObjectsInTimeRowProcessor__TimeSliceContainer_1<T>::__get_didStartNewTimeSliceEvent() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___didStartNewTimeSliceEvent;
}
template <typename T>
constexpr ::cordl_internals::to_const_pointer<::System::Action_1<::GlobalNamespace::__BeatmapObjectsInTimeRowProcessor__TimeSliceContainer_1<T>*>*> const&
GlobalNamespace::__BeatmapObjectsInTimeRowProcessor__TimeSliceContainer_1<T>::__get_didStartNewTimeSliceEvent() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___didStartNewTimeSliceEvent;
}
template <typename T>
constexpr void GlobalNamespace::__BeatmapObjectsInTimeRowProcessor__TimeSliceContainer_1<T>::__set_didStartNewTimeSliceEvent(
    ::System::Action_1<::GlobalNamespace::__BeatmapObjectsInTimeRowProcessor__TimeSliceContainer_1<T>*>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___didStartNewTimeSliceEvent)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
template <typename T>
constexpr ::System::Action_2<::GlobalNamespace::__BeatmapObjectsInTimeRowProcessor__TimeSliceContainer_1<T>*, T>*&
GlobalNamespace::__BeatmapObjectsInTimeRowProcessor__TimeSliceContainer_1<T>::__get_didAddItemEvent() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___didAddItemEvent;
}
template <typename T>
constexpr ::cordl_internals::to_const_pointer<::System::Action_2<::GlobalNamespace::__BeatmapObjectsInTimeRowProcessor__TimeSliceContainer_1<T>*, T>*> const&
GlobalNamespace::__BeatmapObjectsInTimeRowProcessor__TimeSliceContainer_1<T>::__get_didAddItemEvent() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___didAddItemEvent;
}
template <typename T>
constexpr void GlobalNamespace::__BeatmapObjectsInTimeRowProcessor__TimeSliceContainer_1<T>::__set_didAddItemEvent(
    ::System::Action_2<::GlobalNamespace::__BeatmapObjectsInTimeRowProcessor__TimeSliceContainer_1<T>*, T>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___didAddItemEvent)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
template <typename T> constexpr ::System::Collections::Generic::List_1<T>*& GlobalNamespace::__BeatmapObjectsInTimeRowProcessor__TimeSliceContainer_1<T>::__get__items() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____items;
}
template <typename T>
constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::List_1<T>*> const& GlobalNamespace::__BeatmapObjectsInTimeRowProcessor__TimeSliceContainer_1<T>::__get__items() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____items;
}
template <typename T> constexpr void GlobalNamespace::__BeatmapObjectsInTimeRowProcessor__TimeSliceContainer_1<T>::__set__items(::System::Collections::Generic::List_1<T>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____items)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
template <typename T> inline float_t GlobalNamespace::__BeatmapObjectsInTimeRowProcessor__TimeSliceContainer_1<T>::get_time() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__BeatmapObjectsInTimeRowProcessor__TimeSliceContainer_1<T>*>::get(),
                                               "get_time", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<float_t, false>(this, ___internal_method);
}
template <typename T> inline void GlobalNamespace::__BeatmapObjectsInTimeRowProcessor__TimeSliceContainer_1<T>::set_time(float_t value) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__BeatmapObjectsInTimeRowProcessor__TimeSliceContainer_1<T>*>::get(),
                                               "set_time", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
template <typename T> inline float_t GlobalNamespace::__BeatmapObjectsInTimeRowProcessor__TimeSliceContainer_1<T>::get_previousTimeSliceTime() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__BeatmapObjectsInTimeRowProcessor__TimeSliceContainer_1<T>*>::get(),
                                               "get_previousTimeSliceTime", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<float_t, false>(this, ___internal_method);
}
template <typename T> inline void GlobalNamespace::__BeatmapObjectsInTimeRowProcessor__TimeSliceContainer_1<T>::set_previousTimeSliceTime(float_t value) {
  static auto* ___internal_method = THROW_UNLESS((
      ::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__BeatmapObjectsInTimeRowProcessor__TimeSliceContainer_1<T>*>::get(),
                                 "set_previousTimeSliceTime", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
template <typename T> inline ::System::Collections::Generic::IReadOnlyList_1<T>* GlobalNamespace::__BeatmapObjectsInTimeRowProcessor__TimeSliceContainer_1<T>::get_items() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__BeatmapObjectsInTimeRowProcessor__TimeSliceContainer_1<T>*>::get(),
                                               "get_items", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::IReadOnlyList_1<T>*, false>(this, ___internal_method);
}
template <typename T>
inline void GlobalNamespace::__BeatmapObjectsInTimeRowProcessor__TimeSliceContainer_1<T>::add_didFinishTimeSliceEvent(
    ::System::Action_2<::GlobalNamespace::__BeatmapObjectsInTimeRowProcessor__TimeSliceContainer_1<T>*, float_t>* value) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__BeatmapObjectsInTimeRowProcessor__TimeSliceContainer_1<T>*>::get(), "add_didFinishTimeSliceEvent",
      std::vector<Il2CppClass*>{},
      ::std::vector<Il2CppType const*>{
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action_2<::GlobalNamespace::__BeatmapObjectsInTimeRowProcessor__TimeSliceContainer_1<T>*, float_t>*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
template <typename T>
inline void GlobalNamespace::__BeatmapObjectsInTimeRowProcessor__TimeSliceContainer_1<T>::remove_didFinishTimeSliceEvent(
    ::System::Action_2<::GlobalNamespace::__BeatmapObjectsInTimeRowProcessor__TimeSliceContainer_1<T>*, float_t>* value) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__BeatmapObjectsInTimeRowProcessor__TimeSliceContainer_1<T>*>::get(), "remove_didFinishTimeSliceEvent",
      std::vector<Il2CppClass*>{},
      ::std::vector<Il2CppType const*>{
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action_2<::GlobalNamespace::__BeatmapObjectsInTimeRowProcessor__TimeSliceContainer_1<T>*, float_t>*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
template <typename T>
inline void GlobalNamespace::__BeatmapObjectsInTimeRowProcessor__TimeSliceContainer_1<T>::add_didStartNewTimeSliceEvent(
    ::System::Action_1<::GlobalNamespace::__BeatmapObjectsInTimeRowProcessor__TimeSliceContainer_1<T>*>* value) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__BeatmapObjectsInTimeRowProcessor__TimeSliceContainer_1<T>*>::get(), "add_didStartNewTimeSliceEvent",
      std::vector<Il2CppClass*>{},
      ::std::vector<Il2CppType const*>{
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action_1<::GlobalNamespace::__BeatmapObjectsInTimeRowProcessor__TimeSliceContainer_1<T>*>*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
template <typename T>
inline void GlobalNamespace::__BeatmapObjectsInTimeRowProcessor__TimeSliceContainer_1<T>::remove_didStartNewTimeSliceEvent(
    ::System::Action_1<::GlobalNamespace::__BeatmapObjectsInTimeRowProcessor__TimeSliceContainer_1<T>*>* value) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__BeatmapObjectsInTimeRowProcessor__TimeSliceContainer_1<T>*>::get(), "remove_didStartNewTimeSliceEvent",
      std::vector<Il2CppClass*>{},
      ::std::vector<Il2CppType const*>{
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action_1<::GlobalNamespace::__BeatmapObjectsInTimeRowProcessor__TimeSliceContainer_1<T>*>*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
template <typename T>
inline void GlobalNamespace::__BeatmapObjectsInTimeRowProcessor__TimeSliceContainer_1<T>::add_didAddItemEvent(
    ::System::Action_2<::GlobalNamespace::__BeatmapObjectsInTimeRowProcessor__TimeSliceContainer_1<T>*, T>* value) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__BeatmapObjectsInTimeRowProcessor__TimeSliceContainer_1<T>*>::get(), "add_didAddItemEvent",
      std::vector<Il2CppClass*>{},
      ::std::vector<Il2CppType const*>{
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action_2<::GlobalNamespace::__BeatmapObjectsInTimeRowProcessor__TimeSliceContainer_1<T>*, T>*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
template <typename T>
inline void GlobalNamespace::__BeatmapObjectsInTimeRowProcessor__TimeSliceContainer_1<T>::remove_didAddItemEvent(
    ::System::Action_2<::GlobalNamespace::__BeatmapObjectsInTimeRowProcessor__TimeSliceContainer_1<T>*, T>* value) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__BeatmapObjectsInTimeRowProcessor__TimeSliceContainer_1<T>*>::get(), "remove_didAddItemEvent",
      std::vector<Il2CppClass*>{},
      ::std::vector<Il2CppType const*>{
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action_2<::GlobalNamespace::__BeatmapObjectsInTimeRowProcessor__TimeSliceContainer_1<T>*, T>*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
template <typename T>
inline ::GlobalNamespace::__BeatmapObjectsInTimeRowProcessor__TimeSliceContainer_1<T>* GlobalNamespace::__BeatmapObjectsInTimeRowProcessor__TimeSliceContainer_1<T>::New_ctor(int32_t capacity) {
  return THROW_UNLESS(::il2cpp_utils::New<::GlobalNamespace::__BeatmapObjectsInTimeRowProcessor__TimeSliceContainer_1<T>*>(capacity));
}
template <typename T> inline void GlobalNamespace::__BeatmapObjectsInTimeRowProcessor__TimeSliceContainer_1<T>::_ctor(int32_t capacity) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__BeatmapObjectsInTimeRowProcessor__TimeSliceContainer_1<T>*>::get(), ".ctor",
                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, capacity);
}
template <typename T> inline void GlobalNamespace::__BeatmapObjectsInTimeRowProcessor__TimeSliceContainer_1<T>::Add(T item) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__BeatmapObjectsInTimeRowProcessor__TimeSliceContainer_1<T>*>::get(), "Add",
                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<T>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, item);
}
template <typename T> inline void GlobalNamespace::__BeatmapObjectsInTimeRowProcessor__TimeSliceContainer_1<T>::AddWithoutNotifications(T item) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__BeatmapObjectsInTimeRowProcessor__TimeSliceContainer_1<T>*>::get(),
                                  "AddWithoutNotifications", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<T>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, item);
}
template <typename T> inline void GlobalNamespace::__BeatmapObjectsInTimeRowProcessor__TimeSliceContainer_1<T>::FinishTimeSlice(float_t nextTimeSliceTime) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__BeatmapObjectsInTimeRowProcessor__TimeSliceContainer_1<T>*>::get(), "FinishTimeSlice",
                                  std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, nextTimeSliceTime);
}
template <typename T> inline void GlobalNamespace::__BeatmapObjectsInTimeRowProcessor__TimeSliceContainer_1<T>::StartNewTimeSlice(float_t newSliceTime) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__BeatmapObjectsInTimeRowProcessor__TimeSliceContainer_1<T>*>::get(), "StartNewTimeSlice",
                                  std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, newSliceTime);
}
// Ctor Parameters []
template <typename T> constexpr ::GlobalNamespace::__BeatmapObjectsInTimeRowProcessor__TimeSliceContainer_1<T>::__BeatmapObjectsInTimeRowProcessor__TimeSliceContainer_1() {}
//  Writing Method size for method: ::GlobalNamespace::__BeatmapObjectsInTimeRowProcessor__SliderTailData._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::__BeatmapObjectsInTimeRowProcessor__SliderTailData::*)(::GlobalNamespace::SliderData*)>(
    &::GlobalNamespace::__BeatmapObjectsInTimeRowProcessor__SliderTailData::_ctor)> {
  constexpr static std::size_t size = 0x50;
  constexpr static std::size_t addrs = 0xe02a1c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__BeatmapObjectsInTimeRowProcessor__SliderTailData*>::get(), ".ctor",
                                    std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::SliderData*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::__BeatmapObjectsInTimeRowProcessor__SliderTailData.GetCopy
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::GlobalNamespace::BeatmapDataItem* (::GlobalNamespace::__BeatmapObjectsInTimeRowProcessor__SliderTailData::*)()>(
    &::GlobalNamespace::__BeatmapObjectsInTimeRowProcessor__SliderTailData::GetCopy)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0xe04ed0;

  inline static const ::MethodInfo* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__BeatmapObjectsInTimeRowProcessor__SliderTailData*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__BeatmapObjectsInTimeRowProcessor__SliderTailData*>::get(), 6));
    return ___internal_method;
  }
};
constexpr ::GlobalNamespace::SliderData*& GlobalNamespace::__BeatmapObjectsInTimeRowProcessor__SliderTailData::__get_slider() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___slider;
}
constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::SliderData*> const& GlobalNamespace::__BeatmapObjectsInTimeRowProcessor__SliderTailData::__get_slider() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___slider;
}
constexpr void GlobalNamespace::__BeatmapObjectsInTimeRowProcessor__SliderTailData::__set_slider(::GlobalNamespace::SliderData* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___slider)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline ::GlobalNamespace::__BeatmapObjectsInTimeRowProcessor__SliderTailData* GlobalNamespace::__BeatmapObjectsInTimeRowProcessor__SliderTailData::New_ctor(::GlobalNamespace::SliderData* slider) {
  return THROW_UNLESS(::il2cpp_utils::New<::GlobalNamespace::__BeatmapObjectsInTimeRowProcessor__SliderTailData*>(slider));
}
inline void GlobalNamespace::__BeatmapObjectsInTimeRowProcessor__SliderTailData::_ctor(::GlobalNamespace::SliderData* slider) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__BeatmapObjectsInTimeRowProcessor__SliderTailData*>::get(), ".ctor",
                                  std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::SliderData*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, slider);
}
inline ::GlobalNamespace::BeatmapDataItem* GlobalNamespace::__BeatmapObjectsInTimeRowProcessor__SliderTailData::GetCopy() {
  auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__BeatmapObjectsInTimeRowProcessor__SliderTailData*>::get(), 6)));
  return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::BeatmapDataItem*, false>(this, ___internal_method);
}
// Ctor Parameters []
constexpr ::GlobalNamespace::__BeatmapObjectsInTimeRowProcessor__SliderTailData::__BeatmapObjectsInTimeRowProcessor__SliderTailData() {}
//  Writing Method size for method: ::GlobalNamespace::__BeatmapObjectsInTimeRowProcessor____c__DisplayClass17_0._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::__BeatmapObjectsInTimeRowProcessor____c__DisplayClass17_0::*)()>(
    &::GlobalNamespace::__BeatmapObjectsInTimeRowProcessor____c__DisplayClass17_0::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xe04b2c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__BeatmapObjectsInTimeRowProcessor____c__DisplayClass17_0*>::get(), ".ctor",
                                                 std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::__BeatmapObjectsInTimeRowProcessor____c__DisplayClass17_0._HandleCurrentTimeSliceColorNotesDidFinishTimeSlice_b__1
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::GlobalNamespace::__BeatmapObjectsInTimeRowProcessor____c__DisplayClass17_0::*)(
    ::GlobalNamespace::SliderData*)>(&::GlobalNamespace::__BeatmapObjectsInTimeRowProcessor____c__DisplayClass17_0::_HandleCurrentTimeSliceColorNotesDidFinishTimeSlice_b__1)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0xe04ed4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__BeatmapObjectsInTimeRowProcessor____c__DisplayClass17_0*>::get(),
                                                 "<HandleCurrentTimeSliceColorNotesDidFinishTimeSlice>b__1", std::vector<Il2CppClass*>{},
                                                 ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::SliderData*>::get() })));
    return ___internal_method;
  }
};
constexpr float_t& GlobalNamespace::__BeatmapObjectsInTimeRowProcessor____c__DisplayClass17_0::__get_currentTimeSliceTime() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___currentTimeSliceTime;
}
constexpr float_t const& GlobalNamespace::__BeatmapObjectsInTimeRowProcessor____c__DisplayClass17_0::__get_currentTimeSliceTime() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___currentTimeSliceTime;
}
constexpr void GlobalNamespace::__BeatmapObjectsInTimeRowProcessor____c__DisplayClass17_0::__set_currentTimeSliceTime(float_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___currentTimeSliceTime = value;
}
inline ::GlobalNamespace::__BeatmapObjectsInTimeRowProcessor____c__DisplayClass17_0* GlobalNamespace::__BeatmapObjectsInTimeRowProcessor____c__DisplayClass17_0::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::New<::GlobalNamespace::__BeatmapObjectsInTimeRowProcessor____c__DisplayClass17_0*>());
}
inline void GlobalNamespace::__BeatmapObjectsInTimeRowProcessor____c__DisplayClass17_0::_ctor() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__BeatmapObjectsInTimeRowProcessor____c__DisplayClass17_0*>::get(), ".ctor",
                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline bool GlobalNamespace::__BeatmapObjectsInTimeRowProcessor____c__DisplayClass17_0::_HandleCurrentTimeSliceColorNotesDidFinishTimeSlice_b__1(::GlobalNamespace::SliderData* tail) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__BeatmapObjectsInTimeRowProcessor____c__DisplayClass17_0*>::get(),
                                               "<HandleCurrentTimeSliceColorNotesDidFinishTimeSlice>b__1", std::vector<Il2CppClass*>{},
                                               ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::SliderData*>::get() })));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method, tail);
}
// Ctor Parameters []
constexpr ::GlobalNamespace::__BeatmapObjectsInTimeRowProcessor____c__DisplayClass17_0::__BeatmapObjectsInTimeRowProcessor____c__DisplayClass17_0() {}
//  Writing Method size for method: ::GlobalNamespace::__BeatmapObjectsInTimeRowProcessor____c._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::__BeatmapObjectsInTimeRowProcessor____c::*)()>(
    &::GlobalNamespace::__BeatmapObjectsInTimeRowProcessor____c::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xe04fb8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__BeatmapObjectsInTimeRowProcessor____c*>::get(), ".ctor",
                                                 std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::__BeatmapObjectsInTimeRowProcessor____c._HandleCurrentTimeSliceColorNotesDidFinishTimeSlice_b__17_0
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::GlobalNamespace::__BeatmapObjectsInTimeRowProcessor____c::*)(::GlobalNamespace::BeatmapDataItem*)>(
    &::GlobalNamespace::__BeatmapObjectsInTimeRowProcessor____c::_HandleCurrentTimeSliceColorNotesDidFinishTimeSlice_b__17_0)> {
  constexpr static std::size_t size = 0xb8;
  constexpr static std::size_t addrs = 0xe04fc0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__BeatmapObjectsInTimeRowProcessor____c*>::get(), "<HandleCurrentTimeSliceColorNotesDidFinishTimeSlice>b__17_0",
        std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::BeatmapDataItem*>::get() })));
    return ___internal_method;
  }
};
inline void GlobalNamespace::__BeatmapObjectsInTimeRowProcessor____c::setStaticF___9(::GlobalNamespace::__BeatmapObjectsInTimeRowProcessor____c* value) {
  ::cordl_internals::setStaticField<::GlobalNamespace::__BeatmapObjectsInTimeRowProcessor____c*, "<>9",
                                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__BeatmapObjectsInTimeRowProcessor____c*>::get>(
      std::forward<::GlobalNamespace::__BeatmapObjectsInTimeRowProcessor____c*>(value));
}
inline ::GlobalNamespace::__BeatmapObjectsInTimeRowProcessor____c* GlobalNamespace::__BeatmapObjectsInTimeRowProcessor____c::getStaticF___9() {
  return ::cordl_internals::getStaticField<::GlobalNamespace::__BeatmapObjectsInTimeRowProcessor____c*, "<>9",
                                           ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__BeatmapObjectsInTimeRowProcessor____c*>::get>();
}
inline void GlobalNamespace::__BeatmapObjectsInTimeRowProcessor____c::setStaticF___9__17_0(::System::Func_2<::GlobalNamespace::BeatmapDataItem*, bool>* value) {
  ::cordl_internals::setStaticField<::System::Func_2<::GlobalNamespace::BeatmapDataItem*, bool>*, "<>9__17_0",
                                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__BeatmapObjectsInTimeRowProcessor____c*>::get>(
      std::forward<::System::Func_2<::GlobalNamespace::BeatmapDataItem*, bool>*>(value));
}
inline ::System::Func_2<::GlobalNamespace::BeatmapDataItem*, bool>* GlobalNamespace::__BeatmapObjectsInTimeRowProcessor____c::getStaticF___9__17_0() {
  return ::cordl_internals::getStaticField<::System::Func_2<::GlobalNamespace::BeatmapDataItem*, bool>*, "<>9__17_0",
                                           ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__BeatmapObjectsInTimeRowProcessor____c*>::get>();
}
inline ::GlobalNamespace::__BeatmapObjectsInTimeRowProcessor____c* GlobalNamespace::__BeatmapObjectsInTimeRowProcessor____c::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::New<::GlobalNamespace::__BeatmapObjectsInTimeRowProcessor____c*>());
}
inline void GlobalNamespace::__BeatmapObjectsInTimeRowProcessor____c::_ctor() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__BeatmapObjectsInTimeRowProcessor____c*>::get(),
                                                                             ".ctor", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline bool GlobalNamespace::__BeatmapObjectsInTimeRowProcessor____c::_HandleCurrentTimeSliceColorNotesDidFinishTimeSlice_b__17_0(::GlobalNamespace::BeatmapDataItem* item) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__BeatmapObjectsInTimeRowProcessor____c*>::get(), "<HandleCurrentTimeSliceColorNotesDidFinishTimeSlice>b__17_0",
      std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::BeatmapDataItem*>::get() })));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method, item);
}
// Ctor Parameters []
constexpr ::GlobalNamespace::__BeatmapObjectsInTimeRowProcessor____c::__BeatmapObjectsInTimeRowProcessor____c() {}
//  Writing Method size for method: ::GlobalNamespace::BeatmapObjectsInTimeRowProcessor._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::BeatmapObjectsInTimeRowProcessor::*)(int32_t)>(
    &::GlobalNamespace::BeatmapObjectsInTimeRowProcessor::_ctor)> {
  constexpr static std::size_t size = 0x5bc;
  constexpr static std::size_t addrs = 0xe01df4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::BeatmapObjectsInTimeRowProcessor*>::get(), ".ctor",
                                                 std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::BeatmapObjectsInTimeRowProcessor.ProcessNote
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::BeatmapObjectsInTimeRowProcessor::*)(::GlobalNamespace::NoteData*)>(
    &::GlobalNamespace::BeatmapObjectsInTimeRowProcessor::ProcessNote)> {
  constexpr static std::size_t size = 0xd4;
  constexpr static std::size_t addrs = 0xe023b0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::BeatmapObjectsInTimeRowProcessor*>::get(), "ProcessNote", std::vector<Il2CppClass*>{},
                                    ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::NoteData*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::BeatmapObjectsInTimeRowProcessor.ProcessSlider
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::BeatmapObjectsInTimeRowProcessor::*)(::GlobalNamespace::SliderData*)>(
    &::GlobalNamespace::BeatmapObjectsInTimeRowProcessor::ProcessSlider)> {
  constexpr static std::size_t size = 0x184;
  constexpr static std::size_t addrs = 0xe02484;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::BeatmapObjectsInTimeRowProcessor*>::get(), "ProcessSlider", std::vector<Il2CppClass*>{},
                                    ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::SliderData*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::BeatmapObjectsInTimeRowProcessor.ProcessAllRemainingData
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::BeatmapObjectsInTimeRowProcessor::*)()>(
    &::GlobalNamespace::BeatmapObjectsInTimeRowProcessor::ProcessAllRemainingData)> {
  constexpr static std::size_t size = 0x1fc;
  constexpr static std::size_t addrs = 0xe02608;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::BeatmapObjectsInTimeRowProcessor*>::get(),
                                                                               "ProcessAllRemainingData", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::BeatmapObjectsInTimeRowProcessor.HandleCurrentTimeSliceColorNotesDidAddItem
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::BeatmapObjectsInTimeRowProcessor::*)(
    ::GlobalNamespace::__BeatmapObjectsInTimeRowProcessor__TimeSliceContainer_1<::GlobalNamespace::NoteData*>*, ::GlobalNamespace::NoteData*)>(
    &::GlobalNamespace::BeatmapObjectsInTimeRowProcessor::HandleCurrentTimeSliceColorNotesDidAddItem)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0xe02804;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::BeatmapObjectsInTimeRowProcessor*>::get(), "HandleCurrentTimeSliceColorNotesDidAddItem", std::vector<Il2CppClass*>{},
        ::std::vector<Il2CppType const*>{
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::__BeatmapObjectsInTimeRowProcessor__TimeSliceContainer_1<::GlobalNamespace::NoteData*>*>::get(),
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::NoteData*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::BeatmapObjectsInTimeRowProcessor.HandleCurrentNewTimeSliceAllNotesAndSlidersDidStartNewTimeSlice
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<void (::GlobalNamespace::BeatmapObjectsInTimeRowProcessor::*)(::GlobalNamespace::__BeatmapObjectsInTimeRowProcessor__TimeSliceContainer_1<::GlobalNamespace::BeatmapDataItem*>*)>(
        &::GlobalNamespace::BeatmapObjectsInTimeRowProcessor::HandleCurrentNewTimeSliceAllNotesAndSlidersDidStartNewTimeSlice)> {
  constexpr static std::size_t size = 0x1b8;
  constexpr static std::size_t addrs = 0xe02864;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::BeatmapObjectsInTimeRowProcessor*>::get(), "HandleCurrentNewTimeSliceAllNotesAndSlidersDidStartNewTimeSlice",
        std::vector<Il2CppClass*>{},
        ::std::vector<Il2CppType const*>{
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::__BeatmapObjectsInTimeRowProcessor__TimeSliceContainer_1<::GlobalNamespace::BeatmapDataItem*>*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::BeatmapObjectsInTimeRowProcessor.HandleCurrentTimeSliceAllNotesAndSlidersDidFinishTimeSlice
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::BeatmapObjectsInTimeRowProcessor::*)(
    ::GlobalNamespace::__BeatmapObjectsInTimeRowProcessor__TimeSliceContainer_1<::GlobalNamespace::BeatmapDataItem*>*, float_t)>(
    &::GlobalNamespace::BeatmapObjectsInTimeRowProcessor::HandleCurrentTimeSliceAllNotesAndSlidersDidFinishTimeSlice)> {
  constexpr static std::size_t size = 0x193c;
  constexpr static std::size_t addrs = 0xe02a6c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::BeatmapObjectsInTimeRowProcessor*>::get(), "HandleCurrentTimeSliceAllNotesAndSlidersDidFinishTimeSlice",
        std::vector<Il2CppClass*>{},
        ::std::vector<Il2CppType const*>{
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::__BeatmapObjectsInTimeRowProcessor__TimeSliceContainer_1<::GlobalNamespace::BeatmapDataItem*>*>::get(),
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::BeatmapObjectsInTimeRowProcessor.HandleCurrentTimeSliceColorNotesDidFinishTimeSlice
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<void (::GlobalNamespace::BeatmapObjectsInTimeRowProcessor::*)(::GlobalNamespace::__BeatmapObjectsInTimeRowProcessor__TimeSliceContainer_1<::GlobalNamespace::NoteData*>*, float_t)>(
        &::GlobalNamespace::BeatmapObjectsInTimeRowProcessor::HandleCurrentTimeSliceColorNotesDidFinishTimeSlice)> {
  constexpr static std::size_t size = 0x6b0;
  constexpr static std::size_t addrs = 0xe0447c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::BeatmapObjectsInTimeRowProcessor*>::get(), "HandleCurrentTimeSliceColorNotesDidFinishTimeSlice",
        std::vector<Il2CppClass*>{},
        ::std::vector<Il2CppType const*>{
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::__BeatmapObjectsInTimeRowProcessor__TimeSliceContainer_1<::GlobalNamespace::NoteData*>*>::get(),
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::BeatmapObjectsInTimeRowProcessor.HandlePerColorTypeTimeSliceContainerDidFinishTimeSlice
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<void (::GlobalNamespace::BeatmapObjectsInTimeRowProcessor::*)(::GlobalNamespace::__BeatmapObjectsInTimeRowProcessor__TimeSliceContainer_1<::GlobalNamespace::NoteData*>*, float_t)>(
        &::GlobalNamespace::BeatmapObjectsInTimeRowProcessor::HandlePerColorTypeTimeSliceContainerDidFinishTimeSlice)> {
  constexpr static std::size_t size = 0x350;
  constexpr static std::size_t addrs = 0xe04b34;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::BeatmapObjectsInTimeRowProcessor*>::get(), "HandlePerColorTypeTimeSliceContainerDidFinishTimeSlice",
        std::vector<Il2CppClass*>{},
        ::std::vector<Il2CppType const*>{
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::__BeatmapObjectsInTimeRowProcessor__TimeSliceContainer_1<::GlobalNamespace::NoteData*>*>::get(),
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::BeatmapObjectsInTimeRowProcessor.SliderHeadPositionOverlapsWithNote
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)(::GlobalNamespace::SliderData*, ::GlobalNamespace::NoteData*)>(
    &::GlobalNamespace::BeatmapObjectsInTimeRowProcessor::SliderHeadPositionOverlapsWithNote)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0xe043a8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::BeatmapObjectsInTimeRowProcessor*>::get(), "SliderHeadPositionOverlapsWithNote", std::vector<Il2CppClass*>{},
        ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::SliderData*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::NoteData*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::BeatmapObjectsInTimeRowProcessor.SliderTailPositionOverlapsWithNote
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)(::GlobalNamespace::SliderData*, ::GlobalNamespace::NoteData*)>(
    &::GlobalNamespace::BeatmapObjectsInTimeRowProcessor::SliderTailPositionOverlapsWithNote)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0xe0443c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::BeatmapObjectsInTimeRowProcessor*>::get(), "SliderTailPositionOverlapsWithNote", std::vector<Il2CppClass*>{},
        ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::SliderData*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::NoteData*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::BeatmapObjectsInTimeRowProcessor.SliderHeadPositionOverlapsWithBurstTail
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)(::GlobalNamespace::SliderData*, ::GlobalNamespace::SliderData*)>(
    &::GlobalNamespace::BeatmapObjectsInTimeRowProcessor::SliderHeadPositionOverlapsWithBurstTail)> {
  constexpr static std::size_t size = 0x54;
  constexpr static std::size_t addrs = 0xe043e8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::BeatmapObjectsInTimeRowProcessor*>::get(), "SliderHeadPositionOverlapsWithBurstTail", std::vector<Il2CppClass*>{},
        ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::SliderData*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::SliderData*>::get() })));
    return ___internal_method;
  }
};
constexpr ::GlobalNamespace::__BeatmapObjectsInTimeRowProcessor__TimeSliceContainer_1<::GlobalNamespace::NoteData*>*&
GlobalNamespace::BeatmapObjectsInTimeRowProcessor::__get__currentTimeSliceColorNotes() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____currentTimeSliceColorNotes;
}
constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::__BeatmapObjectsInTimeRowProcessor__TimeSliceContainer_1<::GlobalNamespace::NoteData*>*> const&
GlobalNamespace::BeatmapObjectsInTimeRowProcessor::__get__currentTimeSliceColorNotes() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____currentTimeSliceColorNotes;
}
constexpr void
GlobalNamespace::BeatmapObjectsInTimeRowProcessor::__set__currentTimeSliceColorNotes(::GlobalNamespace::__BeatmapObjectsInTimeRowProcessor__TimeSliceContainer_1<::GlobalNamespace::NoteData*>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____currentTimeSliceColorNotes)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::GlobalNamespace::__BeatmapObjectsInTimeRowProcessor__TimeSliceContainer_1<::GlobalNamespace::BeatmapDataItem*>*&
GlobalNamespace::BeatmapObjectsInTimeRowProcessor::__get__currentTimeSliceAllNotesAndSliders() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____currentTimeSliceAllNotesAndSliders;
}
constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::__BeatmapObjectsInTimeRowProcessor__TimeSliceContainer_1<::GlobalNamespace::BeatmapDataItem*>*> const&
GlobalNamespace::BeatmapObjectsInTimeRowProcessor::__get__currentTimeSliceAllNotesAndSliders() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____currentTimeSliceAllNotesAndSliders;
}
constexpr void GlobalNamespace::BeatmapObjectsInTimeRowProcessor::__set__currentTimeSliceAllNotesAndSliders(
    ::GlobalNamespace::__BeatmapObjectsInTimeRowProcessor__TimeSliceContainer_1<::GlobalNamespace::BeatmapDataItem*>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____currentTimeSliceAllNotesAndSliders)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::System::Collections::Generic::Dictionary_2<::GlobalNamespace::ColorType, ::GlobalNamespace::__BeatmapObjectsInTimeRowProcessor__TimeSliceContainer_1<::GlobalNamespace::NoteData*>*>*&
GlobalNamespace::BeatmapObjectsInTimeRowProcessor::__get__currentTimeSliceNotesByColorType() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____currentTimeSliceNotesByColorType;
}
constexpr ::cordl_internals::to_const_pointer<
    ::System::Collections::Generic::Dictionary_2<::GlobalNamespace::ColorType, ::GlobalNamespace::__BeatmapObjectsInTimeRowProcessor__TimeSliceContainer_1<::GlobalNamespace::NoteData*>*>*> const&
GlobalNamespace::BeatmapObjectsInTimeRowProcessor::__get__currentTimeSliceNotesByColorType() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____currentTimeSliceNotesByColorType;
}
constexpr void GlobalNamespace::BeatmapObjectsInTimeRowProcessor::__set__currentTimeSliceNotesByColorType(
    ::System::Collections::Generic::Dictionary_2<::GlobalNamespace::ColorType, ::GlobalNamespace::__BeatmapObjectsInTimeRowProcessor__TimeSliceContainer_1<::GlobalNamespace::NoteData*>*>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____currentTimeSliceNotesByColorType)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::System::Collections::Generic::List_1<::GlobalNamespace::SliderData*>*& GlobalNamespace::BeatmapObjectsInTimeRowProcessor::__get__unprocessedSliderTails() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____unprocessedSliderTails;
}
constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::List_1<::GlobalNamespace::SliderData*>*> const&
GlobalNamespace::BeatmapObjectsInTimeRowProcessor::__get__unprocessedSliderTails() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____unprocessedSliderTails;
}
constexpr void GlobalNamespace::BeatmapObjectsInTimeRowProcessor::__set__unprocessedSliderTails(::System::Collections::Generic::List_1<::GlobalNamespace::SliderData*>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____unprocessedSliderTails)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::ArrayW<::System::Collections::Generic::List_1<::GlobalNamespace::NoteData*>*, ::Array<::System::Collections::Generic::List_1<::GlobalNamespace::NoteData*>*>*>&
GlobalNamespace::BeatmapObjectsInTimeRowProcessor::__get__notesInColumnsReusableProcessingListOfLists() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____notesInColumnsReusableProcessingListOfLists;
}
constexpr ::ArrayW<::System::Collections::Generic::List_1<::GlobalNamespace::NoteData*>*, ::Array<::System::Collections::Generic::List_1<::GlobalNamespace::NoteData*>*>*> const&
GlobalNamespace::BeatmapObjectsInTimeRowProcessor::__get__notesInColumnsReusableProcessingListOfLists() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____notesInColumnsReusableProcessingListOfLists;
}
constexpr void GlobalNamespace::BeatmapObjectsInTimeRowProcessor::__set__notesInColumnsReusableProcessingListOfLists(
    ::ArrayW<::System::Collections::Generic::List_1<::GlobalNamespace::NoteData*>*, ::Array<::System::Collections::Generic::List_1<::GlobalNamespace::NoteData*>*>*> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____notesInColumnsReusableProcessingListOfLists)),
                                          cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr int32_t& GlobalNamespace::BeatmapObjectsInTimeRowProcessor::__get__numberOfLines() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____numberOfLines;
}
constexpr int32_t const& GlobalNamespace::BeatmapObjectsInTimeRowProcessor::__get__numberOfLines() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____numberOfLines;
}
constexpr void GlobalNamespace::BeatmapObjectsInTimeRowProcessor::__set__numberOfLines(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____numberOfLines = value;
}
inline ::GlobalNamespace::BeatmapObjectsInTimeRowProcessor* GlobalNamespace::BeatmapObjectsInTimeRowProcessor::New_ctor(int32_t numberOfLines) {
  return THROW_UNLESS(::il2cpp_utils::New<::GlobalNamespace::BeatmapObjectsInTimeRowProcessor*>(numberOfLines));
}
inline void GlobalNamespace::BeatmapObjectsInTimeRowProcessor::_ctor(int32_t numberOfLines) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::BeatmapObjectsInTimeRowProcessor*>::get(), ".ctor",
                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, numberOfLines);
}
inline void GlobalNamespace::BeatmapObjectsInTimeRowProcessor::ProcessNote(::GlobalNamespace::NoteData* noteData) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::BeatmapObjectsInTimeRowProcessor*>::get(), "ProcessNote", std::vector<Il2CppClass*>{},
                                  ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::NoteData*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, noteData);
}
inline void GlobalNamespace::BeatmapObjectsInTimeRowProcessor::ProcessSlider(::GlobalNamespace::SliderData* sliderData) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::BeatmapObjectsInTimeRowProcessor*>::get(), "ProcessSlider", std::vector<Il2CppClass*>{},
                                  ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::SliderData*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, sliderData);
}
inline void GlobalNamespace::BeatmapObjectsInTimeRowProcessor::ProcessAllRemainingData() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::BeatmapObjectsInTimeRowProcessor*>::get(),
                                                                             "ProcessAllRemainingData", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void GlobalNamespace::BeatmapObjectsInTimeRowProcessor::HandleCurrentTimeSliceColorNotesDidAddItem(
    ::GlobalNamespace::__BeatmapObjectsInTimeRowProcessor__TimeSliceContainer_1<::GlobalNamespace::NoteData*>* timeSliceContainer, ::GlobalNamespace::NoteData* noteData) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::BeatmapObjectsInTimeRowProcessor*>::get(), "HandleCurrentTimeSliceColorNotesDidAddItem", std::vector<Il2CppClass*>{},
      ::std::vector<Il2CppType const*>{
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::__BeatmapObjectsInTimeRowProcessor__TimeSliceContainer_1<::GlobalNamespace::NoteData*>*>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::NoteData*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, timeSliceContainer, noteData);
}
inline void GlobalNamespace::BeatmapObjectsInTimeRowProcessor::HandleCurrentNewTimeSliceAllNotesAndSlidersDidStartNewTimeSlice(
    ::GlobalNamespace::__BeatmapObjectsInTimeRowProcessor__TimeSliceContainer_1<::GlobalNamespace::BeatmapDataItem*>* allObjectsTimeSlice) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::BeatmapObjectsInTimeRowProcessor*>::get(), "HandleCurrentNewTimeSliceAllNotesAndSlidersDidStartNewTimeSlice",
      std::vector<Il2CppClass*>{},
      ::std::vector<Il2CppType const*>{
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::__BeatmapObjectsInTimeRowProcessor__TimeSliceContainer_1<::GlobalNamespace::BeatmapDataItem*>*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, allObjectsTimeSlice);
}
inline void GlobalNamespace::BeatmapObjectsInTimeRowProcessor::HandleCurrentTimeSliceAllNotesAndSlidersDidFinishTimeSlice(
    ::GlobalNamespace::__BeatmapObjectsInTimeRowProcessor__TimeSliceContainer_1<::GlobalNamespace::BeatmapDataItem*>* allObjectsTimeSlice, float_t nextTimeSliceTime) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::BeatmapObjectsInTimeRowProcessor*>::get(), "HandleCurrentTimeSliceAllNotesAndSlidersDidFinishTimeSlice",
      std::vector<Il2CppClass*>{},
      ::std::vector<Il2CppType const*>{
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::__BeatmapObjectsInTimeRowProcessor__TimeSliceContainer_1<::GlobalNamespace::BeatmapDataItem*>*>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, allObjectsTimeSlice, nextTimeSliceTime);
}
inline void GlobalNamespace::BeatmapObjectsInTimeRowProcessor::HandleCurrentTimeSliceColorNotesDidFinishTimeSlice(
    ::GlobalNamespace::__BeatmapObjectsInTimeRowProcessor__TimeSliceContainer_1<::GlobalNamespace::NoteData*>* currentTimeSlice, float_t nextTimeSliceTime) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::BeatmapObjectsInTimeRowProcessor*>::get(), "HandleCurrentTimeSliceColorNotesDidFinishTimeSlice",
      std::vector<Il2CppClass*>{},
      ::std::vector<Il2CppType const*>{
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::__BeatmapObjectsInTimeRowProcessor__TimeSliceContainer_1<::GlobalNamespace::NoteData*>*>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, currentTimeSlice, nextTimeSliceTime);
}
inline void GlobalNamespace::BeatmapObjectsInTimeRowProcessor::HandlePerColorTypeTimeSliceContainerDidFinishTimeSlice(
    ::GlobalNamespace::__BeatmapObjectsInTimeRowProcessor__TimeSliceContainer_1<::GlobalNamespace::NoteData*>* timeSliceContainer, float_t nextTimeSliceTime) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::BeatmapObjectsInTimeRowProcessor*>::get(), "HandlePerColorTypeTimeSliceContainerDidFinishTimeSlice",
      std::vector<Il2CppClass*>{},
      ::std::vector<Il2CppType const*>{
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::__BeatmapObjectsInTimeRowProcessor__TimeSliceContainer_1<::GlobalNamespace::NoteData*>*>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, timeSliceContainer, nextTimeSliceTime);
}
inline bool GlobalNamespace::BeatmapObjectsInTimeRowProcessor::SliderHeadPositionOverlapsWithNote(::GlobalNamespace::SliderData* slider, ::GlobalNamespace::NoteData* note) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::BeatmapObjectsInTimeRowProcessor*>::get(), "SliderHeadPositionOverlapsWithNote", std::vector<Il2CppClass*>{},
      ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::SliderData*>::get(),
                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::NoteData*>::get() })));
  return ::cordl_internals::RunMethodRethrow<bool, false>(nullptr, ___internal_method, slider, note);
}
inline bool GlobalNamespace::BeatmapObjectsInTimeRowProcessor::SliderTailPositionOverlapsWithNote(::GlobalNamespace::SliderData* slider, ::GlobalNamespace::NoteData* note) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::BeatmapObjectsInTimeRowProcessor*>::get(), "SliderTailPositionOverlapsWithNote", std::vector<Il2CppClass*>{},
      ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::SliderData*>::get(),
                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::NoteData*>::get() })));
  return ::cordl_internals::RunMethodRethrow<bool, false>(nullptr, ___internal_method, slider, note);
}
inline bool GlobalNamespace::BeatmapObjectsInTimeRowProcessor::SliderHeadPositionOverlapsWithBurstTail(::GlobalNamespace::SliderData* slider, ::GlobalNamespace::SliderData* sliderTail) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::BeatmapObjectsInTimeRowProcessor*>::get(), "SliderHeadPositionOverlapsWithBurstTail", std::vector<Il2CppClass*>{},
      ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::SliderData*>::get(),
                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::SliderData*>::get() })));
  return ::cordl_internals::RunMethodRethrow<bool, false>(nullptr, ___internal_method, slider, sliderTail);
}
// Ctor Parameters []
constexpr ::GlobalNamespace::BeatmapObjectsInTimeRowProcessor::BeatmapObjectsInTimeRowProcessor() {}
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
