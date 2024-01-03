#pragma once
#include "Zenject/zzzz__PoolableMemoryPoolProviderBase_1_impl.hpp"
#include "Zenject/zzzz__PoolableMemoryPoolProvider_4_def.hpp"
#include "System/zzzz__Guid_def.hpp"
#include "Zenject/zzzz__InjectContext_def.hpp"
#include "Zenject/zzzz__DiContainer_def.hpp"
#include "System/zzzz__Action_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "Zenject/zzzz__IValidatable_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
#include "Zenject/zzzz__TypeValuePair_def.hpp"
/// @brief Convert operator to "::Zenject::IValidatable"
template <typename TParam1, typename TParam2, typename TContract, typename TMemoryPool>
constexpr Zenject::PoolableMemoryPoolProvider_4<TParam1, TParam2, TContract, TMemoryPool>::operator ::Zenject::IValidatable*() noexcept {
  return static_cast<::Zenject::IValidatable*>(static_cast<void*>(this));
}
template <typename TParam1, typename TParam2, typename TContract, typename TMemoryPool>
constexpr TMemoryPool& Zenject::PoolableMemoryPoolProvider_4<TParam1, TParam2, TContract, TMemoryPool>::__get__pool() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____pool;
}
template <typename TParam1, typename TParam2, typename TContract, typename TMemoryPool>
constexpr TMemoryPool const& Zenject::PoolableMemoryPoolProvider_4<TParam1, TParam2, TContract, TMemoryPool>::__get__pool() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____pool;
}
template <typename TParam1, typename TParam2, typename TContract, typename TMemoryPool>
constexpr void Zenject::PoolableMemoryPoolProvider_4<TParam1, TParam2, TContract, TMemoryPool>::__set__pool(TMemoryPool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____pool)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
template <typename TParam1, typename TParam2, typename TContract, typename TMemoryPool>
inline ::Zenject::PoolableMemoryPoolProvider_4<TParam1, TParam2, TContract, TMemoryPool>*
Zenject::PoolableMemoryPoolProvider_4<TParam1, TParam2, TContract, TMemoryPool>::New_ctor(::Zenject::DiContainer* container, ::System::Guid poolId) {
  return THROW_UNLESS(::il2cpp_utils::New<::Zenject::PoolableMemoryPoolProvider_4<TParam1, TParam2, TContract, TMemoryPool>*>(container, poolId));
}
template <typename TParam1, typename TParam2, typename TContract, typename TMemoryPool>
inline void Zenject::PoolableMemoryPoolProvider_4<TParam1, TParam2, TContract, TMemoryPool>::_ctor(::Zenject::DiContainer* container, ::System::Guid poolId) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Zenject::PoolableMemoryPoolProvider_4<TParam1, TParam2, TContract, TMemoryPool>*>::get(), ".ctor", std::vector<Il2CppClass*>{},
      ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Zenject::DiContainer*>::get(),
                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Guid>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, container, poolId);
}
template <typename TParam1, typename TParam2, typename TContract, typename TMemoryPool> inline void Zenject::PoolableMemoryPoolProvider_4<TParam1, TParam2, TContract, TMemoryPool>::Validate() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Zenject::PoolableMemoryPoolProvider_4<TParam1, TParam2, TContract, TMemoryPool>*>::get(),
                                               "Validate", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
template <typename TParam1, typename TParam2, typename TContract, typename TMemoryPool>
inline void Zenject::PoolableMemoryPoolProvider_4<TParam1, TParam2, TContract, TMemoryPool>::GetAllInstancesWithInjectSplit(::Zenject::InjectContext* context,
                                                                                                                            ::System::Collections::Generic::List_1<::Zenject::TypeValuePair>* args,
                                                                                                                            ByRef<::System::Action*> injectAction,
                                                                                                                            ::System::Collections::Generic::List_1<::System::Object*>* buffer) {
  auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                         ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Zenject::PoolableMemoryPoolProvider_4<TParam1, TParam2, TContract, TMemoryPool>*>::get(), 8)));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, context, args, injectAction, buffer);
}
// Ctor Parameters []
template <typename TParam1, typename TParam2, typename TContract, typename TMemoryPool>
constexpr ::Zenject::PoolableMemoryPoolProvider_4<TParam1, TParam2, TContract, TMemoryPool>::PoolableMemoryPoolProvider_4() {}
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
