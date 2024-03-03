#pragma once
#include "System/zzzz__Object_impl.hpp"
#include "UnityEngine/UIElements/Experimental/zzzz__ValueAnimation_1_def.hpp"
#include "System/zzzz__Action_2_def.hpp"
#include "System/zzzz__Action_def.hpp"
#include "System/zzzz__Func_2_def.hpp"
#include "System/zzzz__Func_4_def.hpp"
#include "UnityEngine/UIElements/Experimental/zzzz__IValueAnimationUpdate_def.hpp"
#include "UnityEngine/UIElements/zzzz__ObjectPool_1_def.hpp"
#include "UnityEngine/UIElements/zzzz__VisualElement_def.hpp"
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
template <typename T>
constexpr ::cordl_internals::to_const_pointer<::System::Func_2<float_t, float_t>*> const&
UnityEngine::UIElements::Experimental::ValueAnimation_1<T>::__cordl_internal_get__easingCurve_k__BackingField() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____easingCurve_k__BackingField;
}
template <typename T> constexpr void UnityEngine::UIElements::Experimental::ValueAnimation_1<T>::__cordl_internal_set__easingCurve_k__BackingField(::System::Func_2<float_t, float_t>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____easingCurve_k__BackingField)), cordl_internals::convert(std::forward<decltype(value)>(value)));
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
template <typename T>
constexpr ::cordl_internals::to_const_pointer<::System::Action*> const& UnityEngine::UIElements::Experimental::ValueAnimation_1<T>::__cordl_internal_get__onAnimationCompleted_k__BackingField() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____onAnimationCompleted_k__BackingField;
}
template <typename T> constexpr void UnityEngine::UIElements::Experimental::ValueAnimation_1<T>::__cordl_internal_set__onAnimationCompleted_k__BackingField(::System::Action* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____onAnimationCompleted_k__BackingField)),
                                          cordl_internals::convert(std::forward<decltype(value)>(value)));
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
template <typename T>
constexpr ::cordl_internals::to_const_pointer<::UnityEngine::UIElements::VisualElement*> const&
UnityEngine::UIElements::Experimental::ValueAnimation_1<T>::__cordl_internal_get__owner_k__BackingField() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____owner_k__BackingField;
}
template <typename T> constexpr void UnityEngine::UIElements::Experimental::ValueAnimation_1<T>::__cordl_internal_set__owner_k__BackingField(::UnityEngine::UIElements::VisualElement* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____owner_k__BackingField)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
template <typename T>
constexpr ::System::Action_2<::UnityEngine::UIElements::VisualElement*, T>*& UnityEngine::UIElements::Experimental::ValueAnimation_1<T>::__cordl_internal_get__valueUpdated_k__BackingField() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____valueUpdated_k__BackingField;
}
template <typename T>
constexpr ::cordl_internals::to_const_pointer<::System::Action_2<::UnityEngine::UIElements::VisualElement*, T>*> const&
UnityEngine::UIElements::Experimental::ValueAnimation_1<T>::__cordl_internal_get__valueUpdated_k__BackingField() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____valueUpdated_k__BackingField;
}
template <typename T>
constexpr void UnityEngine::UIElements::Experimental::ValueAnimation_1<T>::__cordl_internal_set__valueUpdated_k__BackingField(::System::Action_2<::UnityEngine::UIElements::VisualElement*, T>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____valueUpdated_k__BackingField)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
template <typename T>
constexpr ::System::Func_2<::UnityEngine::UIElements::VisualElement*, T>*& UnityEngine::UIElements::Experimental::ValueAnimation_1<T>::__cordl_internal_get__initialValue_k__BackingField() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____initialValue_k__BackingField;
}
template <typename T>
constexpr ::cordl_internals::to_const_pointer<::System::Func_2<::UnityEngine::UIElements::VisualElement*, T>*> const&
UnityEngine::UIElements::Experimental::ValueAnimation_1<T>::__cordl_internal_get__initialValue_k__BackingField() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____initialValue_k__BackingField;
}
template <typename T>
constexpr void UnityEngine::UIElements::Experimental::ValueAnimation_1<T>::__cordl_internal_set__initialValue_k__BackingField(::System::Func_2<::UnityEngine::UIElements::VisualElement*, T>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____initialValue_k__BackingField)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
template <typename T> constexpr ::System::Func_4<T, T, float_t, T>*& UnityEngine::UIElements::Experimental::ValueAnimation_1<T>::__cordl_internal_get__interpolator_k__BackingField() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____interpolator_k__BackingField;
}
template <typename T>
constexpr ::cordl_internals::to_const_pointer<::System::Func_4<T, T, float_t, T>*> const&
UnityEngine::UIElements::Experimental::ValueAnimation_1<T>::__cordl_internal_get__interpolator_k__BackingField() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____interpolator_k__BackingField;
}
template <typename T> constexpr void UnityEngine::UIElements::Experimental::ValueAnimation_1<T>::__cordl_internal_set__interpolator_k__BackingField(::System::Func_4<T, T, float_t, T>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____interpolator_k__BackingField)), cordl_internals::convert(std::forward<decltype(value)>(value)));
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
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____from)), cordl_internals::convert(std::forward<decltype(value)>(value)));
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
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____to_k__BackingField)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
template <typename T>
inline void
UnityEngine::UIElements::Experimental::ValueAnimation_1<T>::setStaticF_sObjectPool(::UnityEngine::UIElements::ObjectPool_1<::UnityEngine::UIElements::Experimental::ValueAnimation_1<T>*>* value) {
  ::cordl_internals::setStaticField<::UnityEngine::UIElements::ObjectPool_1<::UnityEngine::UIElements::Experimental::ValueAnimation_1<T>*>*, "sObjectPool",
                                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::Experimental::ValueAnimation_1<T>*>::get>(
      std::forward<::UnityEngine::UIElements::ObjectPool_1<::UnityEngine::UIElements::Experimental::ValueAnimation_1<T>*>*>(value));
}
template <typename T>
inline ::UnityEngine::UIElements::ObjectPool_1<::UnityEngine::UIElements::Experimental::ValueAnimation_1<T>*>* UnityEngine::UIElements::Experimental::ValueAnimation_1<T>::getStaticF_sObjectPool() {
  return ::cordl_internals::getStaticField<::UnityEngine::UIElements::ObjectPool_1<::UnityEngine::UIElements::Experimental::ValueAnimation_1<T>*>*, "sObjectPool",
                                           ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::Experimental::ValueAnimation_1<T>*>::get>();
}
template <typename T> inline int32_t UnityEngine::UIElements::Experimental::ValueAnimation_1<T>::get_durationMs() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::Experimental::ValueAnimation_1<T>*>::get(), "get_durationMs",
                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<int32_t, false>(this, ___internal_method);
}
template <typename T> inline void UnityEngine::UIElements::Experimental::ValueAnimation_1<T>::set_durationMs(int32_t value) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::Experimental::ValueAnimation_1<T>*>::get(), "set_durationMs",
                                               std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
