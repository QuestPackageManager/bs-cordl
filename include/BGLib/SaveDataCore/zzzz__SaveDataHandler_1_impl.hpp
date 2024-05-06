#pragma once
#include "BGLib/SaveDataCore/zzzz__LoaderState_impl.hpp"
#include "BGLib/SaveDataCore/zzzz__SaveDataResult_impl.hpp"
#include "System/Runtime/CompilerServices/zzzz__AsyncTaskMethodBuilder_1_impl.hpp"
#include "System/Runtime/CompilerServices/zzzz__TaskAwaiter_1_impl.hpp"
#include "System/Runtime/CompilerServices/zzzz__TaskAwaiter_impl.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "BGLib/SaveDataCore/zzzz__SaveDataHandler_1_def.hpp"
#include "BGLib/SaveDataCore/zzzz__ISaveDataHandler_def.hpp"
#include "BGLib/SaveDataCore/zzzz__LoaderState_def.hpp"
#include "BGLib/SaveDataCore/zzzz__SaveDataHandler_1_def.hpp"
#include "BGLib/SaveDataCore/zzzz__SaveDataResult_def.hpp"
#include "BGLib/SaveDataCore/zzzz__VersionableSaveData_def.hpp"
#include "GlobalNamespace/zzzz__IFileStorage_def.hpp"
#include "GlobalNamespace/zzzz__StoragePreference_def.hpp"
#include "System/Runtime/CompilerServices/zzzz__AsyncTaskMethodBuilder_1_def.hpp"
#include "System/Runtime/CompilerServices/zzzz__IAsyncStateMachine_def.hpp"
#include "System/Runtime/CompilerServices/zzzz__TaskAwaiter_1_def.hpp"
#include "System/Runtime/CompilerServices/zzzz__TaskAwaiter_def.hpp"
#include "System/Threading/Tasks/zzzz__Task_1_def.hpp"
#include "System/Threading/Tasks/zzzz__Task_def.hpp"
#include "System/zzzz__Version_def.hpp"
/// @brief Convert operator to "::System::Runtime::CompilerServices::IAsyncStateMachine"
template <typename T> constexpr BGLib::SaveDataCore::__SaveDataHandler_1___LoadAsync_d__22<T>::operator ::System::Runtime::CompilerServices::IAsyncStateMachine*() {
  return static_cast<::System::Runtime::CompilerServices::IAsyncStateMachine*>(static_cast<void*>(::il2cpp_utils::Box(this)));
}
/// @brief Convert to "::System::Runtime::CompilerServices::IAsyncStateMachine"
template <typename T>
constexpr ::System::Runtime::CompilerServices::IAsyncStateMachine* BGLib::SaveDataCore::__SaveDataHandler_1___LoadAsync_d__22<T>::i___System__Runtime__CompilerServices__IAsyncStateMachine() {
  return static_cast<::System::Runtime::CompilerServices::IAsyncStateMachine*>(static_cast<void*>(::il2cpp_utils::Box(this)));
}
template <typename T> inline void BGLib::SaveDataCore::__SaveDataHandler_1___LoadAsync_d__22<T>::MoveNext() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BGLib::SaveDataCore::__SaveDataHandler_1___LoadAsync_d__22<T>>::get(), "MoveNext",
                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
