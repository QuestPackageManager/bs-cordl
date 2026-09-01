#pragma once
// IWYU pragma private; include "Zenject\PrefabInstantiatorCached.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "Zenject/zzzz__PrefabInstantiatorCached_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
#include "System/zzzz__Action_def.hpp"
#include "System/zzzz__Type_def.hpp"
#include "UnityEngine/zzzz__GameObject_def.hpp"
#include "UnityEngine/zzzz__Object_def.hpp"
#include "Zenject/zzzz__GameObjectCreationParameters_def.hpp"
#include "Zenject/zzzz__IPrefabInstantiator_def.hpp"
#include "Zenject/zzzz__InjectContext_def.hpp"
#include "Zenject/zzzz__TypeValuePair_def.hpp"
//  Writing Method size for method: ::Zenject::PrefabInstantiatorCached._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Zenject::PrefabInstantiatorCached::*)(::Zenject::IPrefabInstantiator*)>(&::Zenject::PrefabInstantiatorCached::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x6e88c98;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Zenject::PrefabInstantiatorCached*>(), { ".ctor", {}, { ::i2c::type_of<::Zenject::IPrefabInstantiator*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Zenject::PrefabInstantiatorCached.get_ExtraArguments
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Collections::Generic::List_1<::Zenject::TypeValuePair>* (::Zenject::PrefabInstantiatorCached::*)()>(
    &::Zenject::PrefabInstantiatorCached::get_ExtraArguments)> {
  constexpr static std::size_t size = 0xa8;
  constexpr static std::size_t addrs = 0x6e88ca0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Zenject::PrefabInstantiatorCached*>(), { "get_ExtraArguments", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Zenject::PrefabInstantiatorCached.get_ArgumentTarget
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Type* (::Zenject::PrefabInstantiatorCached::*)()>(&::Zenject::PrefabInstantiatorCached::get_ArgumentTarget)> {
  constexpr static std::size_t size = 0xa4;
  constexpr static std::size_t addrs = 0x6e88d48;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Zenject::PrefabInstantiatorCached*>(), { "get_ArgumentTarget", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Zenject::PrefabInstantiatorCached.get_GameObjectCreationParameters
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Zenject::GameObjectCreationParameters* (::Zenject::PrefabInstantiatorCached::*)()>(
    &::Zenject::PrefabInstantiatorCached::get_GameObjectCreationParameters)> {
  constexpr static std::size_t size = 0xa8;
  constexpr static std::size_t addrs = 0x6e88dec;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Zenject::PrefabInstantiatorCached*>(), { "get_GameObjectCreationParameters", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Zenject::PrefabInstantiatorCached.GetPrefab
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityW<::UnityEngine::Object> (::Zenject::PrefabInstantiatorCached::*)()>(&::Zenject::PrefabInstantiatorCached::GetPrefab)> {
  constexpr static std::size_t size = 0xa8;
  constexpr static std::size_t addrs = 0x6e88e94;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Zenject::PrefabInstantiatorCached*>(), { "GetPrefab", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Zenject::PrefabInstantiatorCached.Instantiate
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityW<::UnityEngine::GameObject> (::Zenject::PrefabInstantiatorCached::*)(
    ::Zenject::InjectContext*, ::System::Collections::Generic::List_1<::Zenject::TypeValuePair>*, ::by_ref<::System::Action*>)>(&::Zenject::PrefabInstantiatorCached::Instantiate)> {
  constexpr static std::size_t size = 0x18c;
  constexpr static std::size_t addrs = 0x6e88f3c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Zenject::PrefabInstantiatorCached*>(),
                                                             { "Instantiate",
                                                               {},
                                                               { ::i2c::type_of<::Zenject::InjectContext*>(), ::i2c::type_of<::System::Collections::Generic::List_1<::Zenject::TypeValuePair>*>(),
                                                                 ::i2c::type_of<::by_ref<::System::Action*>>() } })));
    return ___internal_method;
  }
};
constexpr ::Zenject::IPrefabInstantiator*& Zenject::PrefabInstantiatorCached::__cordl_internal_get__subInstantiator() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____subInstantiator;
}
constexpr ::Zenject::IPrefabInstantiator* const& Zenject::PrefabInstantiatorCached::__cordl_internal_get__subInstantiator() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____subInstantiator;
}
constexpr void Zenject::PrefabInstantiatorCached::__cordl_internal_set__subInstantiator(::Zenject::IPrefabInstantiator* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____subInstantiator = value;
}
constexpr ::UnityW<::UnityEngine::GameObject>& Zenject::PrefabInstantiatorCached::__cordl_internal_get__gameObject() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____gameObject;
}
constexpr ::UnityW<::UnityEngine::GameObject> const& Zenject::PrefabInstantiatorCached::__cordl_internal_get__gameObject() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____gameObject;
}
constexpr void Zenject::PrefabInstantiatorCached::__cordl_internal_set__gameObject(::UnityW<::UnityEngine::GameObject> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____gameObject = value;
}
inline void Zenject::PrefabInstantiatorCached::_ctor(::Zenject::IPrefabInstantiator* subInstantiator) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Zenject::PrefabInstantiatorCached*>(), { ".ctor", {}, { ::i2c::type_of<::Zenject::IPrefabInstantiator*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, subInstantiator);
}
inline ::System::Collections::Generic::List_1<::Zenject::TypeValuePair>* Zenject::PrefabInstantiatorCached::get_ExtraArguments() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Zenject::PrefabInstantiatorCached*>(), { "get_ExtraArguments", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::List_1<::Zenject::TypeValuePair>*>(this, ___internal_method);
}
inline ::System::Type* Zenject::PrefabInstantiatorCached::get_ArgumentTarget() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Zenject::PrefabInstantiatorCached*>(), { "get_ArgumentTarget", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::System::Type*>(this, ___internal_method);
}
inline ::Zenject::GameObjectCreationParameters* Zenject::PrefabInstantiatorCached::get_GameObjectCreationParameters() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Zenject::PrefabInstantiatorCached*>(), { "get_GameObjectCreationParameters", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::Zenject::GameObjectCreationParameters*>(this, ___internal_method);
}
inline ::UnityW<::UnityEngine::Object> Zenject::PrefabInstantiatorCached::GetPrefab() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Zenject::PrefabInstantiatorCached*>(), { "GetPrefab", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::UnityW<::UnityEngine::Object>>(this, ___internal_method);
}
inline ::UnityW<::UnityEngine::GameObject> Zenject::PrefabInstantiatorCached::Instantiate(::Zenject::InjectContext* context, ::System::Collections::Generic::List_1<::Zenject::TypeValuePair>* args,
                                                                                          ::by_ref<::System::Action*> injectAction) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Zenject::PrefabInstantiatorCached*>(),
                                                           { "Instantiate",
                                                             {},
                                                             { ::i2c::type_of<::Zenject::InjectContext*>(), ::i2c::type_of<::System::Collections::Generic::List_1<::Zenject::TypeValuePair>*>(),
                                                               ::i2c::type_of<::by_ref<::System::Action*>>() } })));
  return ::cordl_internals::RunMethodRethrow<::UnityW<::UnityEngine::GameObject>>(this, ___internal_method, context, args, injectAction);
}
inline ::Zenject::PrefabInstantiatorCached* Zenject::PrefabInstantiatorCached::New_ctor(::Zenject::IPrefabInstantiator* subInstantiator) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Zenject::PrefabInstantiatorCached*>(subInstantiator));
}
/// @brief Convert operator to "::Zenject::IPrefabInstantiator"
constexpr Zenject::PrefabInstantiatorCached::operator ::Zenject::IPrefabInstantiator*() noexcept {
  return static_cast<::Zenject::IPrefabInstantiator*>(static_cast<void*>(this));
}
/// @brief Convert to "::Zenject::IPrefabInstantiator"
constexpr ::Zenject::IPrefabInstantiator* Zenject::PrefabInstantiatorCached::i___Zenject__IPrefabInstantiator() noexcept {
  return static_cast<::Zenject::IPrefabInstantiator*>(static_cast<void*>(this));
}
// Ctor Parameters []
constexpr ::Zenject::PrefabInstantiatorCached::PrefabInstantiatorCached() {}