template <typename T> inline ::System::Func_2<float_t, float_t>* UnityEngine::UIElements::Experimental::ValueAnimation_1<T>::get_easingCurve() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::Experimental::ValueAnimation_1<T>*>::get(), "get_easingCurve",
                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::System::Func_2<float_t, float_t>*, false>(this, ___internal_method);
}
template <typename T> inline void UnityEngine::UIElements::Experimental::ValueAnimation_1<T>::set_easingCurve(::System::Func_2<float_t, float_t>* value) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::Experimental::ValueAnimation_1<T>*>::get(), "set_easingCurve", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Func_2<float_t, float_t>*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
template <typename T> inline bool UnityEngine::UIElements::Experimental::ValueAnimation_1<T>::get_isRunning() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::Experimental::ValueAnimation_1<T>*>::get(), "get_isRunning",
                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
template <typename T> inline void UnityEngine::UIElements::Experimental::ValueAnimation_1<T>::set_isRunning(bool value) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::Experimental::ValueAnimation_1<T>*>::get(), "set_isRunning",
                                               std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
template <typename T> inline ::System::Action* UnityEngine::UIElements::Experimental::ValueAnimation_1<T>::get_onAnimationCompleted() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::Experimental::ValueAnimation_1<T>*>::get(), "get_onAnimationCompleted",
                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::System::Action*, false>(this, ___internal_method);
}
template <typename T> inline void UnityEngine::UIElements::Experimental::ValueAnimation_1<T>::set_onAnimationCompleted(::System::Action* value) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::Experimental::ValueAnimation_1<T>*>::get(), "set_onAnimationCompleted",
                                  std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
