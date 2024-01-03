#pragma once
#include "Zenject/zzzz__MemoryPool_1_impl.hpp"
#include "Zenject/zzzz__MonoPoolableMemoryPool_1_def.hpp"
#include "UnityEngine/zzzz__Transform_def.hpp"
#include "Zenject/zzzz__InjectTypeInfo_def.hpp"
#include "System/zzzz__Object_def.hpp"
template <typename TValue> constexpr ::UnityEngine::Transform*& Zenject::MonoPoolableMemoryPool_1<TValue>::__get__originalParent() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____originalParent;
}
template <typename TValue> constexpr ::cordl_internals::to_const_pointer<::UnityEngine::Transform*> const& Zenject::MonoPoolableMemoryPool_1<TValue>::__get__originalParent() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____originalParent;
}
template <typename TValue> constexpr void Zenject::MonoPoolableMemoryPool_1<TValue>::__set__originalParent(::UnityEngine::Transform* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____originalParent)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
template <typename TValue> inline ::Zenject::MonoPoolableMemoryPool_1<TValue>* Zenject::MonoPoolableMemoryPool_1<TValue>::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::New<::Zenject::MonoPoolableMemoryPool_1<TValue>*>());
}
template <typename TValue> inline void Zenject::MonoPoolableMemoryPool_1<TValue>::_ctor() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Zenject::MonoPoolableMemoryPool_1<TValue>*>::get(), ".ctor",
                                                                             std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
template <typename TValue> inline void Zenject::MonoPoolableMemoryPool_1<TValue>::OnCreated(TValue item) {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Zenject::MonoPoolableMemoryPool_1<TValue>*>::get(), 18)));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, item);
}
template <typename TValue> inline void Zenject::MonoPoolableMemoryPool_1<TValue>::OnDestroyed(TValue item) {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Zenject::MonoPoolableMemoryPool_1<TValue>*>::get(), 19)));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, item);
}
template <typename TValue> inline void Zenject::MonoPoolableMemoryPool_1<TValue>::OnDespawned(TValue item) {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Zenject::MonoPoolableMemoryPool_1<TValue>*>::get(), 16)));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, item);
}
template <typename TValue> inline void Zenject::MonoPoolableMemoryPool_1<TValue>::Reinitialize(TValue item) {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Zenject::MonoPoolableMemoryPool_1<TValue>*>::get(), 23)));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, item);
}
template <typename TValue> inline ::System::Object* Zenject::MonoPoolableMemoryPool_1<TValue>::__zenCreate(::ArrayW<::System::Object*, ::Array<::System::Object*>*> P_0) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Zenject::MonoPoolableMemoryPool_1<TValue>*>::get(), "__zenCreate", std::vector<Il2CppClass*>{},
                                  ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<::System::Object*, ::Array<::System::Object*>*>>::get() })));
  return ::cordl_internals::RunMethodRethrow<::System::Object*, false>(nullptr, ___internal_method, P_0);
}
template <typename TValue> inline ::Zenject::InjectTypeInfo* Zenject::MonoPoolableMemoryPool_1<TValue>::__zenCreateInjectTypeInfo() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Zenject::MonoPoolableMemoryPool_1<TValue>*>::get(),
                                                                             "__zenCreateInjectTypeInfo", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<::Zenject::InjectTypeInfo*, false>(nullptr, ___internal_method);
}
// Ctor Parameters []
template <typename TValue> constexpr ::Zenject::MonoPoolableMemoryPool_1<TValue>::MonoPoolableMemoryPool_1() {}
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
