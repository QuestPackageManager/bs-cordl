#pragma once
#include "System/zzzz__Object_impl.hpp"
#include "Zenject/zzzz__StaticMemoryPoolBaseBase_1_def.hpp"
#include "System/Collections/Generic/zzzz__Stack_1_def.hpp"
#include "System/zzzz__Action_1_def.hpp"
#include "System/zzzz__IDisposable_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "System/zzzz__Type_def.hpp"
#include "Zenject/zzzz__IDespawnableMemoryPool_1_def.hpp"
#include "Zenject/zzzz__IMemoryPool_def.hpp"
/// @brief Convert operator to "::Zenject::IDespawnableMemoryPool_1<TValue>"
template <typename TValue> constexpr Zenject::StaticMemoryPoolBaseBase_1<TValue>::operator ::Zenject::IDespawnableMemoryPool_1<TValue>*() noexcept {
  return static_cast<::Zenject::IDespawnableMemoryPool_1<TValue>*>(static_cast<void*>(this));
}
/// @brief Convert to "::Zenject::IDespawnableMemoryPool_1<TValue>"
template <typename TValue> constexpr ::Zenject::IDespawnableMemoryPool_1<TValue>* Zenject::StaticMemoryPoolBaseBase_1<TValue>::i___Zenject__IDespawnableMemoryPool_1_TValue_() noexcept {
  return static_cast<::Zenject::IDespawnableMemoryPool_1<TValue>*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::Zenject::IMemoryPool"
template <typename TValue> constexpr Zenject::StaticMemoryPoolBaseBase_1<TValue>::operator ::Zenject::IMemoryPool*() noexcept {
  return static_cast<::Zenject::IMemoryPool*>(static_cast<void*>(this));
}
/// @brief Convert to "::Zenject::IMemoryPool"
template <typename TValue> constexpr ::Zenject::IMemoryPool* Zenject::StaticMemoryPoolBaseBase_1<TValue>::i___Zenject__IMemoryPool() noexcept {
  return static_cast<::Zenject::IMemoryPool*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::System::IDisposable"
template <typename TValue> constexpr Zenject::StaticMemoryPoolBaseBase_1<TValue>::operator ::System::IDisposable*() noexcept {
  return static_cast<::System::IDisposable*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::IDisposable"
template <typename TValue> constexpr ::System::IDisposable* Zenject::StaticMemoryPoolBaseBase_1<TValue>::i___System__IDisposable() noexcept {
  return static_cast<::System::IDisposable*>(static_cast<void*>(this));
}
template <typename TValue> constexpr ::System::Collections::Generic::Stack_1<TValue>*& Zenject::StaticMemoryPoolBaseBase_1<TValue>::__get__stack() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____stack;
}
template <typename TValue> constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::Stack_1<TValue>*> const& Zenject::StaticMemoryPoolBaseBase_1<TValue>::__get__stack() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____stack;
}
template <typename TValue> constexpr void Zenject::StaticMemoryPoolBaseBase_1<TValue>::__set__stack(::System::Collections::Generic::Stack_1<TValue>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____stack)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
template <typename TValue> constexpr ::System::Action_1<TValue>*& Zenject::StaticMemoryPoolBaseBase_1<TValue>::__get__onDespawnedMethod() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____onDespawnedMethod;
}
template <typename TValue> constexpr ::cordl_internals::to_const_pointer<::System::Action_1<TValue>*> const& Zenject::StaticMemoryPoolBaseBase_1<TValue>::__get__onDespawnedMethod() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____onDespawnedMethod;
}
template <typename TValue> constexpr void Zenject::StaticMemoryPoolBaseBase_1<TValue>::__set__onDespawnedMethod(::System::Action_1<TValue>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____onDespawnedMethod)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
template <typename TValue> constexpr int32_t& Zenject::StaticMemoryPoolBaseBase_1<TValue>::__get__activeCount() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____activeCount;
}
template <typename TValue> constexpr int32_t const& Zenject::StaticMemoryPoolBaseBase_1<TValue>::__get__activeCount() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____activeCount;
}
template <typename TValue> constexpr void Zenject::StaticMemoryPoolBaseBase_1<TValue>::__set__activeCount(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____activeCount = value;
}
template <typename TValue> inline ::Zenject::StaticMemoryPoolBaseBase_1<TValue>* Zenject::StaticMemoryPoolBaseBase_1<TValue>::New_ctor(::System::Action_1<TValue>* onDespawnedMethod) {
  return THROW_UNLESS(::il2cpp_utils::New<::Zenject::StaticMemoryPoolBaseBase_1<TValue>*>(onDespawnedMethod));
}
template <typename TValue> inline void Zenject::StaticMemoryPoolBaseBase_1<TValue>::_ctor(::System::Action_1<TValue>* onDespawnedMethod) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Zenject::StaticMemoryPoolBaseBase_1<TValue>*>::get(), ".ctor", std::vector<Il2CppClass*>{},
                                               ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action_1<TValue>*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, onDespawnedMethod);
}
template <typename TValue> inline void Zenject::StaticMemoryPoolBaseBase_1<TValue>::set_OnDespawnedMethod(::System::Action_1<TValue>* value) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Zenject::StaticMemoryPoolBaseBase_1<TValue>*>::get(), "set_OnDespawnedMethod", std::vector<Il2CppClass*>{},
                                  ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action_1<TValue>*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
