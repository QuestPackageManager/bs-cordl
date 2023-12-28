#pragma once
#include "GlobalNamespace/zzzz__NoteControllerBase_impl.hpp"
#include "GlobalNamespace/zzzz__MirroredNoteController_1_def.hpp"
#include "GlobalNamespace/zzzz__INoteControllerNoteDidPassJumpThreeQuartersEvent_def.hpp"
#include "GlobalNamespace/zzzz__INoteControllerDidInitEvent_def.hpp"
#include "GlobalNamespace/zzzz__LazyCopyHashSet_1_def.hpp"
#include "UnityEngine/zzzz__Transform_def.hpp"
#include "GlobalNamespace/zzzz__NoteData_def.hpp"
#include "GlobalNamespace/zzzz__NoteControllerBase_def.hpp"
#include "GlobalNamespace/zzzz__INoteControllerNoteDidStartDissolvingEvent_def.hpp"
#include "GlobalNamespace/zzzz__ILazyCopyHashSet_1_def.hpp"
/// @brief Convert operator to "::GlobalNamespace::INoteControllerNoteDidStartDissolvingEvent"
template <typename T> constexpr GlobalNamespace::MirroredNoteController_1<T>::operator ::GlobalNamespace::INoteControllerNoteDidStartDissolvingEvent*() noexcept {
  return static_cast<::GlobalNamespace::INoteControllerNoteDidStartDissolvingEvent*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::GlobalNamespace::INoteControllerNoteDidPassJumpThreeQuartersEvent"
template <typename T> constexpr GlobalNamespace::MirroredNoteController_1<T>::operator ::GlobalNamespace::INoteControllerNoteDidPassJumpThreeQuartersEvent*() noexcept {
  return static_cast<::GlobalNamespace::INoteControllerNoteDidPassJumpThreeQuartersEvent*>(static_cast<void*>(this));
}
template <typename T> constexpr ::UnityEngine::Transform*& GlobalNamespace::MirroredNoteController_1<T>::__get__noteTransform() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____noteTransform;
}
template <typename T> constexpr ::cordl_internals::to_const_pointer<::UnityEngine::Transform*> const& GlobalNamespace::MirroredNoteController_1<T>::__get__noteTransform() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____noteTransform;
}
template <typename T> constexpr void GlobalNamespace::MirroredNoteController_1<T>::__set__noteTransform(::UnityEngine::Transform* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____noteTransform)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
template <typename T> constexpr T& GlobalNamespace::MirroredNoteController_1<T>::__get_followedNote() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___followedNote;
}
template <typename T> constexpr T const& GlobalNamespace::MirroredNoteController_1<T>::__get_followedNote() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___followedNote;
}
template <typename T> constexpr void GlobalNamespace::MirroredNoteController_1<T>::__set_followedNote(T value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___followedNote)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
template <typename T> constexpr ::UnityEngine::Transform*& GlobalNamespace::MirroredNoteController_1<T>::__get__followedNoteTransform() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____followedNoteTransform;
}
template <typename T> constexpr ::cordl_internals::to_const_pointer<::UnityEngine::Transform*> const& GlobalNamespace::MirroredNoteController_1<T>::__get__followedNoteTransform() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____followedNoteTransform;
}
template <typename T> constexpr void GlobalNamespace::MirroredNoteController_1<T>::__set__followedNoteTransform(::UnityEngine::Transform* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____followedNoteTransform)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
template <typename T> constexpr ::GlobalNamespace::LazyCopyHashSet_1<::GlobalNamespace::INoteControllerDidInitEvent*>*& GlobalNamespace::MirroredNoteController_1<T>::__get__didInitEvent() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____didInitEvent;
}
template <typename T>
constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::LazyCopyHashSet_1<::GlobalNamespace::INoteControllerDidInitEvent*>*> const&
GlobalNamespace::MirroredNoteController_1<T>::__get__didInitEvent() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____didInitEvent;
}
template <typename T> constexpr void GlobalNamespace::MirroredNoteController_1<T>::__set__didInitEvent(::GlobalNamespace::LazyCopyHashSet_1<::GlobalNamespace::INoteControllerDidInitEvent*>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____didInitEvent)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
template <typename T>
constexpr ::GlobalNamespace::LazyCopyHashSet_1<::GlobalNamespace::INoteControllerNoteDidPassJumpThreeQuartersEvent*>*&
GlobalNamespace::MirroredNoteController_1<T>::__get__noteDidPassJumpThreeQuartersEvent() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____noteDidPassJumpThreeQuartersEvent;
}
template <typename T>
constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::LazyCopyHashSet_1<::GlobalNamespace::INoteControllerNoteDidPassJumpThreeQuartersEvent*>*> const&
GlobalNamespace::MirroredNoteController_1<T>::__get__noteDidPassJumpThreeQuartersEvent() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____noteDidPassJumpThreeQuartersEvent;
}
template <typename T>
constexpr void GlobalNamespace::MirroredNoteController_1<T>::__set__noteDidPassJumpThreeQuartersEvent(
    ::GlobalNamespace::LazyCopyHashSet_1<::GlobalNamespace::INoteControllerNoteDidPassJumpThreeQuartersEvent*>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____noteDidPassJumpThreeQuartersEvent)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
