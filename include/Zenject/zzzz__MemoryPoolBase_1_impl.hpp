#pragma once
#include "System/zzzz__Object_impl.hpp"
#include "Zenject/zzzz__MemoryPoolBase_1_def.hpp"
#include "System/Collections/Generic/zzzz__IEnumerable_1_def.hpp"
#include "System/Collections/Generic/zzzz__Stack_1_def.hpp"
#include "System/zzzz__IDisposable_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "System/zzzz__Type_def.hpp"
#include "Zenject/zzzz__DiContainer_def.hpp"
#include "Zenject/zzzz__IFactory_1_def.hpp"
#include "Zenject/zzzz__IMemoryPool_def.hpp"
#include "Zenject/zzzz__IValidatable_def.hpp"
#include "Zenject/zzzz__InjectTypeInfo_def.hpp"
#include "Zenject/zzzz__MemoryPoolSettings_def.hpp"
/// @brief Convert operator to "::Zenject::IValidatable"
template <typename TContract> constexpr Zenject::MemoryPoolBase_1<TContract>::operator ::Zenject::IValidatable*() noexcept {
  return static_cast<::Zenject::IValidatable*>(static_cast<void*>(this));
}
/// @brief Convert to "::Zenject::IValidatable"
template <typename TContract> constexpr ::Zenject::IValidatable* Zenject::MemoryPoolBase_1<TContract>::i___Zenject__IValidatable() noexcept {
  return static_cast<::Zenject::IValidatable*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::Zenject::IMemoryPool"
template <typename TContract> constexpr Zenject::MemoryPoolBase_1<TContract>::operator ::Zenject::IMemoryPool*() noexcept {
  return static_cast<::Zenject::IMemoryPool*>(static_cast<void*>(this));
}
/// @brief Convert to "::Zenject::IMemoryPool"
template <typename TContract> constexpr ::Zenject::IMemoryPool* Zenject::MemoryPoolBase_1<TContract>::i___Zenject__IMemoryPool() noexcept {
  return static_cast<::Zenject::IMemoryPool*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::System::IDisposable"
template <typename TContract> constexpr Zenject::MemoryPoolBase_1<TContract>::operator ::System::IDisposable*() noexcept {
  return static_cast<::System::IDisposable*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::IDisposable"
template <typename TContract> constexpr ::System::IDisposable* Zenject::MemoryPoolBase_1<TContract>::i___System__IDisposable() noexcept {
  return static_cast<::System::IDisposable*>(static_cast<void*>(this));
}
template <typename TContract> constexpr ::System::Collections::Generic::Stack_1<TContract>*& Zenject::MemoryPoolBase_1<TContract>::__cordl_internal_get__inactiveItems() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____inactiveItems;
}
template <typename TContract>
constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::Stack_1<TContract>*> const& Zenject::MemoryPoolBase_1<TContract>::__cordl_internal_get__inactiveItems() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____inactiveItems;
}
template <typename TContract> constexpr void Zenject::MemoryPoolBase_1<TContract>::__cordl_internal_set__inactiveItems(::System::Collections::Generic::Stack_1<TContract>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____inactiveItems)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
template <typename TContract> constexpr ::Zenject::IFactory_1<TContract>*& Zenject::MemoryPoolBase_1<TContract>::__cordl_internal_get__factory() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____factory;
}
template <typename TContract> constexpr ::cordl_internals::to_const_pointer<::Zenject::IFactory_1<TContract>*> const& Zenject::MemoryPoolBase_1<TContract>::__cordl_internal_get__factory() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____factory;
}
template <typename TContract> constexpr void Zenject::MemoryPoolBase_1<TContract>::__cordl_internal_set__factory(::Zenject::IFactory_1<TContract>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____factory)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
template <typename TContract> constexpr ::Zenject::MemoryPoolSettings*& Zenject::MemoryPoolBase_1<TContract>::__cordl_internal_get__settings() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____settings;
}
template <typename TContract> constexpr ::cordl_internals::to_const_pointer<::Zenject::MemoryPoolSettings*> const& Zenject::MemoryPoolBase_1<TContract>::__cordl_internal_get__settings() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____settings;
}
template <typename TContract> constexpr void Zenject::MemoryPoolBase_1<TContract>::__cordl_internal_set__settings(::Zenject::MemoryPoolSettings* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____settings)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
template <typename TContract> constexpr ::Zenject::DiContainer*& Zenject::MemoryPoolBase_1<TContract>::__cordl_internal_get__container() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____container;
}
template <typename TContract> constexpr ::cordl_internals::to_const_pointer<::Zenject::DiContainer*> const& Zenject::MemoryPoolBase_1<TContract>::__cordl_internal_get__container() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____container;
}
template <typename TContract> constexpr void Zenject::MemoryPoolBase_1<TContract>::__cordl_internal_set__container(::Zenject::DiContainer* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____container)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
template <typename TContract> constexpr int32_t& Zenject::MemoryPoolBase_1<TContract>::__cordl_internal_get__activeCount() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____activeCount;
}
template <typename TContract> constexpr int32_t const& Zenject::MemoryPoolBase_1<TContract>::__cordl_internal_get__activeCount() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____activeCount;
}
template <typename TContract> constexpr void Zenject::MemoryPoolBase_1<TContract>::__cordl_internal_set__activeCount(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____activeCount = value;
}
template <typename TContract>
inline void Zenject::MemoryPoolBase_1<TContract>::Construct(::Zenject::IFactory_1<TContract>* factory, ::Zenject::DiContainer* container, ::Zenject::MemoryPoolSettings* settings) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Zenject::MemoryPoolBase_1<TContract>*>::get(), "Construct", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Zenject::IFactory_1<TContract>*>::get(),
                                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Zenject::DiContainer*>::get(),
                                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Zenject::MemoryPoolSettings*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, factory, container, settings);
}
template <typename TContract> inline ::Zenject::DiContainer* Zenject::MemoryPoolBase_1<TContract>::get_Container() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Zenject::MemoryPoolBase_1<TContract>*>::get(), "get_Container",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::Zenject::DiContainer*, false>(this, ___internal_method);
}
template <typename TContract> inline ::System::Collections::Generic::IEnumerable_1<TContract>* Zenject::MemoryPoolBase_1<TContract>::get_InactiveItems() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Zenject::MemoryPoolBase_1<TContract>*>::get(),
                                                                             "get_InactiveItems", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::IEnumerable_1<TContract>*, false>(this, ___internal_method);
}
template <typename TContract> inline int32_t Zenject::MemoryPoolBase_1<TContract>::get_NumTotal() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Zenject::MemoryPoolBase_1<TContract>*>::get(), "get_NumTotal",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<int32_t, false>(this, ___internal_method);
}
template <typename TContract> inline int32_t Zenject::MemoryPoolBase_1<TContract>::get_NumInactive() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Zenject::MemoryPoolBase_1<TContract>*>::get(), "get_NumInactive",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<int32_t, false>(this, ___internal_method);
}
template <typename TContract> inline int32_t Zenject::MemoryPoolBase_1<TContract>::get_NumActive() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Zenject::MemoryPoolBase_1<TContract>*>::get(), "get_NumActive",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<int32_t, false>(this, ___internal_method);
}
template <typename TContract> inline ::System::Type* Zenject::MemoryPoolBase_1<TContract>::get_ItemType() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Zenject::MemoryPoolBase_1<TContract>*>::get(), "get_ItemType",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::System::Type*, false>(this, ___internal_method);
}
template <typename TContract> inline void Zenject::MemoryPoolBase_1<TContract>::Dispose() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Zenject::MemoryPoolBase_1<TContract>*>::get(), "Dispose",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
template <typename TContract> inline void Zenject::MemoryPoolBase_1<TContract>::Zenject_IMemoryPool_Despawn(::System::Object* item) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Zenject::MemoryPoolBase_1<TContract>*>::get(), "Zenject.IMemoryPool.Despawn",
                                  std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, item);
}
template <typename TContract> inline void Zenject::MemoryPoolBase_1<TContract>::Despawn(TContract item) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Zenject::MemoryPoolBase_1<TContract>*>::get(), "Despawn", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<TContract>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, item);
}
template <typename TContract> inline TContract Zenject::MemoryPoolBase_1<TContract>::AllocNew() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Zenject::MemoryPoolBase_1<TContract>*>::get(), "AllocNew",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<TContract, false>(this, ___internal_method);
}
template <typename TContract> inline void Zenject::MemoryPoolBase_1<TContract>::Zenject_IValidatable_Validate() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Zenject::MemoryPoolBase_1<TContract>*>::get(),
                                                                             "Zenject.IValidatable.Validate", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
