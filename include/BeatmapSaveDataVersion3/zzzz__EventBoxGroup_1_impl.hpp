#pragma once
// IWYU pragma private; include "BeatmapSaveDataVersion3/EventBoxGroup_1.hpp"
#include "BeatmapSaveDataVersion3/zzzz__EventBoxGroup_impl.hpp"
#include "BeatmapSaveDataVersion3/zzzz__EventBoxGroup_1_def.hpp"
#include "BeatmapSaveDataVersion3/zzzz__EventBox_def.hpp"
#include "System/Collections/Generic/zzzz__IReadOnlyList_1_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
template <typename T> constexpr ::System::Collections::Generic::List_1<T>*& BeatmapSaveDataVersion3::EventBoxGroup_1<T>::__cordl_internal_get_e() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___e;
}
template <typename T> constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::List_1<T>*> const& BeatmapSaveDataVersion3::EventBoxGroup_1<T>::__cordl_internal_get_e() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___e;
}
template <typename T> constexpr void BeatmapSaveDataVersion3::EventBoxGroup_1<T>::__cordl_internal_set_e(::System::Collections::Generic::List_1<T>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___e)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
template <typename T> inline ::System::Collections::Generic::IReadOnlyList_1<::BeatmapSaveDataVersion3::EventBox*>* BeatmapSaveDataVersion3::EventBoxGroup_1<T>::get_baseEventBoxes() {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BeatmapSaveDataVersion3::EventBoxGroup_1<T>*>::get(), 7)));
  return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::IReadOnlyList_1<::BeatmapSaveDataVersion3::EventBox*>*, false>(this, ___internal_method);
}
template <typename T> inline ::System::Collections::Generic::IReadOnlyList_1<T>* BeatmapSaveDataVersion3::EventBoxGroup_1<T>::get_eventBoxes() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BeatmapSaveDataVersion3::EventBoxGroup_1<T>*>::get(),
                                                                             "get_eventBoxes", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::IReadOnlyList_1<T>*, false>(this, ___internal_method);
}
template <typename T>
inline ::BeatmapSaveDataVersion3::EventBoxGroup_1<T>* BeatmapSaveDataVersion3::EventBoxGroup_1<T>::New_ctor(float_t beat, int32_t groupId, ::System::Collections::Generic::List_1<T>* eventBoxes) {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::BeatmapSaveDataVersion3::EventBoxGroup_1<T>*>(beat, groupId, eventBoxes));
}
template <typename T> inline void BeatmapSaveDataVersion3::EventBoxGroup_1<T>::_ctor(float_t beat, int32_t groupId, ::System::Collections::Generic::List_1<T>* eventBoxes) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BeatmapSaveDataVersion3::EventBoxGroup_1<T>*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::List_1<T>*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, beat, groupId, eventBoxes);
}
// Ctor Parameters []
template <typename T> constexpr ::BeatmapSaveDataVersion3::EventBoxGroup_1<T>::EventBoxGroup_1() {}
