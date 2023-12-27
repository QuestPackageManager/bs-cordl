#pragma once
#include "Zenject/zzzz__StaticMemoryPoolBase_1_impl.hpp"
#include "Zenject/zzzz__StaticMemoryPool_1_def.hpp"
#include "Zenject/zzzz__IMemoryPool_1_def.hpp"
#include "Zenject/zzzz__IMemoryPool_def.hpp"
#include "System/zzzz__Action_1_def.hpp"
#include "Zenject/zzzz__IDespawnableMemoryPool_1_def.hpp"
/// @brief Convert operator to "::Zenject::IMemoryPool_1<TValue>"
template <typename TValue> constexpr Zenject::StaticMemoryPool_1<TValue>::operator ::Zenject::IMemoryPool_1<TValue>*() noexcept {
  return static_cast<::Zenject::IMemoryPool_1<TValue>*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::Zenject::IDespawnableMemoryPool_1<TValue>"
template <typename TValue> constexpr Zenject::StaticMemoryPool_1<TValue>::operator ::Zenject::IDespawnableMemoryPool_1<TValue>*() noexcept {
  return static_cast<::Zenject::IDespawnableMemoryPool_1<TValue>*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::Zenject::IMemoryPool"
template <typename TValue> constexpr Zenject::StaticMemoryPool_1<TValue>::operator ::Zenject::IMemoryPool*() noexcept {
  return static_cast<::Zenject::IMemoryPool*>(static_cast<void*>(this));
}
template <typename TValue> constexpr ::System::Action_1<TValue>*& Zenject::StaticMemoryPool_1<TValue>::__get__onSpawnMethod() {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->____onSpawnMethod;
}
template <typename TValue> constexpr ::cordl_internals::to_const_pointer<::System::Action_1<TValue>*> const& Zenject::StaticMemoryPool_1<TValue>::__get__onSpawnMethod() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->____onSpawnMethod;
}
template <typename TValue> constexpr void Zenject::StaticMemoryPool_1<TValue>::__set__onSpawnMethod(::System::Action_1<TValue>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____onSpawnMethod)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
/// @param onSpawnMethod: ::System::Action_1<TValue>* (default: nullptr)
/// @param onDespawnedMethod: ::System::Action_1<TValue>* (default: nullptr)
/// @param initialSize: int32_t (default: static_cast<int32_t>(0x0))
template <typename TValue>
inline ::Zenject::StaticMemoryPool_1<TValue>* Zenject::StaticMemoryPool_1<TValue>::New_ctor(::System::Action_1<TValue>* onSpawnMethod, ::System::Action_1<TValue>* onDespawnedMethod,
                                                                                            int32_t initialSize) {
  return THROW_UNLESS(::il2cpp_utils::New<::Zenject::StaticMemoryPool_1<TValue>*>(onSpawnMethod, onDespawnedMethod, initialSize));
}
/// @param onSpawnMethod: ::System::Action_1<TValue>* (default: nullptr)
/// @param onDespawnedMethod: ::System::Action_1<TValue>* (default: nullptr)
/// @param initialSize: int32_t (default: static_cast<int32_t>(0x0))
template <typename TValue> inline void Zenject::StaticMemoryPool_1<TValue>::_ctor(::System::Action_1<TValue>* onSpawnMethod, ::System::Action_1<TValue>* onDespawnedMethod, int32_t initialSize) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Zenject::StaticMemoryPool_1<TValue>*>::get(), ".ctor", std::vector<Il2CppClass*>{},
                                               ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action_1<TValue>*>::get(),
                                                                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action_1<TValue>*>::get(),
                                                                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, onSpawnMethod, onDespawnedMethod, initialSize);
}
template <typename TValue> inline void Zenject::StaticMemoryPool_1<TValue>::set_OnSpawnMethod(::System::Action_1<TValue>* value) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Zenject::StaticMemoryPool_1<TValue>*>::get(), "set_OnSpawnMethod", std::vector<Il2CppClass*>{},
                                               ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action_1<TValue>*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
template <typename TValue> inline TValue Zenject::StaticMemoryPool_1<TValue>::Spawn() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Zenject::StaticMemoryPool_1<TValue>*>::get(), "Spawn",
                                                                             std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<TValue, false>(this, ___internal_method);
}
// Ctor Parameters []
template <typename TValue> constexpr ::Zenject::StaticMemoryPool_1<TValue>::StaticMemoryPool_1() {}
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
