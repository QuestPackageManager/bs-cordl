#pragma once
// IWYU pragma private; include "GlobalNamespace/MirroredNoteController_1.hpp"
#include "GlobalNamespace/zzzz__NoteControllerBase_impl.hpp"
#include "GlobalNamespace/zzzz__MirroredNoteController_1_def.hpp"
#include "GlobalNamespace/zzzz__ILazyCopyHashSet_1_def.hpp"
#include "GlobalNamespace/zzzz__INoteControllerDidInitEvent_def.hpp"
#include "GlobalNamespace/zzzz__INoteControllerNoteDidPassJumpThreeQuartersEvent_def.hpp"
#include "GlobalNamespace/zzzz__INoteControllerNoteDidStartDissolvingEvent_def.hpp"
#include "GlobalNamespace/zzzz__LazyCopyHashSet_1_def.hpp"
#include "GlobalNamespace/zzzz__NoteControllerBase_def.hpp"
#include "GlobalNamespace/zzzz__NoteData_def.hpp"
#include "UnityEngine/zzzz__Transform_def.hpp"
template <typename T> constexpr ::UnityW<::UnityEngine::Transform>& GlobalNamespace::MirroredNoteController_1<T>::__cordl_internal_get__noteTransform() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____noteTransform;
}
template <typename T> constexpr ::UnityW<::UnityEngine::Transform> const& GlobalNamespace::MirroredNoteController_1<T>::__cordl_internal_get__noteTransform() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____noteTransform;
}
template <typename T> constexpr void GlobalNamespace::MirroredNoteController_1<T>::__cordl_internal_set__noteTransform(::UnityW<::UnityEngine::Transform> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____noteTransform = value;
}
template <typename T> constexpr T& GlobalNamespace::MirroredNoteController_1<T>::__cordl_internal_get_followedNote() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___followedNote;
}
template <typename T> constexpr T const& GlobalNamespace::MirroredNoteController_1<T>::__cordl_internal_get_followedNote() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___followedNote;
}
template <typename T> constexpr void GlobalNamespace::MirroredNoteController_1<T>::__cordl_internal_set_followedNote(T value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___followedNote = value;
}
template <typename T> constexpr ::UnityW<::UnityEngine::Transform>& GlobalNamespace::MirroredNoteController_1<T>::__cordl_internal_get__followedNoteTransform() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____followedNoteTransform;
}
template <typename T> constexpr ::UnityW<::UnityEngine::Transform> const& GlobalNamespace::MirroredNoteController_1<T>::__cordl_internal_get__followedNoteTransform() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____followedNoteTransform;
}
template <typename T> constexpr void GlobalNamespace::MirroredNoteController_1<T>::__cordl_internal_set__followedNoteTransform(::UnityW<::UnityEngine::Transform> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____followedNoteTransform = value;
}
template <typename T>
constexpr ::GlobalNamespace::LazyCopyHashSet_1<::GlobalNamespace::INoteControllerDidInitEvent*>*& GlobalNamespace::MirroredNoteController_1<T>::__cordl_internal_get__didInitEvent() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____didInitEvent;
}
template <typename T>
constexpr ::GlobalNamespace::LazyCopyHashSet_1<::GlobalNamespace::INoteControllerDidInitEvent*>* const& GlobalNamespace::MirroredNoteController_1<T>::__cordl_internal_get__didInitEvent() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____didInitEvent;
}
template <typename T>
constexpr void GlobalNamespace::MirroredNoteController_1<T>::__cordl_internal_set__didInitEvent(::GlobalNamespace::LazyCopyHashSet_1<::GlobalNamespace::INoteControllerDidInitEvent*>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____didInitEvent = value;
}
template <typename T>
constexpr ::GlobalNamespace::LazyCopyHashSet_1<::GlobalNamespace::INoteControllerNoteDidPassJumpThreeQuartersEvent*>*&
GlobalNamespace::MirroredNoteController_1<T>::__cordl_internal_get__noteDidPassJumpThreeQuartersEvent() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____noteDidPassJumpThreeQuartersEvent;
}
template <typename T>
constexpr ::GlobalNamespace::LazyCopyHashSet_1<::GlobalNamespace::INoteControllerNoteDidPassJumpThreeQuartersEvent*>* const&
GlobalNamespace::MirroredNoteController_1<T>::__cordl_internal_get__noteDidPassJumpThreeQuartersEvent() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____noteDidPassJumpThreeQuartersEvent;
}
template <typename T>
constexpr void GlobalNamespace::MirroredNoteController_1<T>::__cordl_internal_set__noteDidPassJumpThreeQuartersEvent(
    ::GlobalNamespace::LazyCopyHashSet_1<::GlobalNamespace::INoteControllerNoteDidPassJumpThreeQuartersEvent*>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____noteDidPassJumpThreeQuartersEvent = value;
}
template <typename T>
constexpr ::GlobalNamespace::LazyCopyHashSet_1<::GlobalNamespace::INoteControllerNoteDidStartDissolvingEvent*>*&
GlobalNamespace::MirroredNoteController_1<T>::__cordl_internal_get__noteDidStartDissolvingEvent() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____noteDidStartDissolvingEvent;
}
template <typename T>
constexpr ::GlobalNamespace::LazyCopyHashSet_1<::GlobalNamespace::INoteControllerNoteDidStartDissolvingEvent*>* const&
GlobalNamespace::MirroredNoteController_1<T>::__cordl_internal_get__noteDidStartDissolvingEvent() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____noteDidStartDissolvingEvent;
}
template <typename T>
constexpr void GlobalNamespace::MirroredNoteController_1<T>::__cordl_internal_set__noteDidStartDissolvingEvent(
    ::GlobalNamespace::LazyCopyHashSet_1<::GlobalNamespace::INoteControllerNoteDidStartDissolvingEvent*>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____noteDidStartDissolvingEvent = value;
}
template <typename T> inline ::GlobalNamespace::ILazyCopyHashSet_1<::GlobalNamespace::INoteControllerDidInitEvent*>* GlobalNamespace::MirroredNoteController_1<T>::get_didInitEvent() {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::GlobalNamespace::MirroredNoteController_1<T>*>(), 4 })));
  return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::ILazyCopyHashSet_1<::GlobalNamespace::INoteControllerDidInitEvent*>*>(this, ___internal_method);
}
template <typename T>
inline ::GlobalNamespace::ILazyCopyHashSet_1<::GlobalNamespace::INoteControllerNoteDidPassJumpThreeQuartersEvent*>*
GlobalNamespace::MirroredNoteController_1<T>::get_noteDidPassJumpThreeQuartersEvent() {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::GlobalNamespace::MirroredNoteController_1<T>*>(), 5 })));
  return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::ILazyCopyHashSet_1<::GlobalNamespace::INoteControllerNoteDidPassJumpThreeQuartersEvent*>*>(this, ___internal_method);
}
template <typename T>
inline ::GlobalNamespace::ILazyCopyHashSet_1<::GlobalNamespace::INoteControllerNoteDidStartDissolvingEvent*>* GlobalNamespace::MirroredNoteController_1<T>::get_noteDidStartDissolvingEvent() {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::GlobalNamespace::MirroredNoteController_1<T>*>(), 6 })));
  return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::ILazyCopyHashSet_1<::GlobalNamespace::INoteControllerNoteDidStartDissolvingEvent*>*>(this, ___internal_method);
}
template <typename T> inline ::GlobalNamespace::NoteData* GlobalNamespace::MirroredNoteController_1<T>::get_noteData() {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::GlobalNamespace::MirroredNoteController_1<T>*>(), 7 })));
  return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::NoteData*>(this, ___internal_method);
}
template <typename T> inline void GlobalNamespace::MirroredNoteController_1<T>::Update() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::MirroredNoteController_1<T>*>(), { "Update", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
template <typename T> inline void GlobalNamespace::MirroredNoteController_1<T>::OnDestroy() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::MirroredNoteController_1<T>*>(), { "OnDestroy", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
template <typename T> inline void GlobalNamespace::MirroredNoteController_1<T>::UpdatePositionAndRotation() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::MirroredNoteController_1<T>*>(), { "UpdatePositionAndRotation", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
template <typename T> inline void GlobalNamespace::MirroredNoteController_1<T>::Mirror(T noteController) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::GlobalNamespace::MirroredNoteController_1<T>*>(), 10 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, noteController);
}
template <typename T> inline void GlobalNamespace::MirroredNoteController_1<T>::RemoveListeners() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::MirroredNoteController_1<T>*>(), { "RemoveListeners", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
template <typename T> inline void GlobalNamespace::MirroredNoteController_1<T>::HandleNoteControllerNoteDidStartDissolving(::GlobalNamespace::NoteControllerBase* noteController, float_t duration) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::MirroredNoteController_1<T>*>(),
                                              { "HandleNoteControllerNoteDidStartDissolving", {}, { ::i2c::type_of<::GlobalNamespace::NoteControllerBase*>(), ::i2c::type_of<float_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, noteController, duration);
}
template <typename T> inline void GlobalNamespace::MirroredNoteController_1<T>::HandleNoteControllerNoteDidPassJumpThreeQuarters(::GlobalNamespace::NoteControllerBase* noteController) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::MirroredNoteController_1<T>*>(),
                                                           { "HandleNoteControllerNoteDidPassJumpThreeQuarters", {}, { ::i2c::type_of<::GlobalNamespace::NoteControllerBase*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, noteController);
}
template <typename T> inline void GlobalNamespace::MirroredNoteController_1<T>::Hide(bool hide) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::MirroredNoteController_1<T>*>(), { "Hide", {}, { ::i2c::type_of<bool>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, hide);
}
template <typename T> inline void GlobalNamespace::MirroredNoteController_1<T>::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::MirroredNoteController_1<T>*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
template <typename T> inline ::GlobalNamespace::MirroredNoteController_1<T>* GlobalNamespace::MirroredNoteController_1<T>::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::MirroredNoteController_1<T>*>());
}
/// @brief Convert operator to "::GlobalNamespace::INoteControllerNoteDidStartDissolvingEvent"
template <typename T> constexpr GlobalNamespace::MirroredNoteController_1<T>::operator ::GlobalNamespace::INoteControllerNoteDidStartDissolvingEvent*() noexcept {
  return static_cast<::GlobalNamespace::INoteControllerNoteDidStartDissolvingEvent*>(static_cast<void*>(this));
}
/// @brief Convert to "::GlobalNamespace::INoteControllerNoteDidStartDissolvingEvent"
template <typename T>
constexpr ::GlobalNamespace::INoteControllerNoteDidStartDissolvingEvent* GlobalNamespace::MirroredNoteController_1<T>::i___GlobalNamespace__INoteControllerNoteDidStartDissolvingEvent() noexcept {
  return static_cast<::GlobalNamespace::INoteControllerNoteDidStartDissolvingEvent*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::GlobalNamespace::INoteControllerNoteDidPassJumpThreeQuartersEvent"
template <typename T> constexpr GlobalNamespace::MirroredNoteController_1<T>::operator ::GlobalNamespace::INoteControllerNoteDidPassJumpThreeQuartersEvent*() noexcept {
  return static_cast<::GlobalNamespace::INoteControllerNoteDidPassJumpThreeQuartersEvent*>(static_cast<void*>(this));
}
/// @brief Convert to "::GlobalNamespace::INoteControllerNoteDidPassJumpThreeQuartersEvent"
template <typename T>
constexpr ::GlobalNamespace::INoteControllerNoteDidPassJumpThreeQuartersEvent*
GlobalNamespace::MirroredNoteController_1<T>::i___GlobalNamespace__INoteControllerNoteDidPassJumpThreeQuartersEvent() noexcept {
  return static_cast<::GlobalNamespace::INoteControllerNoteDidPassJumpThreeQuartersEvent*>(static_cast<void*>(this));
}
// Ctor Parameters []
template <typename T> constexpr ::GlobalNamespace::MirroredNoteController_1<T>::MirroredNoteController_1() {}
