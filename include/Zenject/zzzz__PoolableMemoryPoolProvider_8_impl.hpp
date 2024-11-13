#pragma once
// IWYU pragma private; include "Zenject/PoolableMemoryPoolProvider_8.hpp"
#include "Zenject/zzzz__PoolableMemoryPoolProviderBase_1_impl.hpp"
#include "Zenject/zzzz__PoolableMemoryPoolProvider_8_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
#include "System/zzzz__Action_def.hpp"
#include "System/zzzz__Guid_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "Zenject/zzzz__DiContainer_def.hpp"
#include "Zenject/zzzz__IValidatable_def.hpp"
#include "Zenject/zzzz__InjectContext_def.hpp"
#include "Zenject/zzzz__TypeValuePair_def.hpp"
/// @brief Convert operator to "::Zenject::IValidatable"
template <typename TParam1, typename TParam2, typename TParam3, typename TParam4, typename TParam5, typename TParam6, typename TContract, typename TMemoryPool>
constexpr Zenject::PoolableMemoryPoolProvider_8<TParam1, TParam2, TParam3, TParam4, TParam5, TParam6, TContract, TMemoryPool>::operator ::Zenject::IValidatable*() noexcept {
  return static_cast<::Zenject::IValidatable*>(static_cast<void*>(this));
}
/// @brief Convert to "::Zenject::IValidatable"
template <typename TParam1, typename TParam2, typename TParam3, typename TParam4, typename TParam5, typename TParam6, typename TContract, typename TMemoryPool>
constexpr ::Zenject::IValidatable* Zenject::PoolableMemoryPoolProvider_8<TParam1, TParam2, TParam3, TParam4, TParam5, TParam6, TContract, TMemoryPool>::i___Zenject__IValidatable() noexcept {
  return static_cast<::Zenject::IValidatable*>(static_cast<void*>(this));
}
template <typename TParam1, typename TParam2, typename TParam3, typename TParam4, typename TParam5, typename TParam6, typename TContract, typename TMemoryPool>
constexpr TMemoryPool& Zenject::PoolableMemoryPoolProvider_8<TParam1, TParam2, TParam3, TParam4, TParam5, TParam6, TContract, TMemoryPool>::__cordl_internal_get__pool() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____pool;
}
template <typename TParam1, typename TParam2, typename TParam3, typename TParam4, typename TParam5, typename TParam6, typename TContract, typename TMemoryPool>
constexpr TMemoryPool const& Zenject::PoolableMemoryPoolProvider_8<TParam1, TParam2, TParam3, TParam4, TParam5, TParam6, TContract, TMemoryPool>::__cordl_internal_get__pool() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____pool;
}
template <typename TParam1, typename TParam2, typename TParam3, typename TParam4, typename TParam5, typename TParam6, typename TContract, typename TMemoryPool>
constexpr void Zenject::PoolableMemoryPoolProvider_8<TParam1, TParam2, TParam3, TParam4, TParam5, TParam6, TContract, TMemoryPool>::__cordl_internal_set__pool(TMemoryPool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  ::cordl_internals::setInstanceField(this, &this->____pool, value);
}
template <typename TParam1, typename TParam2, typename TParam3, typename TParam4, typename TParam5, typename TParam6, typename TContract, typename TMemoryPool>
inline ::Zenject::PoolableMemoryPoolProvider_8<TParam1, TParam2, TParam3, TParam4, TParam5, TParam6, TContract, TMemoryPool>*
Zenject::PoolableMemoryPoolProvider_8<TParam1, TParam2, TParam3, TParam4, TParam5, TParam6, TContract, TMemoryPool>::New_ctor(::Zenject::DiContainer* container, ::System::Guid poolId) {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::Zenject::PoolableMemoryPoolProvider_8<TParam1, TParam2, TParam3, TParam4, TParam5, TParam6, TContract, TMemoryPool>*>(container, poolId));
}
template <typename TParam1, typename TParam2, typename TParam3, typename TParam4, typename TParam5, typename TParam6, typename TContract, typename TMemoryPool>
inline void Zenject::PoolableMemoryPoolProvider_8<TParam1, TParam2, TParam3, TParam4, TParam5, TParam6, TContract, TMemoryPool>::_ctor(::Zenject::DiContainer* container, ::System::Guid poolId) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Zenject::PoolableMemoryPoolProvider_8<TParam1, TParam2, TParam3, TParam4, TParam5, TParam6, TContract, TMemoryPool>*>::get(), ".ctor",
      std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Zenject::DiContainer*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Guid>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, container, poolId);
}
template <typename TParam1, typename TParam2, typename TParam3, typename TParam4, typename TParam5, typename TParam6, typename TContract, typename TMemoryPool>
inline void Zenject::PoolableMemoryPoolProvider_8<TParam1, TParam2, TParam3, TParam4, TParam5, TParam6, TContract, TMemoryPool>::Validate() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Zenject::PoolableMemoryPoolProvider_8<TParam1, TParam2, TParam3, TParam4, TParam5, TParam6, TContract, TMemoryPool>*>::get(), "Validate",
      std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
template <typename TParam1, typename TParam2, typename TParam3, typename TParam4, typename TParam5, typename TParam6, typename TContract, typename TMemoryPool>
inline void Zenject::PoolableMemoryPoolProvider_8<TParam1, TParam2, TParam3, TParam4, TParam5, TParam6, TContract, TMemoryPool>::GetAllInstancesWithInjectSplit(
    ::Zenject::InjectContext* context, ::System::Collections::Generic::List_1<::Zenject::TypeValuePair>* args, ByRef<::System::Action*> injectAction,
    ::System::Collections::Generic::List_1<::System::Object*>* buffer) {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(
      il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Zenject::PoolableMemoryPoolProvider_8<TParam1, TParam2, TParam3, TParam4, TParam5, TParam6, TContract, TMemoryPool>*>::get(), 8)));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, context, args, injectAction, buffer);
}
// Ctor Parameters []
template <typename TParam1, typename TParam2, typename TParam3, typename TParam4, typename TParam5, typename TParam6, typename TContract, typename TMemoryPool>
constexpr ::Zenject::PoolableMemoryPoolProvider_8<TParam1, TParam2, TParam3, TParam4, TParam5, TParam6, TContract, TMemoryPool>::PoolableMemoryPoolProvider_8() {}
