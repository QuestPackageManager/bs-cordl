#pragma once
// IWYU pragma private; include "UnityEngine/Rendering/DebugDisplayStats_1.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "UnityEngine/Rendering/zzzz__DebugDisplayStats_1_def.hpp"
#include "System/Collections/Generic/zzzz__Dictionary_2_def.hpp"
#include "System/Collections/Generic/zzzz__HashSet_1_def.hpp"
#include "System/Collections/Generic/zzzz__IEnumerable_1_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
#include "System/Reflection/zzzz__MemberInfo_def.hpp"
#include "System/zzzz__Func_2_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "System/zzzz__Type_def.hpp"
#include "UnityEngine/Rendering/zzzz__DebugDisplayStats_1_def.hpp"
#include "UnityEngine/Rendering/zzzz__DebugUI_def.hpp"
#include "UnityEngine/Rendering/zzzz__ObservableList_1_def.hpp"
#include "UnityEngine/Rendering/zzzz__ProfilingSampler_def.hpp"
template <typename TProfileId> constexpr float_t& UnityEngine::Rendering::DebugDisplayStats_1_AccumulatedTiming<TProfileId>::__cordl_internal_get_accumulatedValue() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___accumulatedValue;
}
template <typename TProfileId> constexpr float_t const& UnityEngine::Rendering::DebugDisplayStats_1_AccumulatedTiming<TProfileId>::__cordl_internal_get_accumulatedValue() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___accumulatedValue;
}
template <typename TProfileId> constexpr void UnityEngine::Rendering::DebugDisplayStats_1_AccumulatedTiming<TProfileId>::__cordl_internal_set_accumulatedValue(float_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___accumulatedValue = value;
}
template <typename TProfileId> constexpr float_t& UnityEngine::Rendering::DebugDisplayStats_1_AccumulatedTiming<TProfileId>::__cordl_internal_get_lastAverage() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___lastAverage;
}
template <typename TProfileId> constexpr float_t const& UnityEngine::Rendering::DebugDisplayStats_1_AccumulatedTiming<TProfileId>::__cordl_internal_get_lastAverage() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___lastAverage;
}
template <typename TProfileId> constexpr void UnityEngine::Rendering::DebugDisplayStats_1_AccumulatedTiming<TProfileId>::__cordl_internal_set_lastAverage(float_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___lastAverage = value;
}
template <typename TProfileId> inline void UnityEngine::Rendering::DebugDisplayStats_1_AccumulatedTiming<TProfileId>::UpdateLastAverage(int32_t frameCount) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::DebugDisplayStats_1_AccumulatedTiming<TProfileId>*>::get(), "UpdateLastAverage",
                                  std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, frameCount);
}
template <typename TProfileId> inline void UnityEngine::Rendering::DebugDisplayStats_1_AccumulatedTiming<TProfileId>::_ctor() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::DebugDisplayStats_1_AccumulatedTiming<TProfileId>*>::get(), ".ctor",
                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
template <typename TProfileId>
inline ::UnityEngine::Rendering::DebugDisplayStats_1_AccumulatedTiming<TProfileId>* UnityEngine::Rendering::DebugDisplayStats_1_AccumulatedTiming<TProfileId>::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::UnityEngine::Rendering::DebugDisplayStats_1_AccumulatedTiming<TProfileId>*>());
}
// Ctor Parameters []
template <typename TProfileId> constexpr ::UnityEngine::Rendering::DebugDisplayStats_1_AccumulatedTiming<TProfileId>::DebugDisplayStats_1_AccumulatedTiming() {}
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
template <typename TProfileId> constexpr ::UnityEngine::Rendering::DebugDisplayStats_1_DebugProfilingType<TProfileId>::DebugDisplayStats_1_DebugProfilingType(int32_t value__) noexcept {
  this->value__ = value__;
}
// Ctor Parameters []
template <typename TProfileId> constexpr ::UnityEngine::Rendering::DebugDisplayStats_1_DebugProfilingType<TProfileId>::DebugDisplayStats_1_DebugProfilingType() {}
template <typename TProfileId>
constexpr ::UnityEngine::Rendering::DebugDisplayStats_1_DebugProfilingType<TProfileId> UnityEngine::Rendering::DebugDisplayStats_1_DebugProfilingType<TProfileId>::CPU{ static_cast<int32_t>(0x0) };
template <typename TProfileId>
constexpr ::UnityEngine::Rendering::DebugDisplayStats_1_DebugProfilingType<TProfileId> UnityEngine::Rendering::DebugDisplayStats_1_DebugProfilingType<TProfileId>::InlineCPU{ static_cast<int32_t>(
    0x1) };
