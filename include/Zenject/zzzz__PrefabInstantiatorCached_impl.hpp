#pragma once
#include "System/zzzz__Object_impl.hpp"
#include "Zenject/zzzz__PrefabInstantiatorCached_def.hpp"
#include "Zenject/zzzz__GameObjectCreationParameters_def.hpp"
#include "Zenject/zzzz__IPrefabInstantiator_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
#include "System/zzzz__Action_def.hpp"
#include "Zenject/zzzz__TypeValuePair_def.hpp"
#include "System/zzzz__Type_def.hpp"
#include "UnityEngine/zzzz__GameObject_def.hpp"
#include "Zenject/zzzz__InjectContext_def.hpp"
#include "UnityEngine/zzzz__Object_def.hpp"
//  Writing Method size for method: ::Zenject::PrefabInstantiatorCached._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Zenject::PrefabInstantiatorCached::*)(::Zenject::IPrefabInstantiator*)>(
    &::Zenject::PrefabInstantiatorCached::_ctor)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x2da1a00;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Zenject::PrefabInstantiatorCached*>::get(), ".ctor", std::vector<Il2CppClass*>{},
                                                 ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Zenject::IPrefabInstantiator*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Zenject::PrefabInstantiatorCached.get_ExtraArguments
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Collections::Generic::List_1<::Zenject::TypeValuePair>* (::Zenject::PrefabInstantiatorCached::*)()>(
    &::Zenject::PrefabInstantiatorCached::get_ExtraArguments)> {
  constexpr static std::size_t size = 0xa4;
  constexpr static std::size_t addrs = 0x2da1a28;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Zenject::PrefabInstantiatorCached*>::get(),
                                                                               "get_ExtraArguments", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Zenject::PrefabInstantiatorCached.get_ArgumentTarget
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Type* (::Zenject::PrefabInstantiatorCached::*)()>(
    &::Zenject::PrefabInstantiatorCached::get_ArgumentTarget)> {
  constexpr static std::size_t size = 0xa0;
  constexpr static std::size_t addrs = 0x2da1acc;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Zenject::PrefabInstantiatorCached*>::get(),
                                                                               "get_ArgumentTarget", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Zenject::PrefabInstantiatorCached.get_GameObjectCreationParameters
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Zenject::GameObjectCreationParameters* (::Zenject::PrefabInstantiatorCached::*)()>(
    &::Zenject::PrefabInstantiatorCached::get_GameObjectCreationParameters)> {
  constexpr static std::size_t size = 0xa4;
  constexpr static std::size_t addrs = 0x2da1b6c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Zenject::PrefabInstantiatorCached*>::get(),
                                                                               "get_GameObjectCreationParameters", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Zenject::PrefabInstantiatorCached.GetPrefab
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::Object* (::Zenject::PrefabInstantiatorCached::*)()>(&::Zenject::PrefabInstantiatorCached::GetPrefab)> {
  constexpr static std::size_t size = 0xa4;
  constexpr static std::size_t addrs = 0x2da1c10;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Zenject::PrefabInstantiatorCached*>::get(), "GetPrefab",
                                                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Zenject::PrefabInstantiatorCached.Instantiate
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::GameObject* (
    ::Zenject::PrefabInstantiatorCached::*)(::Zenject::InjectContext*, ::System::Collections::Generic::List_1<::Zenject::TypeValuePair>*, ByRef<::System::Action*>)>(
    &::Zenject::PrefabInstantiatorCached::Instantiate)> {
  constexpr static std::size_t size = 0x17c;
  constexpr static std::size_t addrs = 0x2da1cb4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Zenject::PrefabInstantiatorCached*>::get(), "Instantiate", std::vector<Il2CppClass*>{},
                                    ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Zenject::InjectContext*>::get(),
                                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::List_1<::Zenject::TypeValuePair>*>::get(),
                                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::System::Action*>>::get() })));
    return ___internal_method;
  }
};
/// @brief Convert operator to "::Zenject::IPrefabInstantiator"
constexpr Zenject::PrefabInstantiatorCached::operator ::Zenject::IPrefabInstantiator*() noexcept {
  return static_cast<::Zenject::IPrefabInstantiator*>(static_cast<void*>(this));
}
constexpr ::Zenject::IPrefabInstantiator*& Zenject::PrefabInstantiatorCached::__get__subInstantiator() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____subInstantiator;
}
constexpr ::cordl_internals::to_const_pointer<::Zenject::IPrefabInstantiator*> const& Zenject::PrefabInstantiatorCached::__get__subInstantiator() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____subInstantiator;
}
constexpr void Zenject::PrefabInstantiatorCached::__set__subInstantiator(::Zenject::IPrefabInstantiator* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____subInstantiator)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::UnityEngine::GameObject*& Zenject::PrefabInstantiatorCached::__get__gameObject() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____gameObject;
}
constexpr ::cordl_internals::to_const_pointer<::UnityEngine::GameObject*> const& Zenject::PrefabInstantiatorCached::__get__gameObject() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____gameObject;
}
constexpr void Zenject::PrefabInstantiatorCached::__set__gameObject(::UnityEngine::GameObject* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____gameObject)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline ::Zenject::PrefabInstantiatorCached* Zenject::PrefabInstantiatorCached::New_ctor(::Zenject::IPrefabInstantiator* subInstantiator) {
  return THROW_UNLESS(::il2cpp_utils::New<::Zenject::PrefabInstantiatorCached*>(subInstantiator));
}
inline void Zenject::PrefabInstantiatorCached::_ctor(::Zenject::IPrefabInstantiator* subInstantiator) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Zenject::PrefabInstantiatorCached*>::get(), ".ctor", std::vector<Il2CppClass*>{},
                                               ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Zenject::IPrefabInstantiator*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, subInstantiator);
}
inline ::System::Collections::Generic::List_1<::Zenject::TypeValuePair>* Zenject::PrefabInstantiatorCached::get_ExtraArguments() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Zenject::PrefabInstantiatorCached*>::get(), "get_ExtraArguments",
                                                                             std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::List_1<::Zenject::TypeValuePair>*, false>(this, ___internal_method);
}
inline ::System::Type* Zenject::PrefabInstantiatorCached::get_ArgumentTarget() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Zenject::PrefabInstantiatorCached*>::get(), "get_ArgumentTarget",
                                                                             std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<::System::Type*, false>(this, ___internal_method);
}
inline ::Zenject::GameObjectCreationParameters* Zenject::PrefabInstantiatorCached::get_GameObjectCreationParameters() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Zenject::PrefabInstantiatorCached*>::get(),
                                                                             "get_GameObjectCreationParameters", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<::Zenject::GameObjectCreationParameters*, false>(this, ___internal_method);
}
inline ::UnityEngine::Object* Zenject::PrefabInstantiatorCached::GetPrefab() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Zenject::PrefabInstantiatorCached*>::get(), "GetPrefab",
                                                                             std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::Object*, false>(this, ___internal_method);
}
inline ::UnityEngine::GameObject* Zenject::PrefabInstantiatorCached::Instantiate(::Zenject::InjectContext* context, ::System::Collections::Generic::List_1<::Zenject::TypeValuePair>* args,
                                                                                 ByRef<::System::Action*> injectAction) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Zenject::PrefabInstantiatorCached*>::get(), "Instantiate", std::vector<Il2CppClass*>{},
                                  ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Zenject::InjectContext*>::get(),
                                                                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::List_1<::Zenject::TypeValuePair>*>::get(),
                                                                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::System::Action*>>::get() })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::GameObject*, false>(this, ___internal_method, context, args, injectAction);
}
// Ctor Parameters []
constexpr ::Zenject::PrefabInstantiatorCached::PrefabInstantiatorCached() {}
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
