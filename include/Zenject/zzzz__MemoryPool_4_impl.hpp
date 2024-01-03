#pragma once
#include "Zenject/zzzz__MemoryPoolBase_1_impl.hpp"
#include "Zenject/zzzz__MemoryPool_4_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "Zenject/zzzz__IDespawnableMemoryPool_1_def.hpp"
#include "Zenject/zzzz__IFactory_4_def.hpp"
#include "Zenject/zzzz__IFactory_def.hpp"
#include "Zenject/zzzz__IMemoryPool_4_def.hpp"
#include "Zenject/zzzz__IMemoryPool_def.hpp"
#include "Zenject/zzzz__InjectTypeInfo_def.hpp"
/// @brief Convert operator to "::Zenject::IMemoryPool_4<TParam1,TParam2,TParam3,TValue>"
template <typename TParam1, typename TParam2, typename TParam3, typename TValue>
constexpr Zenject::MemoryPool_4<TParam1, TParam2, TParam3, TValue>::operator ::Zenject::IMemoryPool_4<TParam1, TParam2, TParam3, TValue>*() noexcept {
  return static_cast<::Zenject::IMemoryPool_4<TParam1, TParam2, TParam3, TValue>*>(static_cast<void*>(this));
}
/// @brief Convert to "::Zenject::IMemoryPool_4<TParam1,TParam2,TParam3,TValue>"
template <typename TParam1, typename TParam2, typename TParam3, typename TValue>
constexpr ::Zenject::IMemoryPool_4<TParam1, TParam2, TParam3, TValue>* Zenject::MemoryPool_4<TParam1, TParam2, TParam3, TValue>::i___Zenject__IMemoryPool_4_TParam1_TParam2_TParam3_TValue_() noexcept {
  return static_cast<::Zenject::IMemoryPool_4<TParam1, TParam2, TParam3, TValue>*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::Zenject::IDespawnableMemoryPool_1<TValue>"
template <typename TParam1, typename TParam2, typename TParam3, typename TValue>
constexpr Zenject::MemoryPool_4<TParam1, TParam2, TParam3, TValue>::operator ::Zenject::IDespawnableMemoryPool_1<TValue>*() noexcept {
  return static_cast<::Zenject::IDespawnableMemoryPool_1<TValue>*>(static_cast<void*>(this));
}
/// @brief Convert to "::Zenject::IDespawnableMemoryPool_1<TValue>"
template <typename TParam1, typename TParam2, typename TParam3, typename TValue>
constexpr ::Zenject::IDespawnableMemoryPool_1<TValue>* Zenject::MemoryPool_4<TParam1, TParam2, TParam3, TValue>::i___Zenject__IDespawnableMemoryPool_1_TValue_() noexcept {
  return static_cast<::Zenject::IDespawnableMemoryPool_1<TValue>*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::Zenject::IMemoryPool"
template <typename TParam1, typename TParam2, typename TParam3, typename TValue> constexpr Zenject::MemoryPool_4<TParam1, TParam2, TParam3, TValue>::operator ::Zenject::IMemoryPool*() noexcept {
  return static_cast<::Zenject::IMemoryPool*>(static_cast<void*>(this));
}
/// @brief Convert to "::Zenject::IMemoryPool"
template <typename TParam1, typename TParam2, typename TParam3, typename TValue>
constexpr ::Zenject::IMemoryPool* Zenject::MemoryPool_4<TParam1, TParam2, TParam3, TValue>::i___Zenject__IMemoryPool() noexcept {
  return static_cast<::Zenject::IMemoryPool*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::Zenject::IFactory_4<TParam1,TParam2,TParam3,TValue>"
template <typename TParam1, typename TParam2, typename TParam3, typename TValue>
constexpr Zenject::MemoryPool_4<TParam1, TParam2, TParam3, TValue>::operator ::Zenject::IFactory_4<TParam1, TParam2, TParam3, TValue>*() noexcept {
  return static_cast<::Zenject::IFactory_4<TParam1, TParam2, TParam3, TValue>*>(static_cast<void*>(this));
}
/// @brief Convert to "::Zenject::IFactory_4<TParam1,TParam2,TParam3,TValue>"
template <typename TParam1, typename TParam2, typename TParam3, typename TValue>
constexpr ::Zenject::IFactory_4<TParam1, TParam2, TParam3, TValue>* Zenject::MemoryPool_4<TParam1, TParam2, TParam3, TValue>::i___Zenject__IFactory_4_TParam1_TParam2_TParam3_TValue_() noexcept {
  return static_cast<::Zenject::IFactory_4<TParam1, TParam2, TParam3, TValue>*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::Zenject::IFactory"
template <typename TParam1, typename TParam2, typename TParam3, typename TValue> constexpr Zenject::MemoryPool_4<TParam1, TParam2, TParam3, TValue>::operator ::Zenject::IFactory*() noexcept {
  return static_cast<::Zenject::IFactory*>(static_cast<void*>(this));
}
/// @brief Convert to "::Zenject::IFactory"
template <typename TParam1, typename TParam2, typename TParam3, typename TValue>
constexpr ::Zenject::IFactory* Zenject::MemoryPool_4<TParam1, TParam2, TParam3, TValue>::i___Zenject__IFactory() noexcept {
  return static_cast<::Zenject::IFactory*>(static_cast<void*>(this));
}
template <typename TParam1, typename TParam2, typename TParam3, typename TValue>
inline TValue Zenject::MemoryPool_4<TParam1, TParam2, TParam3, TValue>::Spawn(TParam1 param1, TParam2 param2, TParam3 param3) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Zenject::MemoryPool_4<TParam1, TParam2, TParam3, TValue>*>::get(), "Spawn", std::vector<Il2CppClass*>{},
      ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<TParam1>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<TParam2>::get(),
                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<TParam3>::get() })));
  return ::cordl_internals::RunMethodRethrow<TValue, false>(this, ___internal_method, param1, param2, param3);
}
template <typename TParam1, typename TParam2, typename TParam3, typename TValue>
inline void Zenject::MemoryPool_4<TParam1, TParam2, TParam3, TValue>::Reinitialize(TParam1 p1, TParam2 p2, TParam3 p3, TValue item) {
  auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Zenject::MemoryPool_4<TParam1, TParam2, TParam3, TValue>*>::get(), 23)));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, p1, p2, p3, item);
}
template <typename TParam1, typename TParam2, typename TParam3, typename TValue>
inline TValue Zenject::MemoryPool_4<TParam1, TParam2, TParam3, TValue>::Zenject_IFactory_TParam1_TParam2_TParam3_TValue__Create(TParam1 p1, TParam2 p2, TParam3 p3) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Zenject::MemoryPool_4<TParam1, TParam2, TParam3, TValue>*>::get(),
                                                                             "Zenject.IFactory<TParam1,TParam2,TParam3,TValue>.Create", std::vector<Il2CppClass*>{},
                                                                             ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<TParam1>::get(),
                                                                                                               ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<TParam2>::get(),
                                                                                                               ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<TParam3>::get() })));
  return ::cordl_internals::RunMethodRethrow<TValue, false>(this, ___internal_method, p1, p2, p3);
}
template <typename TParam1, typename TParam2, typename TParam3, typename TValue>
inline ::Zenject::MemoryPool_4<TParam1, TParam2, TParam3, TValue>* Zenject::MemoryPool_4<TParam1, TParam2, TParam3, TValue>::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::New<::Zenject::MemoryPool_4<TParam1, TParam2, TParam3, TValue>*>());
}
template <typename TParam1, typename TParam2, typename TParam3, typename TValue> inline void Zenject::MemoryPool_4<TParam1, TParam2, TParam3, TValue>::_ctor() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Zenject::MemoryPool_4<TParam1, TParam2, TParam3, TValue>*>::get(),
                                                                             ".ctor", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