template <typename TProfileId>
constexpr ::UnityEngine::Rendering::DebugDisplayStats_1_DebugProfilingType<TProfileId> UnityEngine::Rendering::DebugDisplayStats_1_DebugProfilingType<TProfileId>::GPU{ static_cast<int32_t>(0x2) };
template <typename TProfileId> constexpr TProfileId& UnityEngine::Rendering::DebugDisplayStats_1___c__DisplayClass19_0<TProfileId>::__cordl_internal_get_samplerId() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___samplerId;
}
template <typename TProfileId> constexpr TProfileId const& UnityEngine::Rendering::DebugDisplayStats_1___c__DisplayClass19_0<TProfileId>::__cordl_internal_get_samplerId() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___samplerId;
}
template <typename TProfileId> constexpr void UnityEngine::Rendering::DebugDisplayStats_1___c__DisplayClass19_0<TProfileId>::__cordl_internal_set_samplerId(TProfileId value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  ::cordl_internals::setInstanceField(this, &this->___samplerId, value);
}
template <typename TProfileId> constexpr ::UnityEngine::Rendering::ProfilingSampler*& UnityEngine::Rendering::DebugDisplayStats_1___c__DisplayClass19_0<TProfileId>::__cordl_internal_get_sampler() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___sampler;
}
template <typename TProfileId>
constexpr ::UnityEngine::Rendering::ProfilingSampler* const& UnityEngine::Rendering::DebugDisplayStats_1___c__DisplayClass19_0<TProfileId>::__cordl_internal_get_sampler() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___sampler;
}
template <typename TProfileId>
constexpr void UnityEngine::Rendering::DebugDisplayStats_1___c__DisplayClass19_0<TProfileId>::__cordl_internal_set_sampler(::UnityEngine::Rendering::ProfilingSampler* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  ::cordl_internals::setInstanceField(this, &this->___sampler, value);
}
template <typename TProfileId>
constexpr ::UnityEngine::Rendering::DebugDisplayStats_1_DebugProfilingType<TProfileId>& UnityEngine::Rendering::DebugDisplayStats_1___c__DisplayClass19_0<TProfileId>::__cordl_internal_get_type() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___type;
}
template <typename TProfileId>
constexpr ::UnityEngine::Rendering::DebugDisplayStats_1_DebugProfilingType<TProfileId> const&
UnityEngine::Rendering::DebugDisplayStats_1___c__DisplayClass19_0<TProfileId>::__cordl_internal_get_type() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___type;
}
template <typename TProfileId>
constexpr void
UnityEngine::Rendering::DebugDisplayStats_1___c__DisplayClass19_0<TProfileId>::__cordl_internal_set_type(::UnityEngine::Rendering::DebugDisplayStats_1_DebugProfilingType<TProfileId> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___type = value;
}
template <typename TProfileId>
constexpr ::UnityEngine::Rendering::DebugDisplayStats_1<TProfileId>*& UnityEngine::Rendering::DebugDisplayStats_1___c__DisplayClass19_0<TProfileId>::__cordl_internal_get___4__this() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->_____4__this;
}
template <typename TProfileId>
constexpr ::UnityEngine::Rendering::DebugDisplayStats_1<TProfileId>* const& UnityEngine::Rendering::DebugDisplayStats_1___c__DisplayClass19_0<TProfileId>::__cordl_internal_get___4__this() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->_____4__this;
}
template <typename TProfileId>
constexpr void UnityEngine::Rendering::DebugDisplayStats_1___c__DisplayClass19_0<TProfileId>::__cordl_internal_set___4__this(::UnityEngine::Rendering::DebugDisplayStats_1<TProfileId>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  ::cordl_internals::setInstanceField(this, &this->_____4__this, value);
}
template <typename TProfileId> inline void UnityEngine::Rendering::DebugDisplayStats_1___c__DisplayClass19_0<TProfileId>::_ctor() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::DebugDisplayStats_1___c__DisplayClass19_0<TProfileId>*>::get(), ".ctor",
                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
