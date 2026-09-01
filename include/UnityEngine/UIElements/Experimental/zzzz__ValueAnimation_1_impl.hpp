#pragma once
// IWYU pragma private; include "UnityEngine\UIElements\Experimental\ValueAnimation_1.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "UnityEngine/UIElements/Experimental/zzzz__ValueAnimation_1_def.hpp"
#include "System/zzzz__Action_2_def.hpp"
#include "System/zzzz__Action_def.hpp"
#include "System/zzzz__Func_2_def.hpp"
#include "System/zzzz__Func_4_def.hpp"
#include "UnityEngine/UIElements/Experimental/zzzz__IValueAnimationUpdate_def.hpp"
#include "UnityEngine/UIElements/Experimental/zzzz__ValueAnimation_1_def.hpp"
#include "UnityEngine/UIElements/zzzz__ObjectPool_1_def.hpp"
#include "UnityEngine/UIElements/zzzz__VisualElement_def.hpp"
template <typename T> inline void UnityEngine::UIElements::Experimental::ValueAnimation_1___c<T>::setStaticF___9(::UnityEngine::UIElements::Experimental::ValueAnimation_1___c<T>* value) {
  ::cordl_internals::setStaticField<::UnityEngine::UIElements::Experimental::ValueAnimation_1___c<T>*, "<>9", ::UnityEngine::UIElements::Experimental::ValueAnimation_1___c<T>*>(
      std::forward<::UnityEngine::UIElements::Experimental::ValueAnimation_1___c<T>*>(value));
}
template <typename T> inline ::UnityEngine::UIElements::Experimental::ValueAnimation_1___c<T>* UnityEngine::UIElements::Experimental::ValueAnimation_1___c<T>::getStaticF___9() {
  return ::cordl_internals::getStaticField<::UnityEngine::UIElements::Experimental::ValueAnimation_1___c<T>*, "<>9", ::UnityEngine::UIElements::Experimental::ValueAnimation_1___c<T>*>();
}
template <typename T> inline void UnityEngine::UIElements::Experimental::ValueAnimation_1___c<T>::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::Experimental::ValueAnimation_1___c<T>*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
template <typename T> inline ::UnityEngine::UIElements::Experimental::ValueAnimation_1<T>* UnityEngine::UIElements::Experimental::ValueAnimation_1___c<T>::__cctor_b__67_0() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::Experimental::ValueAnimation_1___c<T>*>(), { "<.cctor>b__67_0", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::UIElements::Experimental::ValueAnimation_1<T>*>(this, ___internal_method);
}
template <typename T> inline ::UnityEngine::UIElements::Experimental::ValueAnimation_1___c<T>* UnityEngine::UIElements::Experimental::ValueAnimation_1___c<T>::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::UnityEngine::UIElements::Experimental::ValueAnimation_1___c<T>*>());
}
// Ctor Parameters []
template <typename T> constexpr ::UnityEngine::UIElements::Experimental::ValueAnimation_1___c<T>::ValueAnimation_1___c() {}
template <typename T> constexpr int64_t& UnityEngine::UIElements::Experimental::ValueAnimation_1<T>::__cordl_internal_get_m_StartTimeMs() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_StartTimeMs;
}
template <typename T> constexpr int64_t const& UnityEngine::UIElements::Experimental::ValueAnimation_1<T>::__cordl_internal_get_m_StartTimeMs() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_StartTimeMs;
}
template <typename T> constexpr void UnityEngine::UIElements::Experimental::ValueAnimation_1<T>::__cordl_internal_set_m_StartTimeMs(int64_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_StartTimeMs = value;
}
template <typename T> constexpr int32_t& UnityEngine::UIElements::Experimental::ValueAnimation_1<T>::__cordl_internal_get_m_DurationMs() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_DurationMs;
}
template <typename T> constexpr int32_t const& UnityEngine::UIElements::Experimental::ValueAnimation_1<T>::__cordl_internal_get_m_DurationMs() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_DurationMs;
}
template <typename T> constexpr void UnityEngine::UIElements::Experimental::ValueAnimation_1<T>::__cordl_internal_set_m_DurationMs(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_DurationMs = value;
}
template <typename T> constexpr ::System::Func_2<float_t, float_t>*& UnityEngine::UIElements::Experimental::ValueAnimation_1<T>::__cordl_internal_get__easingCurve_k__BackingField() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____easingCurve_k__BackingField;
}
template <typename T> constexpr ::System::Func_2<float_t, float_t>* const& UnityEngine::UIElements::Experimental::ValueAnimation_1<T>::__cordl_internal_get__easingCurve_k__BackingField() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____easingCurve_k__BackingField;
}
template <typename T> constexpr void UnityEngine::UIElements::Experimental::ValueAnimation_1<T>::__cordl_internal_set__easingCurve_k__BackingField(::System::Func_2<float_t, float_t>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____easingCurve_k__BackingField = value;
}
template <typename T> constexpr bool& UnityEngine::UIElements::Experimental::ValueAnimation_1<T>::__cordl_internal_get__isRunning_k__BackingField() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____isRunning_k__BackingField;
}
template <typename T> constexpr bool const& UnityEngine::UIElements::Experimental::ValueAnimation_1<T>::__cordl_internal_get__isRunning_k__BackingField() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____isRunning_k__BackingField;
}
template <typename T> constexpr void UnityEngine::UIElements::Experimental::ValueAnimation_1<T>::__cordl_internal_set__isRunning_k__BackingField(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____isRunning_k__BackingField = value;
}
template <typename T> constexpr ::System::Action*& UnityEngine::UIElements::Experimental::ValueAnimation_1<T>::__cordl_internal_get__onAnimationCompleted_k__BackingField() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____onAnimationCompleted_k__BackingField;
}
template <typename T> constexpr ::System::Action* const& UnityEngine::UIElements::Experimental::ValueAnimation_1<T>::__cordl_internal_get__onAnimationCompleted_k__BackingField() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____onAnimationCompleted_k__BackingField;
}
template <typename T> constexpr void UnityEngine::UIElements::Experimental::ValueAnimation_1<T>::__cordl_internal_set__onAnimationCompleted_k__BackingField(::System::Action* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____onAnimationCompleted_k__BackingField = value;
}
template <typename T> constexpr bool& UnityEngine::UIElements::Experimental::ValueAnimation_1<T>::__cordl_internal_get__autoRecycle_k__BackingField() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____autoRecycle_k__BackingField;
}
template <typename T> constexpr bool const& UnityEngine::UIElements::Experimental::ValueAnimation_1<T>::__cordl_internal_get__autoRecycle_k__BackingField() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____autoRecycle_k__BackingField;
}
template <typename T> constexpr void UnityEngine::UIElements::Experimental::ValueAnimation_1<T>::__cordl_internal_set__autoRecycle_k__BackingField(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____autoRecycle_k__BackingField = value;
}
template <typename T> constexpr bool& UnityEngine::UIElements::Experimental::ValueAnimation_1<T>::__cordl_internal_get__recycled_k__BackingField() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____recycled_k__BackingField;
}
template <typename T> constexpr bool const& UnityEngine::UIElements::Experimental::ValueAnimation_1<T>::__cordl_internal_get__recycled_k__BackingField() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____recycled_k__BackingField;
}
template <typename T> constexpr void UnityEngine::UIElements::Experimental::ValueAnimation_1<T>::__cordl_internal_set__recycled_k__BackingField(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____recycled_k__BackingField = value;
}
template <typename T> constexpr ::UnityEngine::UIElements::VisualElement*& UnityEngine::UIElements::Experimental::ValueAnimation_1<T>::__cordl_internal_get__owner_k__BackingField() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____owner_k__BackingField;
}
template <typename T> constexpr ::UnityEngine::UIElements::VisualElement* const& UnityEngine::UIElements::Experimental::ValueAnimation_1<T>::__cordl_internal_get__owner_k__BackingField() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____owner_k__BackingField;
}
template <typename T> constexpr void UnityEngine::UIElements::Experimental::ValueAnimation_1<T>::__cordl_internal_set__owner_k__BackingField(::UnityEngine::UIElements::VisualElement* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____owner_k__BackingField = value;
}
template <typename T>
constexpr ::System::Action_2<::UnityEngine::UIElements::VisualElement*, T>*& UnityEngine::UIElements::Experimental::ValueAnimation_1<T>::__cordl_internal_get__valueUpdated_k__BackingField() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____valueUpdated_k__BackingField;
}
template <typename T>
constexpr ::System::Action_2<::UnityEngine::UIElements::VisualElement*, T>* const&
UnityEngine::UIElements::Experimental::ValueAnimation_1<T>::__cordl_internal_get__valueUpdated_k__BackingField() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____valueUpdated_k__BackingField;
}
template <typename T>
constexpr void UnityEngine::UIElements::Experimental::ValueAnimation_1<T>::__cordl_internal_set__valueUpdated_k__BackingField(::System::Action_2<::UnityEngine::UIElements::VisualElement*, T>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____valueUpdated_k__BackingField = value;
}
template <typename T>
constexpr ::System::Func_2<::UnityEngine::UIElements::VisualElement*, T>*& UnityEngine::UIElements::Experimental::ValueAnimation_1<T>::__cordl_internal_get__initialValue_k__BackingField() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____initialValue_k__BackingField;
}
template <typename T>
constexpr ::System::Func_2<::UnityEngine::UIElements::VisualElement*, T>* const&
UnityEngine::UIElements::Experimental::ValueAnimation_1<T>::__cordl_internal_get__initialValue_k__BackingField() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____initialValue_k__BackingField;
}
template <typename T>
constexpr void UnityEngine::UIElements::Experimental::ValueAnimation_1<T>::__cordl_internal_set__initialValue_k__BackingField(::System::Func_2<::UnityEngine::UIElements::VisualElement*, T>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____initialValue_k__BackingField = value;
}
template <typename T> constexpr ::System::Func_4<T, T, float_t, T>*& UnityEngine::UIElements::Experimental::ValueAnimation_1<T>::__cordl_internal_get__interpolator_k__BackingField() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____interpolator_k__BackingField;
}
template <typename T> constexpr ::System::Func_4<T, T, float_t, T>* const& UnityEngine::UIElements::Experimental::ValueAnimation_1<T>::__cordl_internal_get__interpolator_k__BackingField() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____interpolator_k__BackingField;
}
template <typename T> constexpr void UnityEngine::UIElements::Experimental::ValueAnimation_1<T>::__cordl_internal_set__interpolator_k__BackingField(::System::Func_4<T, T, float_t, T>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____interpolator_k__BackingField = value;
}
template <typename T> constexpr T& UnityEngine::UIElements::Experimental::ValueAnimation_1<T>::__cordl_internal_get__from() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____from;
}
template <typename T> constexpr T const& UnityEngine::UIElements::Experimental::ValueAnimation_1<T>::__cordl_internal_get__from() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____from;
}
template <typename T> constexpr void UnityEngine::UIElements::Experimental::ValueAnimation_1<T>::__cordl_internal_set__from(T value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____from = value;
}
template <typename T> constexpr bool& UnityEngine::UIElements::Experimental::ValueAnimation_1<T>::__cordl_internal_get_fromValueSet() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___fromValueSet;
}
template <typename T> constexpr bool const& UnityEngine::UIElements::Experimental::ValueAnimation_1<T>::__cordl_internal_get_fromValueSet() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___fromValueSet;
}
template <typename T> constexpr void UnityEngine::UIElements::Experimental::ValueAnimation_1<T>::__cordl_internal_set_fromValueSet(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___fromValueSet = value;
}
template <typename T> constexpr T& UnityEngine::UIElements::Experimental::ValueAnimation_1<T>::__cordl_internal_get__to_k__BackingField() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____to_k__BackingField;
}
template <typename T> constexpr T const& UnityEngine::UIElements::Experimental::ValueAnimation_1<T>::__cordl_internal_get__to_k__BackingField() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____to_k__BackingField;
}
template <typename T> constexpr void UnityEngine::UIElements::Experimental::ValueAnimation_1<T>::__cordl_internal_set__to_k__BackingField(T value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____to_k__BackingField = value;
}
template <typename T>
inline void
UnityEngine::UIElements::Experimental::ValueAnimation_1<T>::setStaticF_sObjectPool(::UnityEngine::UIElements::ObjectPool_1<::UnityEngine::UIElements::Experimental::ValueAnimation_1<T>*>* value) {
  ::cordl_internals::setStaticField<::UnityEngine::UIElements::ObjectPool_1<::UnityEngine::UIElements::Experimental::ValueAnimation_1<T>*>*, "sObjectPool",
                                    ::UnityEngine::UIElements::Experimental::ValueAnimation_1<T>*>(
      std::forward<::UnityEngine::UIElements::ObjectPool_1<::UnityEngine::UIElements::Experimental::ValueAnimation_1<T>*>*>(value));
}
template <typename T>
inline ::UnityEngine::UIElements::ObjectPool_1<::UnityEngine::UIElements::Experimental::ValueAnimation_1<T>*>* UnityEngine::UIElements::Experimental::ValueAnimation_1<T>::getStaticF_sObjectPool() {
  return ::cordl_internals::getStaticField<::UnityEngine::UIElements::ObjectPool_1<::UnityEngine::UIElements::Experimental::ValueAnimation_1<T>*>*, "sObjectPool",
                                           ::UnityEngine::UIElements::Experimental::ValueAnimation_1<T>*>();
}
template <typename T> inline int32_t UnityEngine::UIElements::Experimental::ValueAnimation_1<T>::get_durationMs() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::Experimental::ValueAnimation_1<T>*>(), { "get_durationMs", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method);
}
template <typename T> inline void UnityEngine::UIElements::Experimental::ValueAnimation_1<T>::set_durationMs(int32_t value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::Experimental::ValueAnimation_1<T>*>(), { "set_durationMs", {}, { ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
template <typename T> inline ::System::Func_2<float_t, float_t>* UnityEngine::UIElements::Experimental::ValueAnimation_1<T>::get_easingCurve() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::Experimental::ValueAnimation_1<T>*>(), { "get_easingCurve", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::System::Func_2<float_t, float_t>*>(this, ___internal_method);
}
template <typename T> inline void UnityEngine::UIElements::Experimental::ValueAnimation_1<T>::set_easingCurve(::System::Func_2<float_t, float_t>* value) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::Experimental::ValueAnimation_1<T>*>(),
                                                                                         { "set_easingCurve", {}, { ::i2c::type_of<::System::Func_2<float_t, float_t>*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
template <typename T> inline bool UnityEngine::UIElements::Experimental::ValueAnimation_1<T>::get_isRunning() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::Experimental::ValueAnimation_1<T>*>(), { "get_isRunning", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
template <typename T> inline void UnityEngine::UIElements::Experimental::ValueAnimation_1<T>::set_isRunning(bool value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::Experimental::ValueAnimation_1<T>*>(), { "set_isRunning", {}, { ::i2c::type_of<bool>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
template <typename T> inline ::System::Action* UnityEngine::UIElements::Experimental::ValueAnimation_1<T>::get_onAnimationCompleted() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::Experimental::ValueAnimation_1<T>*>(), { "get_onAnimationCompleted", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::System::Action*>(this, ___internal_method);
}
template <typename T> inline void UnityEngine::UIElements::Experimental::ValueAnimation_1<T>::set_onAnimationCompleted(::System::Action* value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::Experimental::ValueAnimation_1<T>*>(), { "set_onAnimationCompleted", {}, { ::i2c::type_of<::System::Action*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
template <typename T> inline bool UnityEngine::UIElements::Experimental::ValueAnimation_1<T>::get_autoRecycle() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::Experimental::ValueAnimation_1<T>*>(), { "get_autoRecycle", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
template <typename T> inline void UnityEngine::UIElements::Experimental::ValueAnimation_1<T>::set_autoRecycle(bool value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::Experimental::ValueAnimation_1<T>*>(), { "set_autoRecycle", {}, { ::i2c::type_of<bool>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
template <typename T> inline bool UnityEngine::UIElements::Experimental::ValueAnimation_1<T>::get_recycled() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::Experimental::ValueAnimation_1<T>*>(), { "get_recycled", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
template <typename T> inline void UnityEngine::UIElements::Experimental::ValueAnimation_1<T>::set_recycled(bool value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::Experimental::ValueAnimation_1<T>*>(), { "set_recycled", {}, { ::i2c::type_of<bool>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
template <typename T> inline ::UnityEngine::UIElements::VisualElement* UnityEngine::UIElements::Experimental::ValueAnimation_1<T>::get_owner() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::Experimental::ValueAnimation_1<T>*>(), { "get_owner", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::UIElements::VisualElement*>(this, ___internal_method);
}
template <typename T> inline void UnityEngine::UIElements::Experimental::ValueAnimation_1<T>::set_owner(::UnityEngine::UIElements::VisualElement* value) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::Experimental::ValueAnimation_1<T>*>(),
                                                                                         { "set_owner", {}, { ::i2c::type_of<::UnityEngine::UIElements::VisualElement*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
template <typename T> inline ::System::Action_2<::UnityEngine::UIElements::VisualElement*, T>* UnityEngine::UIElements::Experimental::ValueAnimation_1<T>::get_valueUpdated() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::Experimental::ValueAnimation_1<T>*>(), { "get_valueUpdated", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::System::Action_2<::UnityEngine::UIElements::VisualElement*, T>*>(this, ___internal_method);
}
template <typename T> inline void UnityEngine::UIElements::Experimental::ValueAnimation_1<T>::set_valueUpdated(::System::Action_2<::UnityEngine::UIElements::VisualElement*, T>* value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::Experimental::ValueAnimation_1<T>*>(),
                                                           { "set_valueUpdated", {}, { ::i2c::type_of<::System::Action_2<::UnityEngine::UIElements::VisualElement*, T>*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
template <typename T> inline ::System::Func_2<::UnityEngine::UIElements::VisualElement*, T>* UnityEngine::UIElements::Experimental::ValueAnimation_1<T>::get_initialValue() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::Experimental::ValueAnimation_1<T>*>(), { "get_initialValue", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::System::Func_2<::UnityEngine::UIElements::VisualElement*, T>*>(this, ___internal_method);
}
template <typename T> inline void UnityEngine::UIElements::Experimental::ValueAnimation_1<T>::set_initialValue(::System::Func_2<::UnityEngine::UIElements::VisualElement*, T>* value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::Experimental::ValueAnimation_1<T>*>(),
                                                           { "set_initialValue", {}, { ::i2c::type_of<::System::Func_2<::UnityEngine::UIElements::VisualElement*, T>*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
template <typename T> inline ::System::Func_4<T, T, float_t, T>* UnityEngine::UIElements::Experimental::ValueAnimation_1<T>::get_interpolator() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::Experimental::ValueAnimation_1<T>*>(), { "get_interpolator", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::System::Func_4<T, T, float_t, T>*>(this, ___internal_method);
}
template <typename T> inline void UnityEngine::UIElements::Experimental::ValueAnimation_1<T>::set_interpolator(::System::Func_4<T, T, float_t, T>* value) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::Experimental::ValueAnimation_1<T>*>(),
                                                                                         { "set_interpolator", {}, { ::i2c::type_of<::System::Func_4<T, T, float_t, T>*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
template <typename T> inline T UnityEngine::UIElements::Experimental::ValueAnimation_1<T>::get_from() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::Experimental::ValueAnimation_1<T>*>(), { "get_from", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<T>(this, ___internal_method);
}
template <typename T> inline void UnityEngine::UIElements::Experimental::ValueAnimation_1<T>::set_from(T value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::Experimental::ValueAnimation_1<T>*>(), { "set_from", {}, { ::i2c::type_of<T>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
template <typename T> inline T UnityEngine::UIElements::Experimental::ValueAnimation_1<T>::get_to() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::Experimental::ValueAnimation_1<T>*>(), { "get_to", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<T>(this, ___internal_method);
}
template <typename T> inline void UnityEngine::UIElements::Experimental::ValueAnimation_1<T>::set_to(T value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::Experimental::ValueAnimation_1<T>*>(), { "set_to", {}, { ::i2c::type_of<T>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
template <typename T> inline void UnityEngine::UIElements::Experimental::ValueAnimation_1<T>::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::Experimental::ValueAnimation_1<T>*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
template <typename T> inline void UnityEngine::UIElements::Experimental::ValueAnimation_1<T>::Start() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::Experimental::ValueAnimation_1<T>*>(), { "Start", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
template <typename T> inline void UnityEngine::UIElements::Experimental::ValueAnimation_1<T>::Stop() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::Experimental::ValueAnimation_1<T>*>(), { "Stop", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
template <typename T> inline void UnityEngine::UIElements::Experimental::ValueAnimation_1<T>::Recycle() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::Experimental::ValueAnimation_1<T>*>(), { "Recycle", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
template <typename T> inline void UnityEngine::UIElements::Experimental::ValueAnimation_1<T>::UnityEngine_UIElements_Experimental_IValueAnimationUpdate_Tick(int64_t currentTimeMs) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::Experimental::ValueAnimation_1<T>*>(),
                                                                                         { "UnityEngine.UIElements.Experimental.IValueAnimationUpdate.Tick", {}, { ::i2c::type_of<int64_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, currentTimeMs);
}
template <typename T> inline void UnityEngine::UIElements::Experimental::ValueAnimation_1<T>::SetDefaultValues() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::Experimental::ValueAnimation_1<T>*>(), { "SetDefaultValues", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
template <typename T> inline void UnityEngine::UIElements::Experimental::ValueAnimation_1<T>::Unregister() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::Experimental::ValueAnimation_1<T>*>(), { "Unregister", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
template <typename T> inline void UnityEngine::UIElements::Experimental::ValueAnimation_1<T>::Register() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::Experimental::ValueAnimation_1<T>*>(), { "Register", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
template <typename T> inline void UnityEngine::UIElements::Experimental::ValueAnimation_1<T>::SetOwner(::UnityEngine::UIElements::VisualElement* e) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::Experimental::ValueAnimation_1<T>*>(),
                                                                                         { "SetOwner", {}, { ::i2c::type_of<::UnityEngine::UIElements::VisualElement*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, e);
}
template <typename T> inline void UnityEngine::UIElements::Experimental::ValueAnimation_1<T>::CheckNotRecycled() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::Experimental::ValueAnimation_1<T>*>(), { "CheckNotRecycled", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
template <typename T>
inline ::UnityEngine::UIElements::Experimental::ValueAnimation_1<T>* UnityEngine::UIElements::Experimental::ValueAnimation_1<T>::Create(::UnityEngine::UIElements::VisualElement* e,
                                                                                                                                        ::System::Func_4<T, T, float_t, T>* interpolator) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::Experimental::ValueAnimation_1<T>*>(),
                                                           { "Create", {}, { ::i2c::type_of<::UnityEngine::UIElements::VisualElement*>(), ::i2c::type_of<::System::Func_4<T, T, float_t, T>*>() } })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::UIElements::Experimental::ValueAnimation_1<T>*>(nullptr, ___internal_method, e, interpolator);
}
template <typename T> inline ::UnityEngine::UIElements::Experimental::ValueAnimation_1<T>* UnityEngine::UIElements::Experimental::ValueAnimation_1<T>::KeepAlive() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::Experimental::ValueAnimation_1<T>*>(), { "KeepAlive", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::UIElements::Experimental::ValueAnimation_1<T>*>(this, ___internal_method);
}
template <typename T> inline ::UnityEngine::UIElements::Experimental::ValueAnimation_1<T>* UnityEngine::UIElements::Experimental::ValueAnimation_1<T>::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::UnityEngine::UIElements::Experimental::ValueAnimation_1<T>*>());
}
/// @brief Convert operator to "::UnityEngine::UIElements::Experimental::IValueAnimationUpdate"
template <typename T> constexpr UnityEngine::UIElements::Experimental::ValueAnimation_1<T>::operator ::UnityEngine::UIElements::Experimental::IValueAnimationUpdate*() noexcept {
  return static_cast<::UnityEngine::UIElements::Experimental::IValueAnimationUpdate*>(static_cast<void*>(this));
}
/// @brief Convert to "::UnityEngine::UIElements::Experimental::IValueAnimationUpdate"
template <typename T>
constexpr ::UnityEngine::UIElements::Experimental::IValueAnimationUpdate*
UnityEngine::UIElements::Experimental::ValueAnimation_1<T>::i___UnityEngine__UIElements__Experimental__IValueAnimationUpdate() noexcept {
  return static_cast<::UnityEngine::UIElements::Experimental::IValueAnimationUpdate*>(static_cast<void*>(this));
}
// Ctor Parameters []
template <typename T> constexpr ::UnityEngine::UIElements::Experimental::ValueAnimation_1<T>::ValueAnimation_1() {}
