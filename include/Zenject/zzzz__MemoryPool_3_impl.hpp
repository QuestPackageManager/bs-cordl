#pragma once
#include "Zenject/zzzz__MemoryPoolBase_1_impl.hpp"
#include "Zenject/zzzz__MemoryPool_3_def.hpp"
#include "Zenject/zzzz__IFactory_3_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "Zenject/zzzz__IMemoryPool_def.hpp"
#include "Zenject/zzzz__IMemoryPool_3_def.hpp"
#include "Zenject/zzzz__IDespawnableMemoryPool_1_def.hpp"
#include "Zenject/zzzz__IFactory_def.hpp"
#include "Zenject/zzzz__InjectTypeInfo_def.hpp"
/// @brief Convert operator to "::Zenject::IMemoryPool_3<TParam1,TParam2,TValue>"
template <typename TParam1, typename TParam2, typename TValue> constexpr Zenject::MemoryPool_3<TParam1, TParam2, TValue>::operator ::Zenject::IMemoryPool_3<TParam1, TParam2, TValue>*() noexcept {
  return static_cast<::Zenject::IMemoryPool_3<TParam1, TParam2, TValue>*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::Zenject::IDespawnableMemoryPool_1<TValue>"
template <typename TParam1, typename TParam2, typename TValue> constexpr Zenject::MemoryPool_3<TParam1, TParam2, TValue>::operator ::Zenject::IDespawnableMemoryPool_1<TValue>*() noexcept {
  return static_cast<::Zenject::IDespawnableMemoryPool_1<TValue>*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::Zenject::IMemoryPool"
template <typename TParam1, typename TParam2, typename TValue> constexpr Zenject::MemoryPool_3<TParam1, TParam2, TValue>::operator ::Zenject::IMemoryPool*() noexcept {
  return static_cast<::Zenject::IMemoryPool*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::Zenject::IFactory_3<TParam1,TParam2,TValue>"
template <typename TParam1, typename TParam2, typename TValue> constexpr Zenject::MemoryPool_3<TParam1, TParam2, TValue>::operator ::Zenject::IFactory_3<TParam1, TParam2, TValue>*() noexcept {
  return static_cast<::Zenject::IFactory_3<TParam1, TParam2, TValue>*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::Zenject::IFactory"
template <typename TParam1, typename TParam2, typename TValue> constexpr Zenject::MemoryPool_3<TParam1, TParam2, TValue>::operator ::Zenject::IFactory*() noexcept {
  return static_cast<::Zenject::IFactory*>(static_cast<void*>(this));
}
template <typename TParam1, typename TParam2, typename TValue> inline TValue Zenject::MemoryPool_3<TParam1, TParam2, TValue>::Spawn(TParam1 param1, TParam2 param2) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Zenject::MemoryPool_3<TParam1, TParam2, TValue>*>::get(), "Spawn", std::vector<Il2CppClass*>{},
      ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<TParam1>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<TParam2>::get() })));
  return ::cordl_internals::RunMethodRethrow<TValue, false>(this, ___internal_method, param1, param2);
}
template <typename TParam1, typename TParam2, typename TValue> inline void Zenject::MemoryPool_3<TParam1, TParam2, TValue>::Reinitialize(TParam1 p1, TParam2 p2, TValue item) {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Zenject::MemoryPool_3<TParam1, TParam2, TValue>*>::get(), 23)));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, p1, p2, item);
}
template <typename TParam1, typename TParam2, typename TValue> inline TValue Zenject::MemoryPool_3<TParam1, TParam2, TValue>::Zenject_IFactory_TParam1_TParam2_TValue__Create(TParam1 p1, TParam2 p2) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Zenject::MemoryPool_3<TParam1, TParam2, TValue>*>::get(), "Zenject.IFactory<TParam1,TParam2,TValue>.Create", std::vector<Il2CppClass*>{},
      ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<TParam1>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<TParam2>::get() })));
  return ::cordl_internals::RunMethodRethrow<TValue, false>(this, ___internal_method, p1, p2);
}
template <typename TParam1, typename TParam2, typename TValue> inline ::Zenject::MemoryPool_3<TParam1, TParam2, TValue>* Zenject::MemoryPool_3<TParam1, TParam2, TValue>::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::New<::Zenject::MemoryPool_3<TParam1, TParam2, TValue>*>());
}
template <typename TParam1, typename TParam2, typename TValue> inline void Zenject::MemoryPool_3<TParam1, TParam2, TValue>::_ctor() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Zenject::MemoryPool_3<TParam1, TParam2, TValue>*>::get(), ".ctor",
                                                                             std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
template <typename TParam1, typename TParam2, typename TValue>
inline ::System::Object* Zenject::MemoryPool_3<TParam1, TParam2, TValue>::__zenCreate(::ArrayW<::System::Object*, ::Array<::System::Object*>*> P_0) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Zenject::MemoryPool_3<TParam1, TParam2, TValue>*>::get(), "__zenCreate", std::vector<Il2CppClass*>{},
                                  ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<::System::Object*, ::Array<::System::Object*>*>>::get() })));
  return ::cordl_internals::RunMethodRethrow<::System::Object*, false>(nullptr, ___internal_method, P_0);
}
template <typename TParam1, typename TParam2, typename TValue> inline ::Zenject::InjectTypeInfo* Zenject::MemoryPool_3<TParam1, TParam2, TValue>::__zenCreateInjectTypeInfo() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Zenject::MemoryPool_3<TParam1, TParam2, TValue>*>::get(),
                                                                             "__zenCreateInjectTypeInfo", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<::Zenject::InjectTypeInfo*, false>(nullptr, ___internal_method);
}
// Ctor Parameters []
template <typename TParam1, typename TParam2, typename TValue> constexpr ::Zenject::MemoryPool_3<TParam1, TParam2, TValue>::MemoryPool_3() {}
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