template <typename TContract> inline void Zenject::MemoryPoolBase_1<TContract>::Clear() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Zenject::MemoryPoolBase_1<TContract>*>::get(), "Clear",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
template <typename TContract> inline void Zenject::MemoryPoolBase_1<TContract>::ShrinkBy(int32_t numToRemove) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Zenject::MemoryPoolBase_1<TContract>*>::get(), "ShrinkBy",
                                               std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, numToRemove);
}
template <typename TContract> inline void Zenject::MemoryPoolBase_1<TContract>::ExpandBy(int32_t numToAdd) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Zenject::MemoryPoolBase_1<TContract>*>::get(), "ExpandBy",
                                               std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, numToAdd);
}
template <typename TContract> inline TContract Zenject::MemoryPoolBase_1<TContract>::GetInternal() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Zenject::MemoryPoolBase_1<TContract>*>::get(), "GetInternal",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<TContract, false>(this, ___internal_method);
}
template <typename TContract> inline void Zenject::MemoryPoolBase_1<TContract>::Resize(int32_t desiredPoolSize) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Zenject::MemoryPoolBase_1<TContract>*>::get(), "Resize",
                                               std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, desiredPoolSize);
}
template <typename TContract> inline void Zenject::MemoryPoolBase_1<TContract>::ExpandPool() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Zenject::MemoryPoolBase_1<TContract>*>::get(), "ExpandPool",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
template <typename TContract> inline void Zenject::MemoryPoolBase_1<TContract>::OnDespawned(TContract item) {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Zenject::MemoryPoolBase_1<TContract>*>::get(), 16)));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, item);
}
template <typename TContract> inline void Zenject::MemoryPoolBase_1<TContract>::OnSpawned(TContract item) {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Zenject::MemoryPoolBase_1<TContract>*>::get(), 17)));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, item);
}
template <typename TContract> inline void Zenject::MemoryPoolBase_1<TContract>::OnCreated(TContract item) {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Zenject::MemoryPoolBase_1<TContract>*>::get(), 18)));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, item);
}
template <typename TContract> inline void Zenject::MemoryPoolBase_1<TContract>::OnDestroyed(TContract item) {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Zenject::MemoryPoolBase_1<TContract>*>::get(), 19)));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, item);
}
template <typename TContract> inline ::Zenject::MemoryPoolBase_1<TContract>* Zenject::MemoryPoolBase_1<TContract>::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::Zenject::MemoryPoolBase_1<TContract>*>());
}
template <typename TContract> inline void Zenject::MemoryPoolBase_1<TContract>::_ctor() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Zenject::MemoryPoolBase_1<TContract>*>::get(), ".ctor",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
template <typename TContract> inline ::System::Object* Zenject::MemoryPoolBase_1<TContract>::__zenCreate(::ArrayW<::System::Object*, ::Array<::System::Object*>*> P_0) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Zenject::MemoryPoolBase_1<TContract>*>::get(), "__zenCreate", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<::System::Object*, ::Array<::System::Object*>*>>::get() })));
  return ::cordl_internals::RunMethodRethrow<::System::Object*, false>(nullptr, ___internal_method, P_0);
}
template <typename TContract> inline void Zenject::MemoryPoolBase_1<TContract>::__zenInjectMethod0(::System::Object* P_0, ::ArrayW<::System::Object*, ::Array<::System::Object*>*> P_1) {
  static auto* ___internal_method = THROW_UNLESS((
      ::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Zenject::MemoryPoolBase_1<TContract>*>::get(), "__zenInjectMethod0", std::span<Il2CppClass const* const, 0>(),
                                 ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get(),
                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<::System::Object*, ::Array<::System::Object*>*>>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, P_0, P_1);
}
template <typename TContract> inline ::Zenject::InjectTypeInfo* Zenject::MemoryPoolBase_1<TContract>::__zenCreateInjectTypeInfo() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Zenject::MemoryPoolBase_1<TContract>*>::get(),
                                                                             "__zenCreateInjectTypeInfo", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::Zenject::InjectTypeInfo*, false>(nullptr, ___internal_method);
}
// Ctor Parameters []
template <typename TContract> constexpr ::Zenject::MemoryPoolBase_1<TContract>::MemoryPoolBase_1() {}
