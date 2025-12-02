#pragma once
// IWYU pragma private; include "UnityEngine/Rendering/DebugDisplaySettingsStats_1.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "UnityEngine/Rendering/zzzz__DebugDisplaySettingsPanel_impl.hpp"
#include "UnityEngine/Rendering/zzzz__DebugDisplaySettingsStats_1_def.hpp"
#include "UnityEngine/Rendering/zzzz__DebugDisplaySettingsStats_1_def.hpp"
#include "UnityEngine/Rendering/zzzz__DebugDisplayStats_1_def.hpp"
#include "UnityEngine/Rendering/zzzz__DebugUI_def.hpp"
#include "UnityEngine/Rendering/zzzz__IDebugDisplaySettingsData_def.hpp"
#include "UnityEngine/Rendering/zzzz__IDebugDisplaySettingsPanelDisposable_def.hpp"
#include "UnityEngine/Rendering/zzzz__IDebugDisplaySettingsQuery_def.hpp"
template <typename TProfileId>
constexpr ::UnityEngine::Rendering::DebugDisplaySettingsStats_1<TProfileId>*& UnityEngine::Rendering::DebugDisplaySettingsStats_1_StatsPanel<TProfileId>::__cordl_internal_get_m_Data() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_Data;
}
template <typename TProfileId>
constexpr ::UnityEngine::Rendering::DebugDisplaySettingsStats_1<TProfileId>* const& UnityEngine::Rendering::DebugDisplaySettingsStats_1_StatsPanel<TProfileId>::__cordl_internal_get_m_Data() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_Data;
}
template <typename TProfileId>
constexpr void UnityEngine::Rendering::DebugDisplaySettingsStats_1_StatsPanel<TProfileId>::__cordl_internal_set_m_Data(::UnityEngine::Rendering::DebugDisplaySettingsStats_1<TProfileId>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  ::cordl_internals::setInstanceField(this, &this->___m_Data, value);
}
template <typename TProfileId> inline ::UnityEngine::Rendering::DebugUI_Flags UnityEngine::Rendering::DebugDisplaySettingsStats_1_StatsPanel<TProfileId>::get_Flags() {
  auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                         ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::DebugDisplaySettingsStats_1_StatsPanel<TProfileId>*>::get(), 10)));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::Rendering::DebugUI_Flags, false>(this, ___internal_method);
}
template <typename TProfileId>
inline void UnityEngine::Rendering::DebugDisplaySettingsStats_1_StatsPanel<TProfileId>::_ctor(::UnityEngine::Rendering::DebugDisplaySettingsStats_1<TProfileId>* displaySettingsStats) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::DebugDisplaySettingsStats_1_StatsPanel<TProfileId>*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::DebugDisplaySettingsStats_1<TProfileId>*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, displaySettingsStats);
}
template <typename TProfileId> inline void UnityEngine::Rendering::DebugDisplaySettingsStats_1_StatsPanel<TProfileId>::Dispose() {
  auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                         ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::DebugDisplaySettingsStats_1_StatsPanel<TProfileId>*>::get(), 11)));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