template <typename T> inline void BGLib::SaveDataCore::__SaveDataHandler_1___LoadAsync_d__22<T>::SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine* stateMachine) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BGLib::SaveDataCore::__SaveDataHandler_1___LoadAsync_d__22<T>>::get(), "SetStateMachine", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Runtime::CompilerServices::IAsyncStateMachine*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, stateMachine);
}
// Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "__t__builder", ty:
// "::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<::BGLib::SaveDataCore::SaveDataResult>", modifiers: "", def_value: Some("{}") }, CppParam { name: "__4__this", ty:
// "::BGLib::SaveDataCore::SaveDataHandler_1<T>*", modifiers: "", def_value: Some("nullptr") }, CppParam { name: "__u__1", ty:
// "::System::Runtime::CompilerServices::TaskAwaiter_1<::BGLib::SaveDataCore::SaveDataResult>", modifiers: "", def_value: Some("{}") }]
template <typename T>
constexpr ::BGLib::SaveDataCore::__SaveDataHandler_1___LoadAsync_d__22<T>::__SaveDataHandler_1___LoadAsync_d__22(
    int32_t __1__state, ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<::BGLib::SaveDataCore::SaveDataResult> __t__builder, ::BGLib::SaveDataCore::SaveDataHandler_1<T>* __4__this,
    ::System::Runtime::CompilerServices::TaskAwaiter_1<::BGLib::SaveDataCore::SaveDataResult> __u__1) noexcept {
  this->__1__state = __1__state;
  this->__t__builder = __t__builder;
  this->__4__this = __4__this;
  this->__u__1 = __u__1;
}
// Ctor Parameters []
template <typename T> constexpr ::BGLib::SaveDataCore::__SaveDataHandler_1___LoadAsync_d__22<T>::__SaveDataHandler_1___LoadAsync_d__22() {}
/// @brief Convert operator to "::System::Runtime::CompilerServices::IAsyncStateMachine"
template <typename T> constexpr BGLib::SaveDataCore::__SaveDataHandler_1___SaveAsync_d__24<T>::operator ::System::Runtime::CompilerServices::IAsyncStateMachine*() {
  return static_cast<::System::Runtime::CompilerServices::IAsyncStateMachine*>(static_cast<void*>(::il2cpp_utils::Box(this)));
}
/// @brief Convert to "::System::Runtime::CompilerServices::IAsyncStateMachine"
template <typename T>
constexpr ::System::Runtime::CompilerServices::IAsyncStateMachine* BGLib::SaveDataCore::__SaveDataHandler_1___SaveAsync_d__24<T>::i___System__Runtime__CompilerServices__IAsyncStateMachine() {
  return static_cast<::System::Runtime::CompilerServices::IAsyncStateMachine*>(static_cast<void*>(::il2cpp_utils::Box(this)));
}
template <typename T> inline void BGLib::SaveDataCore::__SaveDataHandler_1___SaveAsync_d__24<T>::MoveNext() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BGLib::SaveDataCore::__SaveDataHandler_1___SaveAsync_d__24<T>>::get(), "MoveNext",
                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