template <typename TValue> inline int32_t Zenject::StaticMemoryPoolBaseBase_1<TValue>::get_NumTotal() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Zenject::StaticMemoryPoolBaseBase_1<TValue>*>::get(),
                                                                             "get_NumTotal", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<int32_t, false>(this, ___internal_method);
}
template <typename TValue> inline int32_t Zenject::StaticMemoryPoolBaseBase_1<TValue>::get_NumActive() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Zenject::StaticMemoryPoolBaseBase_1<TValue>*>::get(),
                                                                             "get_NumActive", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<int32_t, false>(this, ___internal_method);
}
template <typename TValue> inline int32_t Zenject::StaticMemoryPoolBaseBase_1<TValue>::get_NumInactive() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Zenject::StaticMemoryPoolBaseBase_1<TValue>*>::get(),
                                                                             "get_NumInactive", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<int32_t, false>(this, ___internal_method);
}
template <typename TValue> inline ::System::Type* Zenject::StaticMemoryPoolBaseBase_1<TValue>::get_ItemType() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Zenject::StaticMemoryPoolBaseBase_1<TValue>*>::get(),
                                                                             "get_ItemType", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<::System::Type*, false>(this, ___internal_method);
}
template <typename TValue> inline void Zenject::StaticMemoryPoolBaseBase_1<TValue>::Resize(int32_t desiredPoolSize) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Zenject::StaticMemoryPoolBaseBase_1<TValue>*>::get(), "Resize", std::vector<Il2CppClass*>{},
                                               ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, desiredPoolSize);
}
template <typename TValue> inline void Zenject::StaticMemoryPoolBaseBase_1<TValue>::ResizeInternal(int32_t desiredPoolSize) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Zenject::StaticMemoryPoolBaseBase_1<TValue>*>::get(), "ResizeInternal",
                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, desiredPoolSize);
}
template <typename TValue> inline void Zenject::StaticMemoryPoolBaseBase_1<TValue>::Dispose() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Zenject::StaticMemoryPoolBaseBase_1<TValue>*>::get(), "Dispose",
                                                                             std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
template <typename TValue> inline void Zenject::StaticMemoryPoolBaseBase_1<TValue>::ClearActiveCount() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Zenject::StaticMemoryPoolBaseBase_1<TValue>*>::get(),
                                                                             "ClearActiveCount", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
template <typename TValue> inline void Zenject::StaticMemoryPoolBaseBase_1<TValue>::Clear() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Zenject::StaticMemoryPoolBaseBase_1<TValue>*>::get(), "Clear",
                                                                             std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
template <typename TValue> inline void Zenject::StaticMemoryPoolBaseBase_1<TValue>::ShrinkBy(int32_t numToRemove) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Zenject::StaticMemoryPoolBaseBase_1<TValue>*>::get(), "ShrinkBy", std::vector<Il2CppClass*>{},
                                               ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, numToRemove);
}
template <typename TValue> inline void Zenject::StaticMemoryPoolBaseBase_1<TValue>::ExpandBy(int32_t numToAdd) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Zenject::StaticMemoryPoolBaseBase_1<TValue>*>::get(), "ExpandBy", std::vector<Il2CppClass*>{},
                                               ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, numToAdd);
}
template <typename TValue> inline TValue Zenject::StaticMemoryPoolBaseBase_1<TValue>::SpawnInternal() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Zenject::StaticMemoryPoolBaseBase_1<TValue>*>::get(),
                                                                             "SpawnInternal", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<TValue, false>(this, ___internal_method);
}
template <typename TValue> inline void Zenject::StaticMemoryPoolBaseBase_1<TValue>::Zenject_IMemoryPool_Despawn(::System::Object* item) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Zenject::StaticMemoryPoolBaseBase_1<TValue>*>::get(), "Zenject.IMemoryPool.Despawn",
                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, item);
}
template <typename TValue> inline void Zenject::StaticMemoryPoolBaseBase_1<TValue>::Despawn(TValue element) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Zenject::StaticMemoryPoolBaseBase_1<TValue>*>::get(), "Despawn", std::vector<Il2CppClass*>{},
                                               ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<TValue>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, element);
}
template <typename TValue> inline TValue Zenject::StaticMemoryPoolBaseBase_1<TValue>::Alloc() {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Zenject::StaticMemoryPoolBaseBase_1<TValue>*>::get(), 15)));
  return ::cordl_internals::RunMethodRethrow<TValue, false>(this, ___internal_method);
}
// Ctor Parameters []
template <typename TValue> constexpr ::Zenject::StaticMemoryPoolBaseBase_1<TValue>::StaticMemoryPoolBaseBase_1() {}
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
