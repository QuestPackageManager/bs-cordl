#pragma once
// IWYU pragma private; include "Zenject/PoolWrapperFactory_1.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "Zenject/zzzz__PoolWrapperFactory_1_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "Zenject/zzzz__IFactory_1_def.hpp"
#include "Zenject/zzzz__IFactory_def.hpp"
#include "Zenject/zzzz__IMemoryPool_1_def.hpp"
#include "Zenject/zzzz__InjectTypeInfo_def.hpp"
/// @brief Convert operator to "::Zenject::IFactory_1<T>"
template <typename T> constexpr Zenject::PoolWrapperFactory_1<T>::operator ::Zenject::IFactory_1<T>*() noexcept {
  return static_cast<::Zenject::IFactory_1<T>*>(static_cast<void*>(this));
}
/// @brief Convert to "::Zenject::IFactory_1<T>"
template <typename T> constexpr ::Zenject::IFactory_1<T>* Zenject::PoolWrapperFactory_1<T>::i___Zenject__IFactory_1_T_() noexcept {
  return static_cast<::Zenject::IFactory_1<T>*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::Zenject::IFactory"
template <typename T> constexpr Zenject::PoolWrapperFactory_1<T>::operator ::Zenject::IFactory*() noexcept {
  return static_cast<::Zenject::IFactory*>(static_cast<void*>(this));
}
/// @brief Convert to "::Zenject::IFactory"
template <typename T> constexpr ::Zenject::IFactory* Zenject::PoolWrapperFactory_1<T>::i___Zenject__IFactory() noexcept {
  return static_cast<::Zenject::IFactory*>(static_cast<void*>(this));
}
template <typename T> constexpr ::Zenject::IMemoryPool_1<T>*& Zenject::PoolWrapperFactory_1<T>::__cordl_internal_get__pool() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____pool;
}
template <typename T> constexpr ::cordl_internals::to_const_pointer<::Zenject::IMemoryPool_1<T>*> const& Zenject::PoolWrapperFactory_1<T>::__cordl_internal_get__pool() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____pool;
}
template <typename T> constexpr void Zenject::PoolWrapperFactory_1<T>::__cordl_internal_set__pool(::Zenject::IMemoryPool_1<T>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____pool)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
template <typename T> inline ::Zenject::PoolWrapperFactory_1<T>* Zenject::PoolWrapperFactory_1<T>::New_ctor(::Zenject::IMemoryPool_1<T>* pool) {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::Zenject::PoolWrapperFactory_1<T>*>(pool));
}
template <typename T> inline void Zenject::PoolWrapperFactory_1<T>::_ctor(::Zenject::IMemoryPool_1<T>* pool) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Zenject::PoolWrapperFactory_1<T>*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
                                               ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Zenject::IMemoryPool_1<T>*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, pool);
}
template <typename T> inline T Zenject::PoolWrapperFactory_1<T>::Create() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Zenject::PoolWrapperFactory_1<T>*>::get(), "Create",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<T, false>(this, ___internal_method);
}
template <typename T> inline ::System::Object* Zenject::PoolWrapperFactory_1<T>::__zenCreate(::ArrayW<::System::Object*, ::Array<::System::Object*>*> P_0) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Zenject::PoolWrapperFactory_1<T>*>::get(), "__zenCreate", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<::System::Object*, ::Array<::System::Object*>*>>::get() })));
  return ::cordl_internals::RunMethodRethrow<::System::Object*, false>(nullptr, ___internal_method, P_0);
}
template <typename T> inline ::Zenject::InjectTypeInfo* Zenject::PoolWrapperFactory_1<T>::__zenCreateInjectTypeInfo() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Zenject::PoolWrapperFactory_1<T>*>::get(),
                                                                             "__zenCreateInjectTypeInfo", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::Zenject::InjectTypeInfo*, false>(nullptr, ___internal_method);
}
// Ctor Parameters []
template <typename T> constexpr ::Zenject::PoolWrapperFactory_1<T>::PoolWrapperFactory_1() {}
