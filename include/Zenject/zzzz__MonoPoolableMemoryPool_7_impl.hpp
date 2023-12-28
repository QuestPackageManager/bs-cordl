#pragma once
#include "Zenject/zzzz__MemoryPool_7_impl.hpp"
#include "Zenject/zzzz__MonoPoolableMemoryPool_7_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "Zenject/zzzz__InjectTypeInfo_def.hpp"
#include "UnityEngine/zzzz__Transform_def.hpp"
template <typename TParam1, typename TParam2, typename TParam3, typename TParam4, typename TParam5, typename TParam6, typename TValue>
constexpr ::UnityEngine::Transform*& Zenject::MonoPoolableMemoryPool_7<TParam1, TParam2, TParam3, TParam4, TParam5, TParam6, TValue>::__get__originalParent() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____originalParent;
}
template <typename TParam1, typename TParam2, typename TParam3, typename TParam4, typename TParam5, typename TParam6, typename TValue>
constexpr ::cordl_internals::to_const_pointer<::UnityEngine::Transform*> const&
Zenject::MonoPoolableMemoryPool_7<TParam1, TParam2, TParam3, TParam4, TParam5, TParam6, TValue>::__get__originalParent() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____originalParent;
}
template <typename TParam1, typename TParam2, typename TParam3, typename TParam4, typename TParam5, typename TParam6, typename TValue>
constexpr void Zenject::MonoPoolableMemoryPool_7<TParam1, TParam2, TParam3, TParam4, TParam5, TParam6, TValue>::__set__originalParent(::UnityEngine::Transform* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____originalParent)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
template <typename TParam1, typename TParam2, typename TParam3, typename TParam4, typename TParam5, typename TParam6, typename TValue>
inline ::Zenject::MonoPoolableMemoryPool_7<TParam1, TParam2, TParam3, TParam4, TParam5, TParam6, TValue>*
Zenject::MonoPoolableMemoryPool_7<TParam1, TParam2, TParam3, TParam4, TParam5, TParam6, TValue>::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::New<::Zenject::MonoPoolableMemoryPool_7<TParam1, TParam2, TParam3, TParam4, TParam5, TParam6, TValue>*>());
}
template <typename TParam1, typename TParam2, typename TParam3, typename TParam4, typename TParam5, typename TParam6, typename TValue>
inline void Zenject::MonoPoolableMemoryPool_7<TParam1, TParam2, TParam3, TParam4, TParam5, TParam6, TValue>::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Zenject::MonoPoolableMemoryPool_7<TParam1, TParam2, TParam3, TParam4, TParam5, TParam6, TValue>*>::get(),
                                  ".ctor", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
template <typename TParam1, typename TParam2, typename TParam3, typename TParam4, typename TParam5, typename TParam6, typename TValue>
inline void Zenject::MonoPoolableMemoryPool_7<TParam1, TParam2, TParam3, TParam4, TParam5, TParam6, TValue>::OnCreated(TValue item) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Zenject::MonoPoolableMemoryPool_7<TParam1, TParam2, TParam3, TParam4, TParam5, TParam6, TValue>*>::get(),
                                  "OnCreated", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<TValue>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, item);
}
template <typename TParam1, typename TParam2, typename TParam3, typename TParam4, typename TParam5, typename TParam6, typename TValue>
inline void Zenject::MonoPoolableMemoryPool_7<TParam1, TParam2, TParam3, TParam4, TParam5, TParam6, TValue>::OnDestroyed(TValue item) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Zenject::MonoPoolableMemoryPool_7<TParam1, TParam2, TParam3, TParam4, TParam5, TParam6, TValue>*>::get(),
                                  "OnDestroyed", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<TValue>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, item);
}
template <typename TParam1, typename TParam2, typename TParam3, typename TParam4, typename TParam5, typename TParam6, typename TValue>
inline void Zenject::MonoPoolableMemoryPool_7<TParam1, TParam2, TParam3, TParam4, TParam5, TParam6, TValue>::OnDespawned(TValue item) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Zenject::MonoPoolableMemoryPool_7<TParam1, TParam2, TParam3, TParam4, TParam5, TParam6, TValue>*>::get(),
                                  "OnDespawned", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<TValue>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, item);
}
template <typename TParam1, typename TParam2, typename TParam3, typename TParam4, typename TParam5, typename TParam6, typename TValue>
inline void Zenject::MonoPoolableMemoryPool_7<TParam1, TParam2, TParam3, TParam4, TParam5, TParam6, TValue>::Reinitialize(TParam1 p1, TParam2 p2, TParam3 p3, TParam4 p4, TParam5 p5, TParam6 p6,
                                                                                                                          TValue item) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Zenject::MonoPoolableMemoryPool_7<TParam1, TParam2, TParam3, TParam4, TParam5, TParam6, TValue>*>::get(), "Reinitialize",
      std::vector<Il2CppClass*>{},
      ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<TParam1>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<TParam2>::get(),
                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<TParam3>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<TParam4>::get(),
                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<TParam5>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<TParam6>::get(),
                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<TValue>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, p1, p2, p3, p4, p5, p6, item);
}
template <typename TParam1, typename TParam2, typename TParam3, typename TParam4, typename TParam5, typename TParam6, typename TValue>
inline ::System::Object* Zenject::MonoPoolableMemoryPool_7<TParam1, TParam2, TParam3, TParam4, TParam5, TParam6, TValue>::__zenCreate(::ArrayW<::System::Object*, ::Array<::System::Object*>*> P_0) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Zenject::MonoPoolableMemoryPool_7<TParam1, TParam2, TParam3, TParam4, TParam5, TParam6, TValue>*>::get(), "__zenCreate",
      std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<::System::Object*, ::Array<::System::Object*>*>>::get() })));
  return ::cordl_internals::RunMethodRethrow<::System::Object*, false>(nullptr, ___internal_method, P_0);
}
template <typename TParam1, typename TParam2, typename TParam3, typename TParam4, typename TParam5, typename TParam6, typename TValue>
inline ::Zenject::InjectTypeInfo* Zenject::MonoPoolableMemoryPool_7<TParam1, TParam2, TParam3, TParam4, TParam5, TParam6, TValue>::__zenCreateInjectTypeInfo() {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Zenject::MonoPoolableMemoryPool_7<TParam1, TParam2, TParam3, TParam4, TParam5, TParam6, TValue>*>::get(),
                                  "__zenCreateInjectTypeInfo", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<::Zenject::InjectTypeInfo*, false>(nullptr, ___internal_method);
}
// Ctor Parameters []
template <typename TParam1, typename TParam2, typename TParam3, typename TParam4, typename TParam5, typename TParam6, typename TValue>
constexpr ::Zenject::MonoPoolableMemoryPool_7<TParam1, TParam2, TParam3, TParam4, TParam5, TParam6, TValue>::MonoPoolableMemoryPool_7() {}
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