template <typename TProfileId> inline ::System::Object* UnityEngine::Rendering::DebugDisplayStats_1___c__DisplayClass19_0<TProfileId>::_BuildProfilingSamplerWidgetList_b__1() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::DebugDisplayStats_1___c__DisplayClass19_0<TProfileId>*>::get(),
                                               "<BuildProfilingSamplerWidgetList>b__1", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::System::Object*, false>(this, ___internal_method);
}
template <typename TProfileId>
inline ::UnityEngine::Rendering::DebugDisplayStats_1___c__DisplayClass19_0<TProfileId>* UnityEngine::Rendering::DebugDisplayStats_1___c__DisplayClass19_0<TProfileId>::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::UnityEngine::Rendering::DebugDisplayStats_1___c__DisplayClass19_0<TProfileId>*>());
}
// Ctor Parameters []
template <typename TProfileId> constexpr ::UnityEngine::Rendering::DebugDisplayStats_1___c__DisplayClass19_0<TProfileId>::DebugDisplayStats_1___c__DisplayClass19_0() {}
template <typename TProfileId> constexpr TProfileId& UnityEngine::Rendering::DebugDisplayStats_1___c__DisplayClass19_1<TProfileId>::__cordl_internal_get_samplerId() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___samplerId;
}
template <typename TProfileId> constexpr TProfileId const& UnityEngine::Rendering::DebugDisplayStats_1___c__DisplayClass19_1<TProfileId>::__cordl_internal_get_samplerId() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___samplerId;
}
template <typename TProfileId> constexpr void UnityEngine::Rendering::DebugDisplayStats_1___c__DisplayClass19_1<TProfileId>::__cordl_internal_set_samplerId(TProfileId value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  ::cordl_internals::setInstanceField(this, &this->___samplerId, value);
}
template <typename TProfileId>
constexpr ::UnityEngine::Rendering::DebugDisplayStats_1<TProfileId>*& UnityEngine::Rendering::DebugDisplayStats_1___c__DisplayClass19_1<TProfileId>::__cordl_internal_get___4__this() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->_____4__this;
}
template <typename TProfileId>
constexpr ::UnityEngine::Rendering::DebugDisplayStats_1<TProfileId>* const& UnityEngine::Rendering::DebugDisplayStats_1___c__DisplayClass19_1<TProfileId>::__cordl_internal_get___4__this() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->_____4__this;
}
template <typename TProfileId>
constexpr void UnityEngine::Rendering::DebugDisplayStats_1___c__DisplayClass19_1<TProfileId>::__cordl_internal_set___4__this(::UnityEngine::Rendering::DebugDisplayStats_1<TProfileId>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  ::cordl_internals::setInstanceField(this, &this->_____4__this, value);
}
template <typename TProfileId> inline void UnityEngine::Rendering::DebugDisplayStats_1___c__DisplayClass19_1<TProfileId>::_ctor() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::DebugDisplayStats_1___c__DisplayClass19_1<TProfileId>*>::get(), ".ctor",
                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
