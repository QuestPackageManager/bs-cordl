#pragma once
// IWYU pragma private; include "GlobalNamespace/SyncBackgroundCommand_1.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "GlobalNamespace/zzzz__SyncBackgroundCommand_1_def.hpp"
#include "GlobalNamespace/zzzz__IBackgroundCommand_def.hpp"
#include "System/Threading/Tasks/zzzz__TaskCompletionSource_1_def.hpp"
#include "System/Threading/Tasks/zzzz__Task_1_def.hpp"
#include "System/Threading/Tasks/zzzz__Task_def.hpp"
/// @brief Convert operator to "::GlobalNamespace::IBackgroundCommand"
template <typename T> constexpr GlobalNamespace::SyncBackgroundCommand_1<T>::operator ::GlobalNamespace::IBackgroundCommand*() noexcept {
  return static_cast<::GlobalNamespace::IBackgroundCommand*>(static_cast<void*>(this));
}
/// @brief Convert to "::GlobalNamespace::IBackgroundCommand"
template <typename T> constexpr ::GlobalNamespace::IBackgroundCommand* GlobalNamespace::SyncBackgroundCommand_1<T>::i___GlobalNamespace__IBackgroundCommand() noexcept {
  return static_cast<::GlobalNamespace::IBackgroundCommand*>(static_cast<void*>(this));
}
template <typename T> constexpr ::System::Threading::Tasks::TaskCompletionSource_1<T>*& GlobalNamespace::SyncBackgroundCommand_1<T>::__cordl_internal_get__taskCompletionSource() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____taskCompletionSource;
}
template <typename T>
constexpr ::cordl_internals::to_const_pointer<::System::Threading::Tasks::TaskCompletionSource_1<T>*> const&
GlobalNamespace::SyncBackgroundCommand_1<T>::__cordl_internal_get__taskCompletionSource() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____taskCompletionSource;
}
template <typename T> constexpr void GlobalNamespace::SyncBackgroundCommand_1<T>::__cordl_internal_set__taskCompletionSource(::System::Threading::Tasks::TaskCompletionSource_1<T>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____taskCompletionSource)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
template <typename T> inline ::System::Threading::Tasks::Task_1<T>* GlobalNamespace::SyncBackgroundCommand_1<T>::get_resultTask() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::SyncBackgroundCommand_1<T>*>::get(),
                                                                             "get_resultTask", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::System::Threading::Tasks::Task_1<T>*, false>(this, ___internal_method);
}
template <typename T> inline ::System::Threading::Tasks::Task* GlobalNamespace::SyncBackgroundCommand_1<T>::Execute() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::SyncBackgroundCommand_1<T>*>::get(), "Execute",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::System::Threading::Tasks::Task*, false>(this, ___internal_method);
}
template <typename T> inline T GlobalNamespace::SyncBackgroundCommand_1<T>::ExecuteInternal() {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::SyncBackgroundCommand_1<T>*>::get(), 5)));
  return ::cordl_internals::RunMethodRethrow<T, false>(this, ___internal_method);
}
template <typename T> inline ::GlobalNamespace::SyncBackgroundCommand_1<T>* GlobalNamespace::SyncBackgroundCommand_1<T>::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::GlobalNamespace::SyncBackgroundCommand_1<T>*>());
}
template <typename T> inline void GlobalNamespace::SyncBackgroundCommand_1<T>::_ctor() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::SyncBackgroundCommand_1<T>*>::get(), ".ctor",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
// Ctor Parameters []
template <typename T> constexpr ::GlobalNamespace::SyncBackgroundCommand_1<T>::SyncBackgroundCommand_1() {}
