#pragma once
#include "System/zzzz__Object_impl.hpp"
#include "Zenject/zzzz__ConditionCopyNonLazyBinder_impl.hpp"
#include "Zenject/zzzz__InstantiateCallbackConditionCopyNonLazyBinder_def.hpp"
#include "System/zzzz__Action_2_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "Zenject/zzzz__BindInfo_def.hpp"
#include "Zenject/zzzz__ConditionCopyNonLazyBinder_def.hpp"
#include "Zenject/zzzz__InjectContext_def.hpp"
#include "Zenject/zzzz__InjectTypeInfo_def.hpp"
#include "Zenject/zzzz__InstantiateCallbackConditionCopyNonLazyBinder_def.hpp"
template <typename T>
constexpr ::System::Action_2<::Zenject::InjectContext*, T>*& Zenject::__InstantiateCallbackConditionCopyNonLazyBinder____c__DisplayClass2_0_1<T>::__cordl_internal_get_callback() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___callback;
}
template <typename T>
constexpr ::cordl_internals::to_const_pointer<::System::Action_2<::Zenject::InjectContext*, T>*> const&
Zenject::__InstantiateCallbackConditionCopyNonLazyBinder____c__DisplayClass2_0_1<T>::__cordl_internal_get_callback() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___callback;
}
template <typename T>
constexpr void Zenject::__InstantiateCallbackConditionCopyNonLazyBinder____c__DisplayClass2_0_1<T>::__cordl_internal_set_callback(::System::Action_2<::Zenject::InjectContext*, T>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___callback)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
template <typename T>
inline ::Zenject::__InstantiateCallbackConditionCopyNonLazyBinder____c__DisplayClass2_0_1<T>* Zenject::__InstantiateCallbackConditionCopyNonLazyBinder____c__DisplayClass2_0_1<T>::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::Zenject::__InstantiateCallbackConditionCopyNonLazyBinder____c__DisplayClass2_0_1<T>*>());
}
template <typename T> inline void Zenject::__InstantiateCallbackConditionCopyNonLazyBinder____c__DisplayClass2_0_1<T>::_ctor() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Zenject::__InstantiateCallbackConditionCopyNonLazyBinder____c__DisplayClass2_0_1<T>*>::get(),
                                               ".ctor", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
template <typename T> inline void Zenject::__InstantiateCallbackConditionCopyNonLazyBinder____c__DisplayClass2_0_1<T>::_OnInstantiated_b__0(::Zenject::InjectContext* ctx, ::System::Object* obj) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Zenject::__InstantiateCallbackConditionCopyNonLazyBinder____c__DisplayClass2_0_1<T>*>::get(),
                                               "<OnInstantiated>b__0", std::span<Il2CppClass const* const, 0>(),
                                               ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Zenject::InjectContext*>::get(),
                                                                                   ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, ctx, obj);
}
template <typename T>
inline ::System::Object* Zenject::__InstantiateCallbackConditionCopyNonLazyBinder____c__DisplayClass2_0_1<T>::__zenCreate(::ArrayW<::System::Object*, ::Array<::System::Object*>*> P_0) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Zenject::__InstantiateCallbackConditionCopyNonLazyBinder____c__DisplayClass2_0_1<T>*>::get(), "__zenCreate",
                                  std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<::System::Object*, ::Array<::System::Object*>*>>::get() })));
  return ::cordl_internals::RunMethodRethrow<::System::Object*, false>(nullptr, ___internal_method, P_0);
}
template <typename T> inline ::Zenject::InjectTypeInfo* Zenject::__InstantiateCallbackConditionCopyNonLazyBinder____c__DisplayClass2_0_1<T>::__zenCreateInjectTypeInfo() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Zenject::__InstantiateCallbackConditionCopyNonLazyBinder____c__DisplayClass2_0_1<T>*>::get(),
                                               "__zenCreateInjectTypeInfo", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::Zenject::InjectTypeInfo*, false>(nullptr, ___internal_method);
}
// Ctor Parameters []
template <typename T> constexpr ::Zenject::__InstantiateCallbackConditionCopyNonLazyBinder____c__DisplayClass2_0_1<T>::__InstantiateCallbackConditionCopyNonLazyBinder____c__DisplayClass2_0_1() {}
//  Writing Method size for method: ::Zenject::InstantiateCallbackConditionCopyNonLazyBinder._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Zenject::InstantiateCallbackConditionCopyNonLazyBinder::*)(::Zenject::BindInfo*)>(
    &::Zenject::InstantiateCallbackConditionCopyNonLazyBinder::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2feaa60;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Zenject::InstantiateCallbackConditionCopyNonLazyBinder*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Zenject::BindInfo*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Zenject::InstantiateCallbackConditionCopyNonLazyBinder.OnInstantiated
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<::Zenject::ConditionCopyNonLazyBinder* (::Zenject::InstantiateCallbackConditionCopyNonLazyBinder::*)(::System::Action_2<::Zenject::InjectContext*, ::System::Object*>*)>(
        &::Zenject::InstantiateCallbackConditionCopyNonLazyBinder::OnInstantiated)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x2feaa68;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Zenject::InstantiateCallbackConditionCopyNonLazyBinder*>::get(), "OnInstantiated", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action_2<::Zenject::InjectContext*, ::System::Object*>*>::get() })));
    return ___internal_method;
  }
};
inline ::Zenject::InstantiateCallbackConditionCopyNonLazyBinder* Zenject::InstantiateCallbackConditionCopyNonLazyBinder::New_ctor(::Zenject::BindInfo* bindInfo) {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::Zenject::InstantiateCallbackConditionCopyNonLazyBinder*>(bindInfo));
}
inline void Zenject::InstantiateCallbackConditionCopyNonLazyBinder::_ctor(::Zenject::BindInfo* bindInfo) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Zenject::InstantiateCallbackConditionCopyNonLazyBinder*>::get(), ".ctor",
                                  std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Zenject::BindInfo*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, bindInfo);
}
inline ::Zenject::ConditionCopyNonLazyBinder* Zenject::InstantiateCallbackConditionCopyNonLazyBinder::OnInstantiated(::System::Action_2<::Zenject::InjectContext*, ::System::Object*>* callback) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Zenject::InstantiateCallbackConditionCopyNonLazyBinder*>::get(), "OnInstantiated", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action_2<::Zenject::InjectContext*, ::System::Object*>*>::get() })));
  return ::cordl_internals::RunMethodRethrow<::Zenject::ConditionCopyNonLazyBinder*, false>(this, ___internal_method, callback);
}
template <typename T> inline ::Zenject::ConditionCopyNonLazyBinder* Zenject::InstantiateCallbackConditionCopyNonLazyBinder::OnInstantiated(::System::Action_2<::Zenject::InjectContext*, T>* callback) {
  static auto* ___internal_method_base =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Zenject::InstantiateCallbackConditionCopyNonLazyBinder*>::get(), "OnInstantiated",
                                               std::array<Il2CppClass const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T>::get() },
                                               ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action_2<::Zenject::InjectContext*, T>*>::get() })));
  static auto* ___internal_method =
      THROW_UNLESS(::il2cpp_utils::MakeGenericMethod(___internal_method_base, std::array<Il2CppClass const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T>::get() }));
  return ::cordl_internals::RunMethodRethrow<::Zenject::ConditionCopyNonLazyBinder*, false>(this, ___internal_method, callback);
}
// Ctor Parameters []
constexpr ::Zenject::InstantiateCallbackConditionCopyNonLazyBinder::InstantiateCallbackConditionCopyNonLazyBinder() {}
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