template <typename TProfileId> inline bool UnityEngine::Rendering::DebugDisplayStats_1___c__DisplayClass19_1<TProfileId>::_BuildProfilingSamplerWidgetList_b__2() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::DebugDisplayStats_1___c__DisplayClass19_1<TProfileId>*>::get(),
                                               "<BuildProfilingSamplerWidgetList>b__2", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
template <typename TProfileId>
inline ::UnityEngine::Rendering::DebugDisplayStats_1___c__DisplayClass19_1<TProfileId>* UnityEngine::Rendering::DebugDisplayStats_1___c__DisplayClass19_1<TProfileId>::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::UnityEngine::Rendering::DebugDisplayStats_1___c__DisplayClass19_1<TProfileId>*>());
}
// Ctor Parameters []
template <typename TProfileId> constexpr ::UnityEngine::Rendering::DebugDisplayStats_1___c__DisplayClass19_1<TProfileId>::DebugDisplayStats_1___c__DisplayClass19_1() {}
template <typename TProfileId> constexpr ::UnityEngine::Rendering::ProfilingSampler*& UnityEngine::Rendering::DebugDisplayStats_1___c__DisplayClass19_2<TProfileId>::__cordl_internal_get_sampler() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___sampler;
}
template <typename TProfileId>
constexpr ::UnityEngine::Rendering::ProfilingSampler* const& UnityEngine::Rendering::DebugDisplayStats_1___c__DisplayClass19_2<TProfileId>::__cordl_internal_get_sampler() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___sampler;
}
template <typename TProfileId>
constexpr void UnityEngine::Rendering::DebugDisplayStats_1___c__DisplayClass19_2<TProfileId>::__cordl_internal_set_sampler(::UnityEngine::Rendering::ProfilingSampler* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  ::cordl_internals::setInstanceField(this, &this->___sampler, value);
}
template <typename TProfileId>
constexpr ::UnityEngine::Rendering::DebugDisplayStats_1___c__DisplayClass19_1<TProfileId>*&
UnityEngine::Rendering::DebugDisplayStats_1___c__DisplayClass19_2<TProfileId>::__cordl_internal_get_CS$__8__locals1() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___CS$__8__locals1;
}
template <typename TProfileId>
constexpr ::UnityEngine::Rendering::DebugDisplayStats_1___c__DisplayClass19_1<TProfileId>* const&
UnityEngine::Rendering::DebugDisplayStats_1___c__DisplayClass19_2<TProfileId>::__cordl_internal_get_CS$__8__locals1() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___CS$__8__locals1;
}
template <typename TProfileId>
constexpr void UnityEngine::Rendering::DebugDisplayStats_1___c__DisplayClass19_2<TProfileId>::__cordl_internal_set_CS$__8__locals1(
    ::UnityEngine::Rendering::DebugDisplayStats_1___c__DisplayClass19_1<TProfileId>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  ::cordl_internals::setInstanceField(this, &this->___CS$__8__locals1, value);
}
template <typename TProfileId> inline void UnityEngine::Rendering::DebugDisplayStats_1___c__DisplayClass19_2<TProfileId>::_ctor() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::DebugDisplayStats_1___c__DisplayClass19_2<TProfileId>*>::get(), ".ctor",
                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