template <typename T> inline bool UnityEngine::UIElements::Experimental::ValueAnimation_1<T>::get_autoRecycle() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::Experimental::ValueAnimation_1<T>*>::get(), "get_autoRecycle",
                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
template <typename T> inline void UnityEngine::UIElements::Experimental::ValueAnimation_1<T>::set_autoRecycle(bool value) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::Experimental::ValueAnimation_1<T>*>::get(), "set_autoRecycle",
                                               std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
template <typename T> inline bool UnityEngine::UIElements::Experimental::ValueAnimation_1<T>::get_recycled() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::Experimental::ValueAnimation_1<T>*>::get(), "get_recycled",
                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
template <typename T> inline void UnityEngine::UIElements::Experimental::ValueAnimation_1<T>::set_recycled(bool value) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::Experimental::ValueAnimation_1<T>*>::get(), "set_recycled",
                                               std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
template <typename T> inline ::UnityEngine::UIElements::VisualElement* UnityEngine::UIElements::Experimental::ValueAnimation_1<T>::get_owner() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::Experimental::ValueAnimation_1<T>*>::get(), "get_owner",
                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::UIElements::VisualElement*, false>(this, ___internal_method);
}
template <typename T> inline void UnityEngine::UIElements::Experimental::ValueAnimation_1<T>::set_owner(::UnityEngine::UIElements::VisualElement* value) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::Experimental::ValueAnimation_1<T>*>::get(), "set_owner", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::UIElements::VisualElement*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
template <typename T> inline ::System::Action_2<::UnityEngine::UIElements::VisualElement*, T>* UnityEngine::UIElements::Experimental::ValueAnimation_1<T>::get_valueUpdated() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::Experimental::ValueAnimation_1<T>*>::get(), "get_valueUpdated",
                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::System::Action_2<::UnityEngine::UIElements::VisualElement*, T>*, false>(this, ___internal_method);
}
template <typename T> inline void UnityEngine::UIElements::Experimental::ValueAnimation_1<T>::set_valueUpdated(::System::Action_2<::UnityEngine::UIElements::VisualElement*, T>* value) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::Experimental::ValueAnimation_1<T>*>::get(), "set_valueUpdated", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action_2<::UnityEngine::UIElements::VisualElement*, T>*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
template <typename T> inline ::System::Func_2<::UnityEngine::UIElements::VisualElement*, T>* UnityEngine::UIElements::Experimental::ValueAnimation_1<T>::get_initialValue() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::Experimental::ValueAnimation_1<T>*>::get(), "get_initialValue",
                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::System::Func_2<::UnityEngine::UIElements::VisualElement*, T>*, false>(this, ___internal_method);
}
template <typename T> inline void UnityEngine::UIElements::Experimental::ValueAnimation_1<T>::set_initialValue(::System::Func_2<::UnityEngine::UIElements::VisualElement*, T>* value) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::Experimental::ValueAnimation_1<T>*>::get(), "set_initialValue", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Func_2<::UnityEngine::UIElements::VisualElement*, T>*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
template <typename T> inline ::System::Func_4<T, T, float_t, T>* UnityEngine::UIElements::Experimental::ValueAnimation_1<T>::get_interpolator() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::Experimental::ValueAnimation_1<T>*>::get(), "get_interpolator",
                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::System::Func_4<T, T, float_t, T>*, false>(this, ___internal_method);
}
template <typename T> inline void UnityEngine::UIElements::Experimental::ValueAnimation_1<T>::set_interpolator(::System::Func_4<T, T, float_t, T>* value) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::Experimental::ValueAnimation_1<T>*>::get(), "set_interpolator", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Func_4<T, T, float_t, T>*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
template <typename T> inline T UnityEngine::UIElements::Experimental::ValueAnimation_1<T>::get_from() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::Experimental::ValueAnimation_1<T>*>::get(), "get_from",
                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<T, false>(this, ___internal_method);
}
template <typename T> inline void UnityEngine::UIElements::Experimental::ValueAnimation_1<T>::set_from(T value) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::Experimental::ValueAnimation_1<T>*>::get(), "set_from",
                                               std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<T>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