template <typename T>
constexpr ::GlobalNamespace::LazyCopyHashSet_1<::GlobalNamespace::INoteControllerNoteDidStartDissolvingEvent*>*& GlobalNamespace::MirroredNoteController_1<T>::__get__noteDidStartDissolvingEvent() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____noteDidStartDissolvingEvent;
}
template <typename T>
constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::LazyCopyHashSet_1<::GlobalNamespace::INoteControllerNoteDidStartDissolvingEvent*>*> const&
GlobalNamespace::MirroredNoteController_1<T>::__get__noteDidStartDissolvingEvent() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____noteDidStartDissolvingEvent;
}
template <typename T>
constexpr void
GlobalNamespace::MirroredNoteController_1<T>::__set__noteDidStartDissolvingEvent(::GlobalNamespace::LazyCopyHashSet_1<::GlobalNamespace::INoteControllerNoteDidStartDissolvingEvent*>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____noteDidStartDissolvingEvent)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
template <typename T> inline ::GlobalNamespace::ILazyCopyHashSet_1<::GlobalNamespace::INoteControllerDidInitEvent*>* GlobalNamespace::MirroredNoteController_1<T>::get_didInitEvent() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MirroredNoteController_1<T>*>::get(),
                                                                             "get_didInitEvent", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::ILazyCopyHashSet_1<::GlobalNamespace::INoteControllerDidInitEvent*>*, false>(this, ___internal_method);
}
template <typename T>
inline ::GlobalNamespace::ILazyCopyHashSet_1<::GlobalNamespace::INoteControllerNoteDidPassJumpThreeQuartersEvent*>*
GlobalNamespace::MirroredNoteController_1<T>::get_noteDidPassJumpThreeQuartersEvent() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MirroredNoteController_1<T>*>::get(),
                                                                             "get_noteDidPassJumpThreeQuartersEvent", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::ILazyCopyHashSet_1<::GlobalNamespace::INoteControllerNoteDidPassJumpThreeQuartersEvent*>*, false>(this, ___internal_method);
}
template <typename T>
inline ::GlobalNamespace::ILazyCopyHashSet_1<::GlobalNamespace::INoteControllerNoteDidStartDissolvingEvent*>* GlobalNamespace::MirroredNoteController_1<T>::get_noteDidStartDissolvingEvent() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MirroredNoteController_1<T>*>::get(),
                                                                             "get_noteDidStartDissolvingEvent", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::ILazyCopyHashSet_1<::GlobalNamespace::INoteControllerNoteDidStartDissolvingEvent*>*, false>(this, ___internal_method);
}
template <typename T> inline ::GlobalNamespace::NoteData* GlobalNamespace::MirroredNoteController_1<T>::get_noteData() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MirroredNoteController_1<T>*>::get(),
                                                                             "get_noteData", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::NoteData*, false>(this, ___internal_method);
}
template <typename T> inline void GlobalNamespace::MirroredNoteController_1<T>::Update() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MirroredNoteController_1<T>*>::get(), "Update",
                                                                             std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
template <typename T> inline void GlobalNamespace::MirroredNoteController_1<T>::OnDestroy() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MirroredNoteController_1<T>*>::get(),
                                                                             "OnDestroy", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
template <typename T> inline void GlobalNamespace::MirroredNoteController_1<T>::UpdatePositionAndRotation() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MirroredNoteController_1<T>*>::get(),
                                                                             "UpdatePositionAndRotation", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
template <typename T> inline void GlobalNamespace::MirroredNoteController_1<T>::Mirror(T noteController) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MirroredNoteController_1<T>*>::get(), "Mirror", std::vector<Il2CppClass*>{},
                                               ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<T>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, noteController);
}
template <typename T> inline void GlobalNamespace::MirroredNoteController_1<T>::RemoveListeners() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MirroredNoteController_1<T>*>::get(),
                                                                             "RemoveListeners", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
template <typename T> inline void GlobalNamespace::MirroredNoteController_1<T>::HandleNoteControllerNoteDidStartDissolving(::GlobalNamespace::NoteControllerBase* noteController, float_t duration) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MirroredNoteController_1<T>*>::get(), "HandleNoteControllerNoteDidStartDissolving", std::vector<Il2CppClass*>{},
      ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::NoteControllerBase*>::get(),
                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, noteController, duration);
}
template <typename T> inline void GlobalNamespace::MirroredNoteController_1<T>::HandleNoteControllerNoteDidPassJumpThreeQuarters(::GlobalNamespace::NoteControllerBase* noteController) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MirroredNoteController_1<T>*>::get(), "HandleNoteControllerNoteDidPassJumpThreeQuarters", std::vector<Il2CppClass*>{},
      ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::NoteControllerBase*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, noteController);
}
template <typename T> inline void GlobalNamespace::MirroredNoteController_1<T>::Hide(bool hide) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MirroredNoteController_1<T>*>::get(), "Hide", std::vector<Il2CppClass*>{},
                                               ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, hide);
}
template <typename T> inline ::GlobalNamespace::MirroredNoteController_1<T>* GlobalNamespace::MirroredNoteController_1<T>::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::New<::GlobalNamespace::MirroredNoteController_1<T>*>());
}
template <typename T> inline void GlobalNamespace::MirroredNoteController_1<T>::_ctor() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MirroredNoteController_1<T>*>::get(), ".ctor",
                                                                             std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
// Ctor Parameters []
template <typename T> constexpr ::GlobalNamespace::MirroredNoteController_1<T>::MirroredNoteController_1() {}
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
