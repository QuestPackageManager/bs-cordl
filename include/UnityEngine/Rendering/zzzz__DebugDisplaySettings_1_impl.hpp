#pragma once
// IWYU pragma private; include "UnityEngine/Rendering/DebugDisplaySettings_1.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "UnityEngine/Rendering/zzzz__DebugDisplaySettings_1_def.hpp"
#include "System/Collections/Generic/zzzz__HashSet_1_def.hpp"
#include "System/Collections/Generic/zzzz__IEqualityComparer_1_def.hpp"
#include "System/zzzz__Action_1_def.hpp"
#include "System/zzzz__Lazy_1_def.hpp"
#include "UnityEngine/Rendering/zzzz__DebugDisplaySettings_1_def.hpp"
#include "UnityEngine/Rendering/zzzz__IDebugDisplaySettingsData_def.hpp"
#include "UnityEngine/Rendering/zzzz__IDebugDisplaySettings_def.hpp"
#include "UnityEngine/zzzz__Color_def.hpp"
template <typename T>
inline bool UnityEngine::Rendering::DebugDisplaySettings_1_IDebugDisplaySettingsDataComparer<T>::Equals(::UnityEngine::Rendering::IDebugDisplaySettingsData* x,
                                                                                                        ::UnityEngine::Rendering::IDebugDisplaySettingsData* y) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::DebugDisplaySettings_1_IDebugDisplaySettingsDataComparer<T>*>::get(), "Equals",
                                  std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::IDebugDisplaySettingsData*>::get(),
                                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::IDebugDisplaySettingsData*>::get() })));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method, x, y);
}
template <typename T> inline int32_t UnityEngine::Rendering::DebugDisplaySettings_1_IDebugDisplaySettingsDataComparer<T>::GetHashCode(::UnityEngine::Rendering::IDebugDisplaySettingsData* obj) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::DebugDisplaySettings_1_IDebugDisplaySettingsDataComparer<T>*>::get(), "GetHashCode",
                                  std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::IDebugDisplaySettingsData*>::get() })));
  return ::cordl_internals::RunMethodRethrow<int32_t, false>(this, ___internal_method, obj);
}
template <typename T> inline void UnityEngine::Rendering::DebugDisplaySettings_1_IDebugDisplaySettingsDataComparer<T>::_ctor() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::DebugDisplaySettings_1_IDebugDisplaySettingsDataComparer<T>*>::get(),
                                               ".ctor", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