template <typename T> inline void BGLib::SaveDataCore::__SaveDataHandler_1___SaveAsync_d__24<T>::SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine* stateMachine) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BGLib::SaveDataCore::__SaveDataHandler_1___SaveAsync_d__24<T>>::get(), "SetStateMachine", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Runtime::CompilerServices::IAsyncStateMachine*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, stateMachine);
}
// Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "__t__builder", ty:
// "::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<::BGLib::SaveDataCore::SaveDataResult>", modifiers: "", def_value: Some("{}") }, CppParam { name: "__4__this", ty:
// "::BGLib::SaveDataCore::SaveDataHandler_1<T>*", modifiers: "", def_value: Some("nullptr") }, CppParam { name: "force", ty: "bool", modifiers: "", def_value: Some("{}") }, CppParam { name: "__u__1",
// ty: "::System::Runtime::CompilerServices::TaskAwaiter", modifiers: "", def_value: Some("{}") }]
template <typename T>
constexpr ::BGLib::SaveDataCore::__SaveDataHandler_1___SaveAsync_d__24<T>::__SaveDataHandler_1___SaveAsync_d__24(
    int32_t __1__state, ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<::BGLib::SaveDataCore::SaveDataResult> __t__builder, ::BGLib::SaveDataCore::SaveDataHandler_1<T>* __4__this,
    bool force, ::System::Runtime::CompilerServices::TaskAwaiter __u__1) noexcept {
  this->__1__state = __1__state;
  this->__t__builder = __t__builder;
  this->__4__this = __4__this;
  this->force = force;
  this->__u__1 = __u__1;
}
// Ctor Parameters []
template <typename T> constexpr ::BGLib::SaveDataCore::__SaveDataHandler_1___SaveAsync_d__24<T>::__SaveDataHandler_1___SaveAsync_d__24() {}
/// @brief Convert operator to "::System::Runtime::CompilerServices::IAsyncStateMachine"
template <typename T> constexpr BGLib::SaveDataCore::__SaveDataHandler_1___ResetChangesAsync_d__25<T>::operator ::System::Runtime::CompilerServices::IAsyncStateMachine*() {
  return static_cast<::System::Runtime::CompilerServices::IAsyncStateMachine*>(static_cast<void*>(::il2cpp_utils::Box(this)));
}
/// @brief Convert to "::System::Runtime::CompilerServices::IAsyncStateMachine"
template <typename T>
constexpr ::System::Runtime::CompilerServices::IAsyncStateMachine* BGLib::SaveDataCore::__SaveDataHandler_1___ResetChangesAsync_d__25<T>::i___System__Runtime__CompilerServices__IAsyncStateMachine() {
  return static_cast<::System::Runtime::CompilerServices::IAsyncStateMachine*>(static_cast<void*>(::il2cpp_utils::Box(this)));
}
template <typename T> inline void BGLib::SaveDataCore::__SaveDataHandler_1___ResetChangesAsync_d__25<T>::MoveNext() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BGLib::SaveDataCore::__SaveDataHandler_1___ResetChangesAsync_d__25<T>>::get(), "MoveNext",
                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
template <typename T> inline void BGLib::SaveDataCore::__SaveDataHandler_1___ResetChangesAsync_d__25<T>::SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine* stateMachine) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BGLib::SaveDataCore::__SaveDataHandler_1___ResetChangesAsync_d__25<T>>::get(), "SetStateMachine",
                                  std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Runtime::CompilerServices::IAsyncStateMachine*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, stateMachine);
}
// Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "__t__builder", ty:
// "::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<::BGLib::SaveDataCore::SaveDataResult>", modifiers: "", def_value: Some("{}") }, CppParam { name: "__4__this", ty:
// "::BGLib::SaveDataCore::SaveDataHandler_1<T>*", modifiers: "", def_value: Some("nullptr") }, CppParam { name: "__u__1", ty:
// "::System::Runtime::CompilerServices::TaskAwaiter_1<::BGLib::SaveDataCore::SaveDataResult>", modifiers: "", def_value: Some("{}") }]
template <typename T>
constexpr ::BGLib::SaveDataCore::__SaveDataHandler_1___ResetChangesAsync_d__25<T>::__SaveDataHandler_1___ResetChangesAsync_d__25(
    int32_t __1__state, ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<::BGLib::SaveDataCore::SaveDataResult> __t__builder, ::BGLib::SaveDataCore::SaveDataHandler_1<T>* __4__this,
    ::System::Runtime::CompilerServices::TaskAwaiter_1<::BGLib::SaveDataCore::SaveDataResult> __u__1) noexcept {
  this->__1__state = __1__state;
  this->__t__builder = __t__builder;
  this->__4__this = __4__this;
  this->__u__1 = __u__1;
}
// Ctor Parameters []
template <typename T> constexpr ::BGLib::SaveDataCore::__SaveDataHandler_1___ResetChangesAsync_d__25<T>::__SaveDataHandler_1___ResetChangesAsync_d__25() {}
/// @brief Convert operator to "::System::Runtime::CompilerServices::IAsyncStateMachine"
template <typename T> constexpr BGLib::SaveDataCore::__SaveDataHandler_1___InternalLoadAsync_d__26<T>::operator ::System::Runtime::CompilerServices::IAsyncStateMachine*() {
  return static_cast<::System::Runtime::CompilerServices::IAsyncStateMachine*>(static_cast<void*>(::il2cpp_utils::Box(this)));
}
/// @brief Convert to "::System::Runtime::CompilerServices::IAsyncStateMachine"
template <typename T>
constexpr ::System::Runtime::CompilerServices::IAsyncStateMachine* BGLib::SaveDataCore::__SaveDataHandler_1___InternalLoadAsync_d__26<T>::i___System__Runtime__CompilerServices__IAsyncStateMachine() {
  return static_cast<::System::Runtime::CompilerServices::IAsyncStateMachine*>(static_cast<void*>(::il2cpp_utils::Box(this)));
}
template <typename T> inline void BGLib::SaveDataCore::__SaveDataHandler_1___InternalLoadAsync_d__26<T>::MoveNext() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BGLib::SaveDataCore::__SaveDataHandler_1___InternalLoadAsync_d__26<T>>::get(), "MoveNext",
                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