template <typename TProfileId>
inline ::UnityEngine::Rendering::DebugUI_Value*
UnityEngine::Rendering::DebugDisplayStats_1___c__DisplayClass19_2<TProfileId>::_BuildProfilingSamplerWidgetList_b__3(::UnityEngine::Rendering::DebugDisplayStats_1_DebugProfilingType<TProfileId> e) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::DebugDisplayStats_1___c__DisplayClass19_2<TProfileId>*>::get(), "<BuildProfilingSamplerWidgetList>b__3",
      std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::DebugDisplayStats_1_DebugProfilingType<TProfileId>>::get() })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::Rendering::DebugUI_Value*, false>(this, ___internal_method, e);
}
template <typename TProfileId>
inline ::UnityEngine::Rendering::DebugDisplayStats_1___c__DisplayClass19_2<TProfileId>* UnityEngine::Rendering::DebugDisplayStats_1___c__DisplayClass19_2<TProfileId>::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::UnityEngine::Rendering::DebugDisplayStats_1___c__DisplayClass19_2<TProfileId>*>());
}
// Ctor Parameters []
template <typename TProfileId> constexpr ::UnityEngine::Rendering::DebugDisplayStats_1___c__DisplayClass19_2<TProfileId>::DebugDisplayStats_1___c__DisplayClass19_2() {}
template <typename TProfileId> constexpr ::System::Type*& UnityEngine::Rendering::DebugDisplayStats_1___c__DisplayClass6_0<TProfileId>::__cordl_internal_get_type() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___type;
}
template <typename TProfileId> constexpr ::System::Type* const& UnityEngine::Rendering::DebugDisplayStats_1___c__DisplayClass6_0<TProfileId>::__cordl_internal_get_type() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___type;
}
template <typename TProfileId> constexpr void UnityEngine::Rendering::DebugDisplayStats_1___c__DisplayClass6_0<TProfileId>::__cordl_internal_set_type(::System::Type* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  ::cordl_internals::setInstanceField(this, &this->___type, value);
}
template <typename TProfileId>
constexpr ::System::Func_2<::System::Reflection::MemberInfo*, bool>*& UnityEngine::Rendering::DebugDisplayStats_1___c__DisplayClass6_0<TProfileId>::__cordl_internal_get___9__0() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->_____9__0;
}
template <typename TProfileId>
constexpr ::System::Func_2<::System::Reflection::MemberInfo*, bool>* const& UnityEngine::Rendering::DebugDisplayStats_1___c__DisplayClass6_0<TProfileId>::__cordl_internal_get___9__0() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->_____9__0;
}
template <typename TProfileId>
constexpr void UnityEngine::Rendering::DebugDisplayStats_1___c__DisplayClass6_0<TProfileId>::__cordl_internal_set___9__0(::System::Func_2<::System::Reflection::MemberInfo*, bool>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  ::cordl_internals::setInstanceField(this, &this->_____9__0, value);
}
template <typename TProfileId> inline void UnityEngine::Rendering::DebugDisplayStats_1___c__DisplayClass6_0<TProfileId>::_ctor() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::DebugDisplayStats_1___c__DisplayClass6_0<TProfileId>*>::get(), ".ctor",
                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
template <typename TProfileId> inline bool UnityEngine::Rendering::DebugDisplayStats_1___c__DisplayClass6_0<TProfileId>::_GetProfilerIdsToDisplay_b__0(::System::Reflection::MemberInfo* m) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::DebugDisplayStats_1___c__DisplayClass6_0<TProfileId>*>::get(), "<GetProfilerIdsToDisplay>b__0",
      std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Reflection::MemberInfo*>::get() })));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method, m);
}
template <typename TProfileId>
inline ::UnityEngine::Rendering::DebugDisplayStats_1___c__DisplayClass6_0<TProfileId>* UnityEngine::Rendering::DebugDisplayStats_1___c__DisplayClass6_0<TProfileId>::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::UnityEngine::Rendering::DebugDisplayStats_1___c__DisplayClass6_0<TProfileId>*>());
}
// Ctor Parameters []
template <typename TProfileId> constexpr ::UnityEngine::Rendering::DebugDisplayStats_1___c__DisplayClass6_0<TProfileId>::DebugDisplayStats_1___c__DisplayClass6_0() {}
template <typename TProfileId>
constexpr ::ArrayW<::System::Collections::Generic::Dictionary_2<TProfileId, ::UnityEngine::Rendering::DebugDisplayStats_1_AccumulatedTiming<TProfileId>*>*,
                   ::Array<::System::Collections::Generic::Dictionary_2<TProfileId, ::UnityEngine::Rendering::DebugDisplayStats_1_AccumulatedTiming<TProfileId>*>*>*>&
