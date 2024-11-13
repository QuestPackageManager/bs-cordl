#pragma once
// IWYU pragma private; include "Zenject/StaticMemoryPool_5.hpp"
#include "Zenject/zzzz__StaticMemoryPoolBase_1_impl.hpp"
#include "Zenject/zzzz__StaticMemoryPool_5_def.hpp"
#include "System/zzzz__Action_1_def.hpp"
#include "System/zzzz__Action_5_def.hpp"
#include "Zenject/zzzz__IDespawnableMemoryPool_1_def.hpp"
#include "Zenject/zzzz__IMemoryPool_5_def.hpp"
#include "Zenject/zzzz__IMemoryPool_def.hpp"
/// @brief Convert operator to "::Zenject::IMemoryPool_5<TParam1,TParam2,TParam3,TParam4,TValue>"
template <typename TParam1, typename TParam2, typename TParam3, typename TParam4, typename TValue>
constexpr Zenject::StaticMemoryPool_5<TParam1, TParam2, TParam3, TParam4, TValue>::operator ::Zenject::IMemoryPool_5<TParam1, TParam2, TParam3, TParam4, TValue>*() noexcept {
  return static_cast<::Zenject::IMemoryPool_5<TParam1, TParam2, TParam3, TParam4, TValue>*>(static_cast<void*>(this));
}
/// @brief Convert to "::Zenject::IMemoryPool_5<TParam1,TParam2,TParam3,TParam4,TValue>"
template <typename TParam1, typename TParam2, typename TParam3, typename TParam4, typename TValue>
constexpr ::Zenject::IMemoryPool_5<TParam1, TParam2, TParam3, TParam4, TValue>*
Zenject::StaticMemoryPool_5<TParam1, TParam2, TParam3, TParam4, TValue>::i___Zenject__IMemoryPool_5_TParam1_TParam2_TParam3_TParam4_TValue_() noexcept {
  return static_cast<::Zenject::IMemoryPool_5<TParam1, TParam2, TParam3, TParam4, TValue>*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::Zenject::IDespawnableMemoryPool_1<TValue>"
template <typename TParam1, typename TParam2, typename TParam3, typename TParam4, typename TValue>
constexpr Zenject::StaticMemoryPool_5<TParam1, TParam2, TParam3, TParam4, TValue>::operator ::Zenject::IDespawnableMemoryPool_1<TValue>*() noexcept {
  return static_cast<::Zenject::IDespawnableMemoryPool_1<TValue>*>(static_cast<void*>(this));
}
/// @brief Convert to "::Zenject::IDespawnableMemoryPool_1<TValue>"
template <typename TParam1, typename TParam2, typename TParam3, typename TParam4, typename TValue>
constexpr ::Zenject::IDespawnableMemoryPool_1<TValue>* Zenject::StaticMemoryPool_5<TParam1, TParam2, TParam3, TParam4, TValue>::i___Zenject__IDespawnableMemoryPool_1_TValue_() noexcept {
  return static_cast<::Zenject::IDespawnableMemoryPool_1<TValue>*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::Zenject::IMemoryPool"
template <typename TParam1, typename TParam2, typename TParam3, typename TParam4, typename TValue>
constexpr Zenject::StaticMemoryPool_5<TParam1, TParam2, TParam3, TParam4, TValue>::operator ::Zenject::IMemoryPool*() noexcept {
  return static_cast<::Zenject::IMemoryPool*>(static_cast<void*>(this));
}
/// @brief Convert to "::Zenject::IMemoryPool"
template <typename TParam1, typename TParam2, typename TParam3, typename TParam4, typename TValue>
constexpr ::Zenject::IMemoryPool* Zenject::StaticMemoryPool_5<TParam1, TParam2, TParam3, TParam4, TValue>::i___Zenject__IMemoryPool() noexcept {
  return static_cast<::Zenject::IMemoryPool*>(static_cast<void*>(this));
}
template <typename TParam1, typename TParam2, typename TParam3, typename TParam4, typename TValue>
constexpr ::System::Action_5<TParam1, TParam2, TParam3, TParam4, TValue>*& Zenject::StaticMemoryPool_5<TParam1, TParam2, TParam3, TParam4, TValue>::__cordl_internal_get__onSpawnMethod() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____onSpawnMethod;
}
template <typename TParam1, typename TParam2, typename TParam3, typename TParam4, typename TValue>
constexpr ::cordl_internals::to_const_pointer<::System::Action_5<TParam1, TParam2, TParam3, TParam4, TValue>*> const&
Zenject::StaticMemoryPool_5<TParam1, TParam2, TParam3, TParam4, TValue>::__cordl_internal_get__onSpawnMethod() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____onSpawnMethod;
}
template <typename TParam1, typename TParam2, typename TParam3, typename TParam4, typename TValue>
constexpr void Zenject::StaticMemoryPool_5<TParam1, TParam2, TParam3, TParam4, TValue>::__cordl_internal_set__onSpawnMethod(::System::Action_5<TParam1, TParam2, TParam3, TParam4, TValue>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  ::cordl_internals::setInstanceField(this, &this->____onSpawnMethod, value);
}
/// @param onDespawnedMethod: ::System::Action_1<TValue>* (default: nullptr)
template <typename TParam1, typename TParam2, typename TParam3, typename TParam4, typename TValue>
inline ::Zenject::StaticMemoryPool_5<TParam1, TParam2, TParam3, TParam4, TValue>*
Zenject::StaticMemoryPool_5<TParam1, TParam2, TParam3, TParam4, TValue>::New_ctor(::System::Action_5<TParam1, TParam2, TParam3, TParam4, TValue>* onSpawnMethod,
                                                                                  ::System::Action_1<TValue>* onDespawnedMethod) {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::Zenject::StaticMemoryPool_5<TParam1, TParam2, TParam3, TParam4, TValue>*>(onSpawnMethod, onDespawnedMethod));
}
/// @param onDespawnedMethod: ::System::Action_1<TValue>* (default: nullptr)
template <typename TParam1, typename TParam2, typename TParam3, typename TParam4, typename TValue>
inline void Zenject::StaticMemoryPool_5<TParam1, TParam2, TParam3, TParam4, TValue>::_ctor(::System::Action_5<TParam1, TParam2, TParam3, TParam4, TValue>* onSpawnMethod,
                                                                                           ::System::Action_1<TValue>* onDespawnedMethod) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Zenject::StaticMemoryPool_5<TParam1, TParam2, TParam3, TParam4, TValue>*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action_5<TParam1, TParam2, TParam3, TParam4, TValue>*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action_1<TValue>*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, onSpawnMethod, onDespawnedMethod);
}
template <typename TParam1, typename TParam2, typename TParam3, typename TParam4, typename TValue>
inline void Zenject::StaticMemoryPool_5<TParam1, TParam2, TParam3, TParam4, TValue>::set_OnSpawnMethod(::System::Action_5<TParam1, TParam2, TParam3, TParam4, TValue>* value) {
  static auto* ___internal_method = THROW_UNLESS((
      ::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Zenject::StaticMemoryPool_5<TParam1, TParam2, TParam3, TParam4, TValue>*>::get(), "set_OnSpawnMethod",
                                 std::span<Il2CppClass const* const, 0>(),
                                 ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action_5<TParam1, TParam2, TParam3, TParam4, TValue>*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
template <typename TParam1, typename TParam2, typename TParam3, typename TParam4, typename TValue>
inline TValue Zenject::StaticMemoryPool_5<TParam1, TParam2, TParam3, TParam4, TValue>::Spawn(TParam1 p1, TParam2 p2, TParam3 p3, TParam4 p4) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Zenject::StaticMemoryPool_5<TParam1, TParam2, TParam3, TParam4, TValue>*>::get(), "Spawn", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 4>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<TParam1>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<TParam2>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<TParam3>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<TParam4>::get() })));
  return ::cordl_internals::RunMethodRethrow<TValue, false>(this, ___internal_method, p1, p2, p3, p4);
}
// Ctor Parameters []
template <typename TParam1, typename TParam2, typename TParam3, typename TParam4, typename TValue>
constexpr ::Zenject::StaticMemoryPool_5<TParam1, TParam2, TParam3, TParam4, TValue>::StaticMemoryPool_5() {}
