#pragma once
#include "System/zzzz__Object_impl.hpp"
#include "Zenject/zzzz__PoolWrapperFactory_2_def.hpp"
#include "Zenject/zzzz__IFactory_def.hpp"
#include "Zenject/zzzz__IMemoryPool_2_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "Zenject/zzzz__IFactory_2_def.hpp"
#include "Zenject/zzzz__InjectTypeInfo_def.hpp"
/// @brief Convert operator to "::Zenject::IFactory_2<TParam1,TValue>"
template <typename TParam1, typename TValue> constexpr Zenject::PoolWrapperFactory_2<TParam1, TValue>::operator ::Zenject::IFactory_2<TParam1, TValue>*() noexcept {
  return static_cast<::Zenject::IFactory_2<TParam1, TValue>*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::Zenject::IFactory"
template <typename TParam1, typename TValue> constexpr Zenject::PoolWrapperFactory_2<TParam1, TValue>::operator ::Zenject::IFactory*() noexcept {
  return static_cast<::Zenject::IFactory*>(static_cast<void*>(this));
}
template <typename TParam1, typename TValue> constexpr ::Zenject::IMemoryPool_2<TParam1, TValue>*& Zenject::PoolWrapperFactory_2<TParam1, TValue>::__get__pool() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____pool;
}
template <typename TParam1, typename TValue>
constexpr ::cordl_internals::to_const_pointer<::Zenject::IMemoryPool_2<TParam1, TValue>*> const& Zenject::PoolWrapperFactory_2<TParam1, TValue>::__get__pool() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____pool;
}
template <typename TParam1, typename TValue> constexpr void Zenject::PoolWrapperFactory_2<TParam1, TValue>::__set__pool(::Zenject::IMemoryPool_2<TParam1, TValue>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____pool)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
template <typename TParam1, typename TValue>
inline ::Zenject::PoolWrapperFactory_2<TParam1, TValue>* Zenject::PoolWrapperFactory_2<TParam1, TValue>::New_ctor(::Zenject::IMemoryPool_2<TParam1, TValue>* pool) {
  return THROW_UNLESS(::il2cpp_utils::New<::Zenject::PoolWrapperFactory_2<TParam1, TValue>*>(pool));
}
template <typename TParam1, typename TValue> inline void Zenject::PoolWrapperFactory_2<TParam1, TValue>::_ctor(::Zenject::IMemoryPool_2<TParam1, TValue>* pool) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Zenject::PoolWrapperFactory_2<TParam1, TValue>*>::get(), ".ctor", std::vector<Il2CppClass*>{},
                                               ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Zenject::IMemoryPool_2<TParam1, TValue>*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, pool);
}
template <typename TParam1, typename TValue> inline TValue Zenject::PoolWrapperFactory_2<TParam1, TValue>::Create(TParam1 arg) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Zenject::PoolWrapperFactory_2<TParam1, TValue>*>::get(), "Create", std::vector<Il2CppClass*>{},
                                               ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<TParam1>::get() })));
  return ::cordl_internals::RunMethodRethrow<TValue, false>(this, ___internal_method, arg);
}
template <typename TParam1, typename TValue> inline ::System::Object* Zenject::PoolWrapperFactory_2<TParam1, TValue>::__zenCreate(::ArrayW<::System::Object*, ::Array<::System::Object*>*> P_0) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Zenject::PoolWrapperFactory_2<TParam1, TValue>*>::get(), "__zenCreate", std::vector<Il2CppClass*>{},
                                  ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<::System::Object*, ::Array<::System::Object*>*>>::get() })));
  return ::cordl_internals::RunMethodRethrow<::System::Object*, false>(nullptr, ___internal_method, P_0);
}
template <typename TParam1, typename TValue> inline ::Zenject::InjectTypeInfo* Zenject::PoolWrapperFactory_2<TParam1, TValue>::__zenCreateInjectTypeInfo() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Zenject::PoolWrapperFactory_2<TParam1, TValue>*>::get(),
                                                                             "__zenCreateInjectTypeInfo", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<::Zenject::InjectTypeInfo*, false>(nullptr, ___internal_method);
}
// Ctor Parameters []
template <typename TParam1, typename TValue> constexpr ::Zenject::PoolWrapperFactory_2<TParam1, TValue>::PoolWrapperFactory_2() {}
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
