#pragma once
#include "Zenject/zzzz__StaticMemoryPoolBase_1_impl.hpp"
#include "Zenject/zzzz__StaticMemoryPool_7_def.hpp"
#include "Zenject/zzzz__IDespawnableMemoryPool_1_def.hpp"
#include "Zenject/zzzz__IMemoryPool_def.hpp"
#include "Zenject/zzzz__IMemoryPool_7_def.hpp"
#include "System/zzzz__Action_7_def.hpp"
#include "System/zzzz__Action_1_def.hpp"
/// @brief Convert operator to "::Zenject::IMemoryPool_7<TParam1,TParam2,TParam3,TParam4,TParam5,TParam6,TValue>"
template <typename TParam1, typename TParam2, typename TParam3, typename TParam4, typename TParam5, typename TParam6, typename TValue>
constexpr Zenject::StaticMemoryPool_7<TParam1, TParam2, TParam3, TParam4, TParam5, TParam6, TValue>::operator ::Zenject::IMemoryPool_7<TParam1, TParam2, TParam3, TParam4, TParam5, TParam6,
                                                                                                                                       TValue>*() noexcept {
  return static_cast<::Zenject::IMemoryPool_7<TParam1, TParam2, TParam3, TParam4, TParam5, TParam6, TValue>*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::Zenject::IDespawnableMemoryPool_1<TValue>"
template <typename TParam1, typename TParam2, typename TParam3, typename TParam4, typename TParam5, typename TParam6, typename TValue>
constexpr Zenject::StaticMemoryPool_7<TParam1, TParam2, TParam3, TParam4, TParam5, TParam6, TValue>::operator ::Zenject::IDespawnableMemoryPool_1<TValue>*() noexcept {
  return static_cast<::Zenject::IDespawnableMemoryPool_1<TValue>*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::Zenject::IMemoryPool"
template <typename TParam1, typename TParam2, typename TParam3, typename TParam4, typename TParam5, typename TParam6, typename TValue>
constexpr Zenject::StaticMemoryPool_7<TParam1, TParam2, TParam3, TParam4, TParam5, TParam6, TValue>::operator ::Zenject::IMemoryPool*() noexcept {
  return static_cast<::Zenject::IMemoryPool*>(static_cast<void*>(this));
}
template <typename TParam1, typename TParam2, typename TParam3, typename TParam4, typename TParam5, typename TParam6, typename TValue>
constexpr ::System::Action_7<TParam1, TParam2, TParam3, TParam4, TParam5, TParam6, TValue>*&
Zenject::StaticMemoryPool_7<TParam1, TParam2, TParam3, TParam4, TParam5, TParam6, TValue>::__get__onSpawnMethod() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____onSpawnMethod;
}
template <typename TParam1, typename TParam2, typename TParam3, typename TParam4, typename TParam5, typename TParam6, typename TValue>
constexpr ::cordl_internals::to_const_pointer<::System::Action_7<TParam1, TParam2, TParam3, TParam4, TParam5, TParam6, TValue>*> const&
Zenject::StaticMemoryPool_7<TParam1, TParam2, TParam3, TParam4, TParam5, TParam6, TValue>::__get__onSpawnMethod() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____onSpawnMethod;
}
template <typename TParam1, typename TParam2, typename TParam3, typename TParam4, typename TParam5, typename TParam6, typename TValue>
constexpr void Zenject::StaticMemoryPool_7<TParam1, TParam2, TParam3, TParam4, TParam5, TParam6, TValue>::__set__onSpawnMethod(
    ::System::Action_7<TParam1, TParam2, TParam3, TParam4, TParam5, TParam6, TValue>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____onSpawnMethod)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
/// @param onDespawnedMethod: ::System::Action_1<TValue>* (default: nullptr)
template <typename TParam1, typename TParam2, typename TParam3, typename TParam4, typename TParam5, typename TParam6, typename TValue>
inline ::Zenject::StaticMemoryPool_7<TParam1, TParam2, TParam3, TParam4, TParam5, TParam6, TValue>*
Zenject::StaticMemoryPool_7<TParam1, TParam2, TParam3, TParam4, TParam5, TParam6, TValue>::New_ctor(::System::Action_7<TParam1, TParam2, TParam3, TParam4, TParam5, TParam6, TValue>* onSpawnMethod,
                                                                                                    ::System::Action_1<TValue>* onDespawnedMethod) {
  return THROW_UNLESS(::il2cpp_utils::New<::Zenject::StaticMemoryPool_7<TParam1, TParam2, TParam3, TParam4, TParam5, TParam6, TValue>*>(onSpawnMethod, onDespawnedMethod));
}
/// @param onDespawnedMethod: ::System::Action_1<TValue>* (default: nullptr)
template <typename TParam1, typename TParam2, typename TParam3, typename TParam4, typename TParam5, typename TParam6, typename TValue>
inline void
Zenject::StaticMemoryPool_7<TParam1, TParam2, TParam3, TParam4, TParam5, TParam6, TValue>::_ctor(::System::Action_7<TParam1, TParam2, TParam3, TParam4, TParam5, TParam6, TValue>* onSpawnMethod,
                                                                                                 ::System::Action_1<TValue>* onDespawnedMethod) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Zenject::StaticMemoryPool_7<TParam1, TParam2, TParam3, TParam4, TParam5, TParam6, TValue>*>::get(), ".ctor", std::vector<Il2CppClass*>{},
      ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action_7<TParam1, TParam2, TParam3, TParam4, TParam5, TParam6, TValue>*>::get(),
                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action_1<TValue>*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, onSpawnMethod, onDespawnedMethod);
}
template <typename TParam1, typename TParam2, typename TParam3, typename TParam4, typename TParam5, typename TParam6, typename TValue>
inline void
Zenject::StaticMemoryPool_7<TParam1, TParam2, TParam3, TParam4, TParam5, TParam6, TValue>::set_OnSpawnMethod(::System::Action_7<TParam1, TParam2, TParam3, TParam4, TParam5, TParam6, TValue>* value) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Zenject::StaticMemoryPool_7<TParam1, TParam2, TParam3, TParam4, TParam5, TParam6, TValue>*>::get(), "set_OnSpawnMethod",
      std::vector<Il2CppClass*>{},
      ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action_7<TParam1, TParam2, TParam3, TParam4, TParam5, TParam6, TValue>*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
template <typename TParam1, typename TParam2, typename TParam3, typename TParam4, typename TParam5, typename TParam6, typename TValue>
inline TValue Zenject::StaticMemoryPool_7<TParam1, TParam2, TParam3, TParam4, TParam5, TParam6, TValue>::Spawn(TParam1 p1, TParam2 p2, TParam3 p3, TParam4 p4, TParam5 p5, TParam6 p6) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Zenject::StaticMemoryPool_7<TParam1, TParam2, TParam3, TParam4, TParam5, TParam6, TValue>*>::get(), "Spawn", std::vector<Il2CppClass*>{},
      ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<TParam1>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<TParam2>::get(),
                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<TParam3>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<TParam4>::get(),
                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<TParam5>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<TParam6>::get() })));
  return ::cordl_internals::RunMethodRethrow<TValue, false>(this, ___internal_method, p1, p2, p3, p4, p5, p6);
}
// Ctor Parameters []
template <typename TParam1, typename TParam2, typename TParam3, typename TParam4, typename TParam5, typename TParam6, typename TValue>
constexpr ::Zenject::StaticMemoryPool_7<TParam1, TParam2, TParam3, TParam4, TParam5, TParam6, TValue>::StaticMemoryPool_7() {}
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