template <typename TParam1, typename TParam2, typename TParam3, typename TValue>
inline ::System::Object* Zenject::MemoryPool_4<TParam1, TParam2, TParam3, TValue>::__zenCreate(::ArrayW<::System::Object*, ::Array<::System::Object*>*> P_0) {
  static auto* ___internal_method = THROW_UNLESS((
      ::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Zenject::MemoryPool_4<TParam1, TParam2, TParam3, TValue>*>::get(), "__zenCreate", std::vector<Il2CppClass*>{},
                                 ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<::System::Object*, ::Array<::System::Object*>*>>::get() })));
  return ::cordl_internals::RunMethodRethrow<::System::Object*, false>(nullptr, ___internal_method, P_0);
}
template <typename TParam1, typename TParam2, typename TParam3, typename TValue>
inline ::Zenject::InjectTypeInfo* Zenject::MemoryPool_4<TParam1, TParam2, TParam3, TValue>::__zenCreateInjectTypeInfo() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Zenject::MemoryPool_4<TParam1, TParam2, TParam3, TValue>*>::get(),
                                                                             "__zenCreateInjectTypeInfo", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<::Zenject::InjectTypeInfo*, false>(nullptr, ___internal_method);
}
// Ctor Parameters []
template <typename TParam1, typename TParam2, typename TParam3, typename TValue> constexpr ::Zenject::MemoryPool_4<TParam1, TParam2, TParam3, TValue>::MemoryPool_4() {}
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