template <typename TProfileId>
inline ::UnityEngine::Rendering::DebugDisplaySettingsStats_1_StatsPanel<TProfileId>*
UnityEngine::Rendering::DebugDisplaySettingsStats_1_StatsPanel<TProfileId>::New_ctor(::UnityEngine::Rendering::DebugDisplaySettingsStats_1<TProfileId>* displaySettingsStats) {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::UnityEngine::Rendering::DebugDisplaySettingsStats_1_StatsPanel<TProfileId>*>(displaySettingsStats));
}
// Ctor Parameters []
template <typename TProfileId> constexpr ::UnityEngine::Rendering::DebugDisplaySettingsStats_1_StatsPanel<TProfileId>::DebugDisplaySettingsStats_1_StatsPanel() {}
template <typename TProfileId>
constexpr ::UnityEngine::Rendering::DebugDisplayStats_1<TProfileId>*& UnityEngine::Rendering::DebugDisplaySettingsStats_1<TProfileId>::__cordl_internal_get__debugDisplayStats_k__BackingField() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____debugDisplayStats_k__BackingField;
}
template <typename TProfileId>
constexpr ::UnityEngine::Rendering::DebugDisplayStats_1<TProfileId>* const&
UnityEngine::Rendering::DebugDisplaySettingsStats_1<TProfileId>::__cordl_internal_get__debugDisplayStats_k__BackingField() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____debugDisplayStats_k__BackingField;
}
template <typename TProfileId>
constexpr void
UnityEngine::Rendering::DebugDisplaySettingsStats_1<TProfileId>::__cordl_internal_set__debugDisplayStats_k__BackingField(::UnityEngine::Rendering::DebugDisplayStats_1<TProfileId>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  ::cordl_internals::setInstanceField(this, &this->____debugDisplayStats_k__BackingField, value);
}
template <typename TProfileId> inline ::UnityEngine::Rendering::DebugDisplayStats_1<TProfileId>* UnityEngine::Rendering::DebugDisplaySettingsStats_1<TProfileId>::get_debugDisplayStats() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::DebugDisplaySettingsStats_1<TProfileId>*>::get(),
                                               "get_debugDisplayStats", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::Rendering::DebugDisplayStats_1<TProfileId>*, false>(this, ___internal_method);
}
template <typename TProfileId> inline void UnityEngine::Rendering::DebugDisplaySettingsStats_1<TProfileId>::_ctor(::UnityEngine::Rendering::DebugDisplayStats_1<TProfileId>* debugDisplayStats) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::DebugDisplaySettingsStats_1<TProfileId>*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::DebugDisplayStats_1<TProfileId>*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, debugDisplayStats);
}
template <typename TProfileId> inline bool UnityEngine::Rendering::DebugDisplaySettingsStats_1<TProfileId>::get_AreAnySettingsActive() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::DebugDisplaySettingsStats_1<TProfileId>*>::get(),
                                               "get_AreAnySettingsActive", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
template <typename TProfileId> inline ::UnityEngine::Rendering::IDebugDisplaySettingsPanelDisposable* UnityEngine::Rendering::DebugDisplaySettingsStats_1<TProfileId>::CreatePanel() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::DebugDisplaySettingsStats_1<TProfileId>*>::get(), "CreatePanel",
                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::Rendering::IDebugDisplaySettingsPanelDisposable*, false>(this, ___internal_method);
}
template <typename TProfileId>
inline ::UnityEngine::Rendering::DebugDisplaySettingsStats_1<TProfileId>*
UnityEngine::Rendering::DebugDisplaySettingsStats_1<TProfileId>::New_ctor(::UnityEngine::Rendering::DebugDisplayStats_1<TProfileId>* debugDisplayStats) {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::UnityEngine::Rendering::DebugDisplaySettingsStats_1<TProfileId>*>(debugDisplayStats));
}
/// @brief Convert operator to "::UnityEngine::Rendering::IDebugDisplaySettingsData"
template <typename TProfileId> constexpr UnityEngine::Rendering::DebugDisplaySettingsStats_1<TProfileId>::operator ::UnityEngine::Rendering::IDebugDisplaySettingsData*() noexcept {
  return static_cast<::UnityEngine::Rendering::IDebugDisplaySettingsData*>(static_cast<void*>(this));
}
/// @brief Convert to "::UnityEngine::Rendering::IDebugDisplaySettingsData"
template <typename TProfileId>
constexpr ::UnityEngine::Rendering::IDebugDisplaySettingsData* UnityEngine::Rendering::DebugDisplaySettingsStats_1<TProfileId>::i___UnityEngine__Rendering__IDebugDisplaySettingsData() noexcept {
  return static_cast<::UnityEngine::Rendering::IDebugDisplaySettingsData*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::UnityEngine::Rendering::IDebugDisplaySettingsQuery"
template <typename TProfileId> constexpr UnityEngine::Rendering::DebugDisplaySettingsStats_1<TProfileId>::operator ::UnityEngine::Rendering::IDebugDisplaySettingsQuery*() noexcept {
  return static_cast<::UnityEngine::Rendering::IDebugDisplaySettingsQuery*>(static_cast<void*>(this));
}
/// @brief Convert to "::UnityEngine::Rendering::IDebugDisplaySettingsQuery"
template <typename TProfileId>
constexpr ::UnityEngine::Rendering::IDebugDisplaySettingsQuery* UnityEngine::Rendering::DebugDisplaySettingsStats_1<TProfileId>::i___UnityEngine__Rendering__IDebugDisplaySettingsQuery() noexcept {
  return static_cast<::UnityEngine::Rendering::IDebugDisplaySettingsQuery*>(static_cast<void*>(this));
}
// Ctor Parameters []
template <typename TProfileId> constexpr ::UnityEngine::Rendering::DebugDisplaySettingsStats_1<TProfileId>::DebugDisplaySettingsStats_1() {}