UnityEngine::Rendering::DebugDisplayStats_1<TProfileId>::__cordl_internal_get_m_AccumulatedTiming() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_AccumulatedTiming;
}
template <typename TProfileId>
constexpr ::ArrayW<::System::Collections::Generic::Dictionary_2<TProfileId, ::UnityEngine::Rendering::DebugDisplayStats_1_AccumulatedTiming<TProfileId>*>*,
                   ::Array<::System::Collections::Generic::Dictionary_2<TProfileId, ::UnityEngine::Rendering::DebugDisplayStats_1_AccumulatedTiming<TProfileId>*>*>*> const&
UnityEngine::Rendering::DebugDisplayStats_1<TProfileId>::__cordl_internal_get_m_AccumulatedTiming() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_AccumulatedTiming;
}
template <typename TProfileId>
constexpr void UnityEngine::Rendering::DebugDisplayStats_1<TProfileId>::__cordl_internal_set_m_AccumulatedTiming(
    ::ArrayW<::System::Collections::Generic::Dictionary_2<TProfileId, ::UnityEngine::Rendering::DebugDisplayStats_1_AccumulatedTiming<TProfileId>*>*,
             ::Array<::System::Collections::Generic::Dictionary_2<TProfileId, ::UnityEngine::Rendering::DebugDisplayStats_1_AccumulatedTiming<TProfileId>*>*>*>
        value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  ::cordl_internals::setInstanceField(this, &this->___m_AccumulatedTiming, value);
}
template <typename TProfileId> constexpr float_t& UnityEngine::Rendering::DebugDisplayStats_1<TProfileId>::__cordl_internal_get_m_TimeSinceLastAvgValue() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_TimeSinceLastAvgValue;
}
template <typename TProfileId> constexpr float_t const& UnityEngine::Rendering::DebugDisplayStats_1<TProfileId>::__cordl_internal_get_m_TimeSinceLastAvgValue() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_TimeSinceLastAvgValue;
}
template <typename TProfileId> constexpr void UnityEngine::Rendering::DebugDisplayStats_1<TProfileId>::__cordl_internal_set_m_TimeSinceLastAvgValue(float_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_TimeSinceLastAvgValue = value;
}
template <typename TProfileId> constexpr int32_t& UnityEngine::Rendering::DebugDisplayStats_1<TProfileId>::__cordl_internal_get_m_AccumulatedFrames() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_AccumulatedFrames;
}
template <typename TProfileId> constexpr int32_t const& UnityEngine::Rendering::DebugDisplayStats_1<TProfileId>::__cordl_internal_get_m_AccumulatedFrames() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_AccumulatedFrames;
}
template <typename TProfileId> constexpr void UnityEngine::Rendering::DebugDisplayStats_1<TProfileId>::__cordl_internal_set_m_AccumulatedFrames(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_AccumulatedFrames = value;
}
template <typename TProfileId> constexpr ::System::Collections::Generic::HashSet_1<TProfileId>*& UnityEngine::Rendering::DebugDisplayStats_1<TProfileId>::__cordl_internal_get_m_HiddenProfileIds() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_HiddenProfileIds;
}
template <typename TProfileId>
constexpr ::System::Collections::Generic::HashSet_1<TProfileId>* const& UnityEngine::Rendering::DebugDisplayStats_1<TProfileId>::__cordl_internal_get_m_HiddenProfileIds() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_HiddenProfileIds;
}
template <typename TProfileId>
constexpr void UnityEngine::Rendering::DebugDisplayStats_1<TProfileId>::__cordl_internal_set_m_HiddenProfileIds(::System::Collections::Generic::HashSet_1<TProfileId>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  ::cordl_internals::setInstanceField(this, &this->___m_HiddenProfileIds, value);
}
template <typename TProfileId> constexpr bool& UnityEngine::Rendering::DebugDisplayStats_1<TProfileId>::__cordl_internal_get_averageProfilerTimingsOverASecond() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___averageProfilerTimingsOverASecond;
}
template <typename TProfileId> constexpr bool const& UnityEngine::Rendering::DebugDisplayStats_1<TProfileId>::__cordl_internal_get_averageProfilerTimingsOverASecond() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___averageProfilerTimingsOverASecond;
}
template <typename TProfileId> constexpr void UnityEngine::Rendering::DebugDisplayStats_1<TProfileId>::__cordl_internal_set_averageProfilerTimingsOverASecond(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___averageProfilerTimingsOverASecond = value;
}
template <typename TProfileId> constexpr bool& UnityEngine::Rendering::DebugDisplayStats_1<TProfileId>::__cordl_internal_get_hideEmptyScopes() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___hideEmptyScopes;
}
template <typename TProfileId> constexpr bool const& UnityEngine::Rendering::DebugDisplayStats_1<TProfileId>::__cordl_internal_get_hideEmptyScopes() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___hideEmptyScopes;
}
template <typename TProfileId> constexpr void UnityEngine::Rendering::DebugDisplayStats_1<TProfileId>::__cordl_internal_set_hideEmptyScopes(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___hideEmptyScopes = value;
}
template <typename TProfileId> inline void UnityEngine::Rendering::DebugDisplayStats_1<TProfileId>::setStaticF_k_DetailedStatsColumnLabels(::ArrayW<::StringW, ::Array<::StringW>*> value) {
  ::cordl_internals::setStaticField<::ArrayW<::StringW, ::Array<::StringW>*>, "k_DetailedStatsColumnLabels",
                                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::DebugDisplayStats_1<TProfileId>*>::get>(
      std::forward<::ArrayW<::StringW, ::Array<::StringW>*>>(value));
}
template <typename TProfileId> inline ::ArrayW<::StringW, ::Array<::StringW>*> UnityEngine::Rendering::DebugDisplayStats_1<TProfileId>::getStaticF_k_DetailedStatsColumnLabels() {
  return ::cordl_internals::getStaticField<::ArrayW<::StringW, ::Array<::StringW>*>, "k_DetailedStatsColumnLabels",
                                           ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::DebugDisplayStats_1<TProfileId>*>::get>();
}
template <typename TProfileId> inline void UnityEngine::Rendering::DebugDisplayStats_1<TProfileId>::EnableProfilingRecorders() {
  auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::DebugDisplayStats_1<TProfileId>*>::get(), 4)));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