template <typename T>
inline ::UnityEngine::Rendering::DebugDisplaySettings_1_IDebugDisplaySettingsDataComparer<T>* UnityEngine::Rendering::DebugDisplaySettings_1_IDebugDisplaySettingsDataComparer<T>::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::UnityEngine::Rendering::DebugDisplaySettings_1_IDebugDisplaySettingsDataComparer<T>*>());
}
/// @brief Convert operator to "::System::Collections::Generic::IEqualityComparer_1<::UnityEngine::Rendering::IDebugDisplaySettingsData*>"
template <typename T>
constexpr UnityEngine::Rendering::DebugDisplaySettings_1_IDebugDisplaySettingsDataComparer<T>::operator ::System::Collections::Generic::IEqualityComparer_1<
    ::UnityEngine::Rendering::IDebugDisplaySettingsData*>*() noexcept {
  return static_cast<::System::Collections::Generic::IEqualityComparer_1<::UnityEngine::Rendering::IDebugDisplaySettingsData*>*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::Collections::Generic::IEqualityComparer_1<::UnityEngine::Rendering::IDebugDisplaySettingsData*>"
template <typename T>
constexpr ::System::Collections::Generic::IEqualityComparer_1<::UnityEngine::Rendering::IDebugDisplaySettingsData*>* UnityEngine::Rendering::DebugDisplaySettings_1_IDebugDisplaySettingsDataComparer<
    T>::i___System__Collections__Generic__IEqualityComparer_1___UnityEngine__Rendering__IDebugDisplaySettingsData__() noexcept {
  return static_cast<::System::Collections::Generic::IEqualityComparer_1<::UnityEngine::Rendering::IDebugDisplaySettingsData*>*>(static_cast<void*>(this));
}
// Ctor Parameters []
template <typename T> constexpr ::UnityEngine::Rendering::DebugDisplaySettings_1_IDebugDisplaySettingsDataComparer<T>::DebugDisplaySettings_1_IDebugDisplaySettingsDataComparer() {}
template <typename T> inline void UnityEngine::Rendering::DebugDisplaySettings_1___c<T>::setStaticF___9(::UnityEngine::Rendering::DebugDisplaySettings_1___c<T>* value) {
  ::cordl_internals::setStaticField<::UnityEngine::Rendering::DebugDisplaySettings_1___c<T>*, "<>9",
                                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::DebugDisplaySettings_1___c<T>*>::get>(
      std::forward<::UnityEngine::Rendering::DebugDisplaySettings_1___c<T>*>(value));
}
template <typename T> inline ::UnityEngine::Rendering::DebugDisplaySettings_1___c<T>* UnityEngine::Rendering::DebugDisplaySettings_1___c<T>::getStaticF___9() {
  return ::cordl_internals::getStaticField<::UnityEngine::Rendering::DebugDisplaySettings_1___c<T>*, "<>9",
                                           ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::DebugDisplaySettings_1___c<T>*>::get>();
}
template <typename T> inline void UnityEngine::Rendering::DebugDisplaySettings_1___c<T>::_ctor() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::DebugDisplaySettings_1___c<T>*>::get(),
                                                                             ".ctor", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
template <typename T> inline T UnityEngine::Rendering::DebugDisplaySettings_1___c<T>::__cctor_b__17_0() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::DebugDisplaySettings_1___c<T>*>::get(),
                                                                             "<.cctor>b__17_0", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<T, false>(this, ___internal_method);
}
template <typename T> inline ::UnityEngine::Rendering::DebugDisplaySettings_1___c<T>* UnityEngine::Rendering::DebugDisplaySettings_1___c<T>::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::UnityEngine::Rendering::DebugDisplaySettings_1___c<T>*>());
}
// Ctor Parameters []
template <typename T> constexpr ::UnityEngine::Rendering::DebugDisplaySettings_1___c<T>::DebugDisplaySettings_1___c() {}
template <typename T>
constexpr ::System::Collections::Generic::HashSet_1<::UnityEngine::Rendering::IDebugDisplaySettingsData*>*& UnityEngine::Rendering::DebugDisplaySettings_1<T>::__cordl_internal_get_m_Settings() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_Settings;
}
template <typename T>
constexpr ::System::Collections::Generic::HashSet_1<::UnityEngine::Rendering::IDebugDisplaySettingsData*>* const&
UnityEngine::Rendering::DebugDisplaySettings_1<T>::__cordl_internal_get_m_Settings() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_Settings;
}
template <typename T>
constexpr void
UnityEngine::Rendering::DebugDisplaySettings_1<T>::__cordl_internal_set_m_Settings(::System::Collections::Generic::HashSet_1<::UnityEngine::Rendering::IDebugDisplaySettingsData*>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  ::cordl_internals::setInstanceField(this, &this->___m_Settings, value);
}
template <typename T> inline void UnityEngine::Rendering::DebugDisplaySettings_1<T>::setStaticF_s_Instance(::System::Lazy_1<T>* value) {
  ::cordl_internals::setStaticField<::System::Lazy_1<T>*, "s_Instance", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::DebugDisplaySettings_1<T>*>::get>(
      std::forward<::System::Lazy_1<T>*>(value));
}
template <typename T> inline ::System::Lazy_1<T>* UnityEngine::Rendering::DebugDisplaySettings_1<T>::getStaticF_s_Instance() {
  return ::cordl_internals::getStaticField<::System::Lazy_1<T>*, "s_Instance", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::DebugDisplaySettings_1<T>*>::get>();
}
template <typename T> inline T UnityEngine::Rendering::DebugDisplaySettings_1<T>::get_Instance() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::DebugDisplaySettings_1<T>*>::get(),
                                                                             "get_Instance", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<T, false>(nullptr, ___internal_method);
}
template <typename T> inline bool UnityEngine::Rendering::DebugDisplaySettings_1<T>::get_AreAnySettingsActive() {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::DebugDisplaySettings_1<T>*>::get(), 7)));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
template <typename T> inline bool UnityEngine::Rendering::DebugDisplaySettings_1<T>::get_IsPostProcessingAllowed() {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::DebugDisplaySettings_1<T>*>::get(), 8)));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
template <typename T> inline bool UnityEngine::Rendering::DebugDisplaySettings_1<T>::get_IsLightingActive() {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::DebugDisplaySettings_1<T>*>::get(), 9)));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
template <typename T> template <typename TData> inline TData UnityEngine::Rendering::DebugDisplaySettings_1<T>::Add(TData newData) {
  static auto* ___internal_method_base = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::DebugDisplaySettings_1<T>*>::get(),
                                                                                  "Add", std::array<Il2CppClass const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TData>::get() },
                                                                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<TData>::get() })));
  static auto* ___internal_method =
      THROW_UNLESS(::il2cpp_utils::MakeGenericMethod(___internal_method_base, std::array<Il2CppClass const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TData>::get() }));
  return ::cordl_internals::RunMethodRethrow<TData, false>(this, ___internal_method, newData);
}
template <typename T>
inline ::UnityEngine::Rendering::IDebugDisplaySettingsData*
UnityEngine::Rendering::DebugDisplaySettings_1<T>::UnityEngine_Rendering_IDebugDisplaySettings_Add(::UnityEngine::Rendering::IDebugDisplaySettingsData* newData) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::DebugDisplaySettings_1<T>*>::get(),
                                  "UnityEngine.Rendering.IDebugDisplaySettings.Add", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::IDebugDisplaySettingsData*>::get() })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::Rendering::IDebugDisplaySettingsData*, false>(this, ___internal_method, newData);
}
template <typename T> inline void UnityEngine::Rendering::DebugDisplaySettings_1<T>::ForEach(::System::Action_1<::UnityEngine::Rendering::IDebugDisplaySettingsData*>* onExecute) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::DebugDisplaySettings_1<T>*>::get(), "ForEach", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action_1<::UnityEngine::Rendering::IDebugDisplaySettingsData*>*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, onExecute);
}
template <typename T> inline void UnityEngine::Rendering::DebugDisplaySettings_1<T>::Reset() {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::DebugDisplaySettings_1<T>*>::get(), 10)));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
template <typename T> inline bool UnityEngine::Rendering::DebugDisplaySettings_1<T>::TryGetScreenClearColor(::ByRef<::UnityEngine::Color> color) {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::DebugDisplaySettings_1<T>*>::get(), 11)));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method, color);
}
template <typename T> inline void UnityEngine::Rendering::DebugDisplaySettings_1<T>::_ctor() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::DebugDisplaySettings_1<T>*>::get(),
                                                                             ".ctor", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
template <typename T> inline ::UnityEngine::Rendering::DebugDisplaySettings_1<T>* UnityEngine::Rendering::DebugDisplaySettings_1<T>::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::UnityEngine::Rendering::DebugDisplaySettings_1<T>*>());
}
/// @brief Convert operator to "::UnityEngine::Rendering::IDebugDisplaySettings"
template <typename T> constexpr UnityEngine::Rendering::DebugDisplaySettings_1<T>::operator ::UnityEngine::Rendering::IDebugDisplaySettings*() noexcept {
  return static_cast<::UnityEngine::Rendering::IDebugDisplaySettings*>(static_cast<void*>(this));
}
/// @brief Convert to "::UnityEngine::Rendering::IDebugDisplaySettings"
template <typename T> constexpr ::UnityEngine::Rendering::IDebugDisplaySettings* UnityEngine::Rendering::DebugDisplaySettings_1<T>::i___UnityEngine__Rendering__IDebugDisplaySettings() noexcept {
  return static_cast<::UnityEngine::Rendering::IDebugDisplaySettings*>(static_cast<void*>(this));
}
// Ctor Parameters []
template <typename T> constexpr ::UnityEngine::Rendering::DebugDisplaySettings_1<T>::DebugDisplaySettings_1() {}
