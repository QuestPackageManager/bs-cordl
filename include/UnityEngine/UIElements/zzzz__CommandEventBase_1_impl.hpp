#pragma once
#include "UnityEngine/UIElements/zzzz__EventBase_1_impl.hpp"
#include "UnityEngine/UIElements/zzzz__CommandEventBase_1_def.hpp"
#include "UnityEngine/UIElements/zzzz__ICommandEvent_def.hpp"
#include "UnityEngine/zzzz__Event_def.hpp"
/// @brief Convert operator to "::UnityEngine::UIElements::ICommandEvent"
template <typename T> constexpr UnityEngine::UIElements::CommandEventBase_1<T>::operator ::UnityEngine::UIElements::ICommandEvent*() noexcept {
  return static_cast<::UnityEngine::UIElements::ICommandEvent*>(static_cast<void*>(this));
}
/// @brief Convert to "::UnityEngine::UIElements::ICommandEvent"
template <typename T> constexpr ::UnityEngine::UIElements::ICommandEvent* UnityEngine::UIElements::CommandEventBase_1<T>::i___UnityEngine__UIElements__ICommandEvent() noexcept {
  return static_cast<::UnityEngine::UIElements::ICommandEvent*>(static_cast<void*>(this));
}
template <typename T> constexpr ::StringW& UnityEngine::UIElements::CommandEventBase_1<T>::__cordl_internal_get_m_CommandName() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_CommandName;
}
template <typename T> constexpr ::StringW const& UnityEngine::UIElements::CommandEventBase_1<T>::__cordl_internal_get_m_CommandName() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_CommandName;
}
template <typename T> constexpr void UnityEngine::UIElements::CommandEventBase_1<T>::__cordl_internal_set_m_CommandName(::StringW value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___m_CommandName)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
template <typename T> inline ::StringW UnityEngine::UIElements::CommandEventBase_1<T>::get_commandName() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::CommandEventBase_1<T>*>::get(),
                                                                             "get_commandName", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::StringW, false>(this, ___internal_method);
}
template <typename T> inline void UnityEngine::UIElements::CommandEventBase_1<T>::set_commandName(::StringW value) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::CommandEventBase_1<T>*>::get(), "set_commandName",
                                  std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
template <typename T> inline void UnityEngine::UIElements::CommandEventBase_1<T>::Init() {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::CommandEventBase_1<T>*>::get(), 12)));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
template <typename T> inline void UnityEngine::UIElements::CommandEventBase_1<T>::LocalInit() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::CommandEventBase_1<T>*>::get(),
                                                                             "LocalInit", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
template <typename T> inline T UnityEngine::UIElements::CommandEventBase_1<T>::GetPooled(::UnityEngine::Event* systemEvent) {
  static auto* ___internal_method = THROW_UNLESS((
      ::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::CommandEventBase_1<T>*>::get(), "GetPooled",
                                 std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Event*>::get() })));
  return ::cordl_internals::RunMethodRethrow<T, false>(nullptr, ___internal_method, systemEvent);
}
template <typename T> inline T UnityEngine::UIElements::CommandEventBase_1<T>::GetPooled(::StringW commandName) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::CommandEventBase_1<T>*>::get(), "GetPooled",
                                  std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
  return ::cordl_internals::RunMethodRethrow<T, false>(nullptr, ___internal_method, commandName);
}
template <typename T> inline ::UnityEngine::UIElements::CommandEventBase_1<T>* UnityEngine::UIElements::CommandEventBase_1<T>::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::UnityEngine::UIElements::CommandEventBase_1<T>*>());
}
template <typename T> inline void UnityEngine::UIElements::CommandEventBase_1<T>::_ctor() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::CommandEventBase_1<T>*>::get(), ".ctor",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
// Ctor Parameters []
template <typename T> constexpr ::UnityEngine::UIElements::CommandEventBase_1<T>::CommandEventBase_1() {}