template <typename T> inline void BGLib::SaveDataCore::__SaveDataHandler_1___InternalLoadAsync_d__26<T>::SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine* stateMachine) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BGLib::SaveDataCore::__SaveDataHandler_1___InternalLoadAsync_d__26<T>>::get(), "SetStateMachine",
                                  std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Runtime::CompilerServices::IAsyncStateMachine*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, stateMachine);
}
// Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "__t__builder", ty:
// "::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<::BGLib::SaveDataCore::SaveDataResult>", modifiers: "", def_value: Some("{}") }, CppParam { name: "__4__this", ty:
// "::BGLib::SaveDataCore::SaveDataHandler_1<T>*", modifiers: "", def_value: Some("nullptr") }, CppParam { name: "__u__1", ty: "::System::Runtime::CompilerServices::TaskAwaiter_1<bool>", modifiers:
// "", def_value: Some("{}") }, CppParam { name: "__u__2", ty: "::System::Runtime::CompilerServices::TaskAwaiter_1<T>", modifiers: "", def_value: Some("{}") }]
template <typename T>
constexpr ::BGLib::SaveDataCore::__SaveDataHandler_1___InternalLoadAsync_d__26<T>::__SaveDataHandler_1___InternalLoadAsync_d__26(
    int32_t __1__state, ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<::BGLib::SaveDataCore::SaveDataResult> __t__builder, ::BGLib::SaveDataCore::SaveDataHandler_1<T>* __4__this,
    ::System::Runtime::CompilerServices::TaskAwaiter_1<bool> __u__1, ::System::Runtime::CompilerServices::TaskAwaiter_1<T> __u__2) noexcept {
  this->__1__state = __1__state;
  this->__t__builder = __t__builder;
  this->__4__this = __4__this;
  this->__u__1 = __u__1;
  this->__u__2 = __u__2;
}
// Ctor Parameters []
template <typename T> constexpr ::BGLib::SaveDataCore::__SaveDataHandler_1___InternalLoadAsync_d__26<T>::__SaveDataHandler_1___InternalLoadAsync_d__26() {}
/// @brief Convert operator to "::BGLib::SaveDataCore::ISaveDataHandler"
template <typename T> constexpr BGLib::SaveDataCore::SaveDataHandler_1<T>::operator ::BGLib::SaveDataCore::ISaveDataHandler*() noexcept {
  return static_cast<::BGLib::SaveDataCore::ISaveDataHandler*>(static_cast<void*>(this));
}
/// @brief Convert to "::BGLib::SaveDataCore::ISaveDataHandler"
template <typename T> constexpr ::BGLib::SaveDataCore::ISaveDataHandler* BGLib::SaveDataCore::SaveDataHandler_1<T>::i___BGLib__SaveDataCore__ISaveDataHandler() noexcept {
  return static_cast<::BGLib::SaveDataCore::ISaveDataHandler*>(static_cast<void*>(this));
}
template <typename T> constexpr ::BGLib::SaveDataCore::LoaderState& BGLib::SaveDataCore::SaveDataHandler_1<T>::__cordl_internal_get__state_k__BackingField() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____state_k__BackingField;
}
template <typename T> constexpr ::BGLib::SaveDataCore::LoaderState const& BGLib::SaveDataCore::SaveDataHandler_1<T>::__cordl_internal_get__state_k__BackingField() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____state_k__BackingField;
}
template <typename T> constexpr void BGLib::SaveDataCore::SaveDataHandler_1<T>::__cordl_internal_set__state_k__BackingField(::BGLib::SaveDataCore::LoaderState value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____state_k__BackingField = value;
}
template <typename T> constexpr ::GlobalNamespace::IFileStorage*& BGLib::SaveDataCore::SaveDataHandler_1<T>::__cordl_internal_get__fileStorage() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____fileStorage;
}
template <typename T> constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::IFileStorage*> const& BGLib::SaveDataCore::SaveDataHandler_1<T>::__cordl_internal_get__fileStorage() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____fileStorage;
}
template <typename T> constexpr void BGLib::SaveDataCore::SaveDataHandler_1<T>::__cordl_internal_set__fileStorage(::GlobalNamespace::IFileStorage* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____fileStorage)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
template <typename T> constexpr ::System::Threading::Tasks::Task_1<::BGLib::SaveDataCore::SaveDataResult>*& BGLib::SaveDataCore::SaveDataHandler_1<T>::__cordl_internal_get__loadFileTask() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____loadFileTask;
}
template <typename T>
constexpr ::cordl_internals::to_const_pointer<::System::Threading::Tasks::Task_1<::BGLib::SaveDataCore::SaveDataResult>*> const&
BGLib::SaveDataCore::SaveDataHandler_1<T>::__cordl_internal_get__loadFileTask() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____loadFileTask;
}
template <typename T> constexpr void BGLib::SaveDataCore::SaveDataHandler_1<T>::__cordl_internal_set__loadFileTask(::System::Threading::Tasks::Task_1<::BGLib::SaveDataCore::SaveDataResult>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____loadFileTask)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
template <typename T> constexpr ::System::Threading::Tasks::Task*& BGLib::SaveDataCore::SaveDataHandler_1<T>::__cordl_internal_get__saveFileTask() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____saveFileTask;
}
template <typename T> constexpr ::cordl_internals::to_const_pointer<::System::Threading::Tasks::Task*> const& BGLib::SaveDataCore::SaveDataHandler_1<T>::__cordl_internal_get__saveFileTask() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____saveFileTask;
}
template <typename T> constexpr void BGLib::SaveDataCore::SaveDataHandler_1<T>::__cordl_internal_set__saveFileTask(::System::Threading::Tasks::Task* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____saveFileTask)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
template <typename T> constexpr T& BGLib::SaveDataCore::SaveDataHandler_1<T>::__cordl_internal_get__instance() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____instance;
}
template <typename T> constexpr T const& BGLib::SaveDataCore::SaveDataHandler_1<T>::__cordl_internal_get__instance() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____instance;
}
template <typename T> constexpr void BGLib::SaveDataCore::SaveDataHandler_1<T>::__cordl_internal_set__instance(T value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____instance)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
template <typename T> inline ::System::Version* BGLib::SaveDataCore::SaveDataHandler_1<T>::get_firstVersion() {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BGLib::SaveDataCore::SaveDataHandler_1<T>*>::get(), 8)));
  return ::cordl_internals::RunMethodRethrow<::System::Version*, false>(this, ___internal_method);
}
template <typename T> inline ::System::Version* BGLib::SaveDataCore::SaveDataHandler_1<T>::get_version() {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BGLib::SaveDataCore::SaveDataHandler_1<T>*>::get(), 9)));
  return ::cordl_internals::RunMethodRethrow<::System::Version*, false>(this, ___internal_method);
}
template <typename T> inline ::StringW BGLib::SaveDataCore::SaveDataHandler_1<T>::get_fileNameWithExtension() {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BGLib::SaveDataCore::SaveDataHandler_1<T>*>::get(), 10)));
  return ::cordl_internals::RunMethodRethrow<::StringW, false>(this, ___internal_method);
}
template <typename T> inline ::GlobalNamespace::StoragePreference BGLib::SaveDataCore::SaveDataHandler_1<T>::get_preferredStorageLocation() {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BGLib::SaveDataCore::SaveDataHandler_1<T>*>::get(), 11)));
  return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::StoragePreference, false>(this, ___internal_method);
}
template <typename T> inline ::BGLib::SaveDataCore::LoaderState BGLib::SaveDataCore::SaveDataHandler_1<T>::get_state() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BGLib::SaveDataCore::SaveDataHandler_1<T>*>::get(), "get_state",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::BGLib::SaveDataCore::LoaderState, false>(this, ___internal_method);
}
template <typename T> inline void BGLib::SaveDataCore::SaveDataHandler_1<T>::set_state(::BGLib::SaveDataCore::LoaderState value) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BGLib::SaveDataCore::SaveDataHandler_1<T>*>::get(), "set_state", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::BGLib::SaveDataCore::LoaderState>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
template <typename T> inline T BGLib::SaveDataCore::SaveDataHandler_1<T>::get_instance() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BGLib::SaveDataCore::SaveDataHandler_1<T>*>::get(),
                                                                             "get_instance", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<T, false>(this, ___internal_method);
}
template <typename T> inline ::BGLib::SaveDataCore::VersionableSaveData* BGLib::SaveDataCore::SaveDataHandler_1<T>::BGLib_SaveDataCore_ISaveDataHandler_get_instance() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BGLib::SaveDataCore::SaveDataHandler_1<T>*>::get(),
                                               "BGLib.SaveDataCore.ISaveDataHandler.get_instance", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::BGLib::SaveDataCore::VersionableSaveData*, false>(this, ___internal_method);
}
template <typename T> inline ::BGLib::SaveDataCore::SaveDataHandler_1<T>* BGLib::SaveDataCore::SaveDataHandler_1<T>::New_ctor(::GlobalNamespace::IFileStorage* fileStorage) {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::BGLib::SaveDataCore::SaveDataHandler_1<T>*>(fileStorage));
}
template <typename T> inline void BGLib::SaveDataCore::SaveDataHandler_1<T>::_ctor(::GlobalNamespace::IFileStorage* fileStorage) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BGLib::SaveDataCore::SaveDataHandler_1<T>*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::IFileStorage*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, fileStorage);
}
template <typename T> inline ::BGLib::SaveDataCore::SaveDataHandler_1<T>* BGLib::SaveDataCore::SaveDataHandler_1<T>::New_ctor(::GlobalNamespace::IFileStorage* fileStorage, T instance) {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::BGLib::SaveDataCore::SaveDataHandler_1<T>*>(fileStorage, instance));
}
template <typename T> inline void BGLib::SaveDataCore::SaveDataHandler_1<T>::_ctor(::GlobalNamespace::IFileStorage* fileStorage, T instance) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BGLib::SaveDataCore::SaveDataHandler_1<T>*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::IFileStorage*>::get(),
                                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<T>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, fileStorage, instance);
}
template <typename T> inline ::System::Threading::Tasks::Task_1<::BGLib::SaveDataCore::SaveDataResult>* BGLib::SaveDataCore::SaveDataHandler_1<T>::LoadAsync() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BGLib::SaveDataCore::SaveDataHandler_1<T>*>::get(), "LoadAsync",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::System::Threading::Tasks::Task_1<::BGLib::SaveDataCore::SaveDataResult>*, false>(this, ___internal_method);
}
template <typename T> inline ::BGLib::SaveDataCore::LoaderState BGLib::SaveDataCore::SaveDataHandler_1<T>::GetState() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BGLib::SaveDataCore::SaveDataHandler_1<T>*>::get(), "GetState",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::BGLib::SaveDataCore::LoaderState, false>(this, ___internal_method);
}
/// @param force: bool (default: false)
template <typename T> inline ::System::Threading::Tasks::Task_1<::BGLib::SaveDataCore::SaveDataResult>* BGLib::SaveDataCore::SaveDataHandler_1<T>::SaveAsync(bool force) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BGLib::SaveDataCore::SaveDataHandler_1<T>*>::get(), "SaveAsync",
                                               std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
  return ::cordl_internals::RunMethodRethrow<::System::Threading::Tasks::Task_1<::BGLib::SaveDataCore::SaveDataResult>*, false>(this, ___internal_method, force);
}
template <typename T> inline ::System::Threading::Tasks::Task_1<::BGLib::SaveDataCore::SaveDataResult>* BGLib::SaveDataCore::SaveDataHandler_1<T>::ResetChangesAsync() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BGLib::SaveDataCore::SaveDataHandler_1<T>*>::get(),
                                                                             "ResetChangesAsync", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::System::Threading::Tasks::Task_1<::BGLib::SaveDataCore::SaveDataResult>*, false>(this, ___internal_method);
}
template <typename T> inline ::System::Threading::Tasks::Task_1<::BGLib::SaveDataCore::SaveDataResult>* BGLib::SaveDataCore::SaveDataHandler_1<T>::InternalLoadAsync() {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BGLib::SaveDataCore::SaveDataHandler_1<T>*>::get(), 12)));
  return ::cordl_internals::RunMethodRethrow<::System::Threading::Tasks::Task_1<::BGLib::SaveDataCore::SaveDataResult>*, false>(this, ___internal_method);
}
template <typename T> inline ::BGLib::SaveDataCore::SaveDataResult BGLib::SaveDataCore::SaveDataHandler_1<T>::UpdateVersionLoop(ByRef<T> deserializedJson) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BGLib::SaveDataCore::SaveDataHandler_1<T>*>::get(), "UpdateVersionLoop",
                                  std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<T>>::get() })));
  return ::cordl_internals::RunMethodRethrow<::BGLib::SaveDataCore::SaveDataResult, false>(this, ___internal_method, deserializedJson);
}
template <typename T> inline void BGLib::SaveDataCore::SaveDataHandler_1<T>::TestFullUpdateLoop() {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BGLib::SaveDataCore::SaveDataHandler_1<T>*>::get(), 13)));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
template <typename T> inline ::BGLib::SaveDataCore::SaveDataResult BGLib::SaveDataCore::SaveDataHandler_1<T>::Load() {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BGLib::SaveDataCore::SaveDataHandler_1<T>*>::get(), 14)));
  return ::cordl_internals::RunMethodRethrow<::BGLib::SaveDataCore::SaveDataResult, false>(this, ___internal_method);
}
/// @param force: bool (default: false)
template <typename T> inline ::BGLib::SaveDataCore::SaveDataResult BGLib::SaveDataCore::SaveDataHandler_1<T>::Save(bool force) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BGLib::SaveDataCore::SaveDataHandler_1<T>*>::get(), "Save",
                                               std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
  return ::cordl_internals::RunMethodRethrow<::BGLib::SaveDataCore::SaveDataResult, false>(this, ___internal_method, force);
}
template <typename T> inline ::System::Threading::Tasks::Task* BGLib::SaveDataCore::SaveDataHandler_1<T>::DeleteAsync() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BGLib::SaveDataCore::SaveDataHandler_1<T>*>::get(), "DeleteAsync",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::System::Threading::Tasks::Task*, false>(this, ___internal_method);
}
// Ctor Parameters []
template <typename T> constexpr ::BGLib::SaveDataCore::SaveDataHandler_1<T>::SaveDataHandler_1() {}
