#pragma once
// IWYU pragma private; include "Zenject\IPrefabInstantiator.hpp"
#include "Zenject/zzzz__IPrefabInstantiator_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
#include "System/zzzz__Action_def.hpp"
#include "System/zzzz__Type_def.hpp"
#include "UnityEngine/zzzz__GameObject_def.hpp"
#include "UnityEngine/zzzz__Object_def.hpp"
#include "Zenject/zzzz__GameObjectCreationParameters_def.hpp"
#include "Zenject/zzzz__InjectContext_def.hpp"
#include "Zenject/zzzz__TypeValuePair_def.hpp"
//  Writing Method size for method: ::Zenject::IPrefabInstantiator.get_ArgumentTarget
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Type* (::Zenject::IPrefabInstantiator::*)()>(&::Zenject::IPrefabInstantiator::get_ArgumentTarget)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::Zenject::IPrefabInstantiator*>(), { ::i2c::class_of<::Zenject::IPrefabInstantiator*>(), 0 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Zenject::IPrefabInstantiator.get_ExtraArguments
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Collections::Generic::List_1<::Zenject::TypeValuePair>* (::Zenject::IPrefabInstantiator::*)()>(
    &::Zenject::IPrefabInstantiator::get_ExtraArguments)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::Zenject::IPrefabInstantiator*>(), { ::i2c::class_of<::Zenject::IPrefabInstantiator*>(), 1 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Zenject::IPrefabInstantiator.get_GameObjectCreationParameters
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Zenject::GameObjectCreationParameters* (::Zenject::IPrefabInstantiator::*)()>(
    &::Zenject::IPrefabInstantiator::get_GameObjectCreationParameters)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::Zenject::IPrefabInstantiator*>(), { ::i2c::class_of<::Zenject::IPrefabInstantiator*>(), 2 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Zenject::IPrefabInstantiator.Instantiate
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityW<::UnityEngine::GameObject> (::Zenject::IPrefabInstantiator::*)(
    ::Zenject::InjectContext*, ::System::Collections::Generic::List_1<::Zenject::TypeValuePair>*, ::by_ref<::System::Action*>)>(&::Zenject::IPrefabInstantiator::Instantiate)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::Zenject::IPrefabInstantiator*>(), { ::i2c::class_of<::Zenject::IPrefabInstantiator*>(), 3 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Zenject::IPrefabInstantiator.GetPrefab
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityW<::UnityEngine::Object> (::Zenject::IPrefabInstantiator::*)()>(&::Zenject::IPrefabInstantiator::GetPrefab)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::Zenject::IPrefabInstantiator*>(), { ::i2c::class_of<::Zenject::IPrefabInstantiator*>(), 4 }));
    return ___internal_method;
  }
};
inline ::System::Type* Zenject::IPrefabInstantiator::get_ArgumentTarget() {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::Zenject::IPrefabInstantiator*>(), 0 })));
  return ::cordl_internals::RunMethodRethrow<::System::Type*>(this, ___internal_method);
}
inline ::System::Collections::Generic::List_1<::Zenject::TypeValuePair>* Zenject::IPrefabInstantiator::get_ExtraArguments() {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::Zenject::IPrefabInstantiator*>(), 1 })));
  return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::List_1<::Zenject::TypeValuePair>*>(this, ___internal_method);
}
inline ::Zenject::GameObjectCreationParameters* Zenject::IPrefabInstantiator::get_GameObjectCreationParameters() {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::Zenject::IPrefabInstantiator*>(), 2 })));
  return ::cordl_internals::RunMethodRethrow<::Zenject::GameObjectCreationParameters*>(this, ___internal_method);
}
inline ::UnityW<::UnityEngine::GameObject> Zenject::IPrefabInstantiator::Instantiate(::Zenject::InjectContext* context, ::System::Collections::Generic::List_1<::Zenject::TypeValuePair>* args,
                                                                                     ::by_ref<::System::Action*> injectAction) {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::Zenject::IPrefabInstantiator*>(), 3 })));
  return ::cordl_internals::RunMethodRethrow<::UnityW<::UnityEngine::GameObject>>(this, ___internal_method, context, args, injectAction);
}
inline ::UnityW<::UnityEngine::Object> Zenject::IPrefabInstantiator::GetPrefab() {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::Zenject::IPrefabInstantiator*>(), 4 })));
  return ::cordl_internals::RunMethodRethrow<::UnityW<::UnityEngine::Object>>(this, ___internal_method);
}
