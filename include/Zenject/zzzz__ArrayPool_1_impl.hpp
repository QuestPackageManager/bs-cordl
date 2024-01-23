#pragma once
#include "Zenject/zzzz__StaticMemoryPoolBaseBase_1_impl.hpp"
#include "Zenject/zzzz__ArrayPool_1_def.hpp"
#include "System/Collections/Generic/zzzz__Dictionary_2_def.hpp"
template <typename T> constexpr int32_t& Zenject::ArrayPool_1<T>::__cordl_internal_get__length() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____length;
}
template <typename T> constexpr int32_t const& Zenject::ArrayPool_1<T>::__cordl_internal_get__length() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____length;
}
template <typename T> constexpr void Zenject::ArrayPool_1<T>::__cordl_internal_set__length(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____length = value;
}
template <typename T> inline void Zenject::ArrayPool_1<T>::setStaticF__pools(::System::Collections::Generic::Dictionary_2<int32_t, ::Zenject::ArrayPool_1<T>*>* value) {
  ::cordl_internals::setStaticField<::System::Collections::Generic::Dictionary_2<int32_t, ::Zenject::ArrayPool_1<T>*>*, "_pools",
                                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Zenject::ArrayPool_1<T>*>::get>(
      std::forward<::System::Collections::Generic::Dictionary_2<int32_t, ::Zenject::ArrayPool_1<T>*>*>(value));
}
template <typename T> inline ::System::Collections::Generic::Dictionary_2<int32_t, ::Zenject::ArrayPool_1<T>*>* Zenject::ArrayPool_1<T>::getStaticF__pools() {
  return ::cordl_internals::getStaticField<::System::Collections::Generic::Dictionary_2<int32_t, ::Zenject::ArrayPool_1<T>*>*, "_pools",
                                           ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Zenject::ArrayPool_1<T>*>::get>();
}
template <typename T> inline ::Zenject::ArrayPool_1<T>* Zenject::ArrayPool_1<T>::New_ctor(int32_t length) {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::Zenject::ArrayPool_1<T>*>(length));
}
template <typename T> inline void Zenject::ArrayPool_1<T>::_ctor(int32_t length) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Zenject::ArrayPool_1<T>*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
                                               ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, length);
}
template <typename T> inline void Zenject::ArrayPool_1<T>::OnDespawned(::ArrayW<T, ::Array<T>*> arr) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Zenject::ArrayPool_1<T>*>::get(), "OnDespawned", std::span<Il2CppClass const* const, 0>(),
                                               ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<T, ::Array<T>*>>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, arr);
}
template <typename T> inline ::ArrayW<T, ::Array<T>*> Zenject::ArrayPool_1<T>::Spawn() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Zenject::ArrayPool_1<T>*>::get(), "Spawn",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::ArrayW<T, ::Array<T>*>, false>(this, ___internal_method);
}
template <typename T> inline ::ArrayW<T, ::Array<T>*> Zenject::ArrayPool_1<T>::Alloc() {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Zenject::ArrayPool_1<T>*>::get(), 15)));
  return ::cordl_internals::RunMethodRethrow<::ArrayW<T, ::Array<T>*>, false>(this, ___internal_method);
}
template <typename T> inline ::Zenject::ArrayPool_1<T>* Zenject::ArrayPool_1<T>::GetPool(int32_t length) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Zenject::ArrayPool_1<T>*>::get(), "GetPool", std::span<Il2CppClass const* const, 0>(),
                                               ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<::Zenject::ArrayPool_1<T>*, false>(nullptr, ___internal_method, length);
}
// Ctor Parameters []
template <typename T> constexpr ::Zenject::ArrayPool_1<T>::ArrayPool_1() {}
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