template <typename T> inline T UnityEngine::UIElements::Experimental::ValueAnimation_1<T>::get_to() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::Experimental::ValueAnimation_1<T>*>::get(), "get_to",
                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<T, false>(this, ___internal_method);
}
template <typename T> inline void UnityEngine::UIElements::Experimental::ValueAnimation_1<T>::set_to(T value) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::Experimental::ValueAnimation_1<T>*>::get(), "set_to",
                                               std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<T>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
template <typename T> inline ::UnityEngine::UIElements::Experimental::ValueAnimation_1<T>* UnityEngine::UIElements::Experimental::ValueAnimation_1<T>::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::UnityEngine::UIElements::Experimental::ValueAnimation_1<T>*>());
}
template <typename T> inline void UnityEngine::UIElements::Experimental::ValueAnimation_1<T>::_ctor() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::Experimental::ValueAnimation_1<T>*>::get(), ".ctor",
                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
template <typename T> inline void UnityEngine::UIElements::Experimental::ValueAnimation_1<T>::Start() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::Experimental::ValueAnimation_1<T>*>::get(), "Start",
                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
template <typename T> inline void UnityEngine::UIElements::Experimental::ValueAnimation_1<T>::Stop() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::Experimental::ValueAnimation_1<T>*>::get(), "Stop",
                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
template <typename T> inline void UnityEngine::UIElements::Experimental::ValueAnimation_1<T>::Recycle() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::Experimental::ValueAnimation_1<T>*>::get(), "Recycle",
                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
template <typename T> inline void UnityEngine::UIElements::Experimental::ValueAnimation_1<T>::UnityEngine_UIElements_Experimental_IValueAnimationUpdate_Tick(int64_t currentTimeMs) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::Experimental::ValueAnimation_1<T>*>::get(), "UnityEngine.UIElements.Experimental.IValueAnimationUpdate.Tick",
      std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int64_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, currentTimeMs);
}
template <typename T> inline void UnityEngine::UIElements::Experimental::ValueAnimation_1<T>::SetDefaultValues() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::Experimental::ValueAnimation_1<T>*>::get(), "SetDefaultValues",
                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
template <typename T> inline void UnityEngine::UIElements::Experimental::ValueAnimation_1<T>::Unregister() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::Experimental::ValueAnimation_1<T>*>::get(), "Unregister",
                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
template <typename T> inline void UnityEngine::UIElements::Experimental::ValueAnimation_1<T>::Register() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::Experimental::ValueAnimation_1<T>*>::get(), "Register",
                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
template <typename T> inline void UnityEngine::UIElements::Experimental::ValueAnimation_1<T>::SetOwner(::UnityEngine::UIElements::VisualElement* e) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::Experimental::ValueAnimation_1<T>*>::get(), "SetOwner", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::UIElements::VisualElement*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, e);
}
template <typename T> inline void UnityEngine::UIElements::Experimental::ValueAnimation_1<T>::CheckNotRecycled() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::Experimental::ValueAnimation_1<T>*>::get(), "CheckNotRecycled",
                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
template <typename T>
inline ::UnityEngine::UIElements::Experimental::ValueAnimation_1<T>* UnityEngine::UIElements::Experimental::ValueAnimation_1<T>::Create(::UnityEngine::UIElements::VisualElement* e,
                                                                                                                                        ::System::Func_4<T, T, float_t, T>* interpolator) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::Experimental::ValueAnimation_1<T>*>::get(), "Create", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::UIElements::VisualElement*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Func_4<T, T, float_t, T>*>::get() })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::UIElements::Experimental::ValueAnimation_1<T>*, false>(nullptr, ___internal_method, e, interpolator);
}
template <typename T> inline ::UnityEngine::UIElements::Experimental::ValueAnimation_1<T>* UnityEngine::UIElements::Experimental::ValueAnimation_1<T>::KeepAlive() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::Experimental::ValueAnimation_1<T>*>::get(), "KeepAlive",
                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::UIElements::Experimental::ValueAnimation_1<T>*, false>(this, ___internal_method);
}
// Ctor Parameters []
template <typename T> constexpr ::UnityEngine::UIElements::Experimental::ValueAnimation_1<T>::ValueAnimation_1() {}