template <typename TProfileId> inline void UnityEngine::Rendering::DebugDisplayStats_1<TProfileId>::DisableProfilingRecorders() {
  auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::DebugDisplayStats_1<TProfileId>*>::get(), 5)));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
template <typename TProfileId>
inline void UnityEngine::Rendering::DebugDisplayStats_1<TProfileId>::RegisterDebugUI(::System::Collections::Generic::List_1<::UnityEngine::Rendering::DebugUI_Widget*>* list) {
  auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::DebugDisplayStats_1<TProfileId>*>::get(), 6)));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, list);
}
template <typename TProfileId> inline void UnityEngine::Rendering::DebugDisplayStats_1<TProfileId>::Update() {
  auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::DebugDisplayStats_1<TProfileId>*>::get(), 7)));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
template <typename TProfileId> inline ::System::Collections::Generic::List_1<TProfileId>* UnityEngine::Rendering::DebugDisplayStats_1<TProfileId>::GetProfilerIdsToDisplay() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::DebugDisplayStats_1<TProfileId>*>::get(),
                                                                             "GetProfilerIdsToDisplay", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::List_1<TProfileId>*, false>(this, ___internal_method);
}
template <typename TProfileId> inline void UnityEngine::Rendering::DebugDisplayStats_1<TProfileId>::UpdateDetailedStats(::System::Collections::Generic::List_1<TProfileId>* samplers) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::DebugDisplayStats_1<TProfileId>*>::get(), "UpdateDetailedStats", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::List_1<TProfileId>*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, samplers);
}
template <typename TProfileId>
inline ::UnityEngine::Rendering::DebugUI_Widget* UnityEngine::Rendering::DebugDisplayStats_1<TProfileId>::BuildDetailedStatsList(::StringW title,
                                                                                                                                 ::System::Collections::Generic::List_1<TProfileId>* samplers) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::DebugDisplayStats_1<TProfileId>*>::get(), "BuildDetailedStatsList", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::List_1<TProfileId>*>::get() })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::Rendering::DebugUI_Widget*, false>(this, ___internal_method, title, samplers);
}
template <typename TProfileId>
inline void UnityEngine::Rendering::DebugDisplayStats_1<TProfileId>::UpdateListOfAveragedProfilerTimings(bool needUpdatingAverages, ::System::Collections::Generic::List_1<TProfileId>* samplers) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::DebugDisplayStats_1<TProfileId>*>::get(), "UpdateListOfAveragedProfilerTimings",
                                  std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(),
                                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::List_1<TProfileId>*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, needUpdatingAverages, samplers);
}
template <typename TProfileId>
inline float_t UnityEngine::Rendering::DebugDisplayStats_1<TProfileId>::GetSamplerTiming(TProfileId samplerId, ::UnityEngine::Rendering::ProfilingSampler* sampler,
                                                                                         ::UnityEngine::Rendering::DebugDisplayStats_1_DebugProfilingType<TProfileId> type) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::DebugDisplayStats_1<TProfileId>*>::get(), "GetSamplerTiming", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<TProfileId>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::ProfilingSampler*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::DebugDisplayStats_1_DebugProfilingType<TProfileId>>::get() })));
  return ::cordl_internals::RunMethodRethrow<float_t, false>(this, ___internal_method, samplerId, sampler, type);
}
template <typename TProfileId>
inline ::UnityEngine::Rendering::ObservableList_1<::UnityEngine::Rendering::DebugUI_Widget*>*
UnityEngine::Rendering::DebugDisplayStats_1<TProfileId>::BuildProfilingSamplerWidgetList(::System::Collections::Generic::IEnumerable_1<TProfileId>* samplers) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::DebugDisplayStats_1<TProfileId>*>::get(), "BuildProfilingSamplerWidgetList",
                                  std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::IEnumerable_1<TProfileId>*>::get() })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::Rendering::ObservableList_1<::UnityEngine::Rendering::DebugUI_Widget*>*, false>(this, ___internal_method, samplers);
}
template <typename TProfileId> inline void UnityEngine::Rendering::DebugDisplayStats_1<TProfileId>::_ctor() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::DebugDisplayStats_1<TProfileId>*>::get(),
                                                                             ".ctor", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
template <typename TProfileId>
inline ::UnityEngine::Rendering::DebugUI_Value* UnityEngine::Rendering::DebugDisplayStats_1<TProfileId>::_BuildProfilingSamplerWidgetList_g__CreateWidgetForSampler_19_0(
    TProfileId samplerId, ::UnityEngine::Rendering::ProfilingSampler* sampler, ::UnityEngine::Rendering::DebugDisplayStats_1_DebugProfilingType<TProfileId> type) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::DebugDisplayStats_1<TProfileId>*>::get(), "<BuildProfilingSamplerWidgetList>g__CreateWidgetForSampler|19_0",
      std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<TProfileId>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::ProfilingSampler*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::DebugDisplayStats_1_DebugProfilingType<TProfileId>>::get() })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::Rendering::DebugUI_Value*, false>(this, ___internal_method, samplerId, sampler, type);
}
template <typename TProfileId> inline ::UnityEngine::Rendering::DebugDisplayStats_1<TProfileId>* UnityEngine::Rendering::DebugDisplayStats_1<TProfileId>::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::UnityEngine::Rendering::DebugDisplayStats_1<TProfileId>*>());
}
// Ctor Parameters []
template <typename TProfileId> constexpr ::UnityEngine::Rendering::DebugDisplayStats_1<TProfileId>::DebugDisplayStats_1() {}
