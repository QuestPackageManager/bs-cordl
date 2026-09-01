#pragma once
// IWYU pragma private; include "Zenject\PrefabInstantiator.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "Zenject/zzzz__PrefabInstantiator_def.hpp"
#include "System/Collections/Generic/zzzz__IEnumerable_1_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
#include "System/zzzz__Action_2_def.hpp"
#include "System/zzzz__Action_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "System/zzzz__Type_def.hpp"
#include "UnityEngine/zzzz__GameObject_def.hpp"
#include "UnityEngine/zzzz__Object_def.hpp"
#include "Zenject/zzzz__DiContainer_def.hpp"
#include "Zenject/zzzz__GameObjectCreationParameters_def.hpp"
#include "Zenject/zzzz__IPrefabInstantiator_def.hpp"
#include "Zenject/zzzz__IPrefabProvider_def.hpp"
#include "Zenject/zzzz__InjectContext_def.hpp"
#include "Zenject/zzzz__InjectTypeInfo_def.hpp"
#include "Zenject/zzzz__PrefabInstantiator_def.hpp"
#include "Zenject/zzzz__TypeValuePair_def.hpp"
//  Writing Method size for method: ::Zenject::PrefabInstantiator___c__DisplayClass15_0._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Zenject::PrefabInstantiator___c__DisplayClass15_0::*)()>(&::Zenject::PrefabInstantiator___c__DisplayClass15_0::_ctor)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x6e88584;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Zenject::PrefabInstantiator___c__DisplayClass15_0*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Zenject::PrefabInstantiator___c__DisplayClass15_0._Instantiate_b__0
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Zenject::PrefabInstantiator___c__DisplayClass15_0::*)()>(&::Zenject::PrefabInstantiator___c__DisplayClass15_0::_Instantiate_b__0)> {
  constexpr static std::size_t size = 0x538;
  constexpr static std::size_t addrs = 0x6e88588;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Zenject::PrefabInstantiator___c__DisplayClass15_0*>(), { "<Instantiate>b__0", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Zenject::PrefabInstantiator___c__DisplayClass15_0.__zenCreate
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Object* (*)(::ArrayW<::System::Object*>)>(&::Zenject::PrefabInstantiator___c__DisplayClass15_0::__zenCreate)> {
  constexpr static std::size_t size = 0x44;
  constexpr static std::size_t addrs = 0x6e88ac0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Zenject::PrefabInstantiator___c__DisplayClass15_0*>(), { "__zenCreate", {}, { ::i2c::type_of<::ArrayW<::System::Object*>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Zenject::PrefabInstantiator___c__DisplayClass15_0.__zenCreateInjectTypeInfo
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Zenject::InjectTypeInfo* (*)()>(&::Zenject::PrefabInstantiator___c__DisplayClass15_0::__zenCreateInjectTypeInfo)> {
  constexpr static std::size_t size = 0x194;
  constexpr static std::size_t addrs = 0x6e88b04;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Zenject::PrefabInstantiator___c__DisplayClass15_0*>(), { "__zenCreateInjectTypeInfo", {}, {} })));
    return ___internal_method;
  }
};
constexpr ::Zenject::PrefabInstantiator*& Zenject::PrefabInstantiator___c__DisplayClass15_0::__cordl_internal_get___4__this() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->_____4__this;
}
constexpr ::Zenject::PrefabInstantiator* const& Zenject::PrefabInstantiator___c__DisplayClass15_0::__cordl_internal_get___4__this() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->_____4__this;
}
constexpr void Zenject::PrefabInstantiator___c__DisplayClass15_0::__cordl_internal_set___4__this(::Zenject::PrefabInstantiator* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->_____4__this = value;
}
constexpr ::System::Collections::Generic::List_1<::Zenject::TypeValuePair>*& Zenject::PrefabInstantiator___c__DisplayClass15_0::__cordl_internal_get_args() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___args;
}
constexpr ::System::Collections::Generic::List_1<::Zenject::TypeValuePair>* const& Zenject::PrefabInstantiator___c__DisplayClass15_0::__cordl_internal_get_args() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___args;
}
constexpr void Zenject::PrefabInstantiator___c__DisplayClass15_0::__cordl_internal_set_args(::System::Collections::Generic::List_1<::Zenject::TypeValuePair>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___args = value;
}
constexpr ::UnityW<::UnityEngine::GameObject>& Zenject::PrefabInstantiator___c__DisplayClass15_0::__cordl_internal_get_gameObject() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___gameObject;
}
constexpr ::UnityW<::UnityEngine::GameObject> const& Zenject::PrefabInstantiator___c__DisplayClass15_0::__cordl_internal_get_gameObject() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___gameObject;
}
constexpr void Zenject::PrefabInstantiator___c__DisplayClass15_0::__cordl_internal_set_gameObject(::UnityW<::UnityEngine::GameObject> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___gameObject = value;
}
constexpr ::Zenject::InjectContext*& Zenject::PrefabInstantiator___c__DisplayClass15_0::__cordl_internal_get_context() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___context;
}
constexpr ::Zenject::InjectContext* const& Zenject::PrefabInstantiator___c__DisplayClass15_0::__cordl_internal_get_context() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___context;
}
constexpr void Zenject::PrefabInstantiator___c__DisplayClass15_0::__cordl_internal_set_context(::Zenject::InjectContext* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___context = value;
}
constexpr bool& Zenject::PrefabInstantiator___c__DisplayClass15_0::__cordl_internal_get_shouldMakeActive() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___shouldMakeActive;
}
constexpr bool const& Zenject::PrefabInstantiator___c__DisplayClass15_0::__cordl_internal_get_shouldMakeActive() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___shouldMakeActive;
}
constexpr void Zenject::PrefabInstantiator___c__DisplayClass15_0::__cordl_internal_set_shouldMakeActive(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___shouldMakeActive = value;
}
inline void Zenject::PrefabInstantiator___c__DisplayClass15_0::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Zenject::PrefabInstantiator___c__DisplayClass15_0*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Zenject::PrefabInstantiator___c__DisplayClass15_0::_Instantiate_b__0() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Zenject::PrefabInstantiator___c__DisplayClass15_0*>(), { "<Instantiate>b__0", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::System::Object* Zenject::PrefabInstantiator___c__DisplayClass15_0::__zenCreate(::ArrayW<::System::Object*> P_0) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Zenject::PrefabInstantiator___c__DisplayClass15_0*>(), { "__zenCreate", {}, { ::i2c::type_of<::ArrayW<::System::Object*>>() } })));
  return ::cordl_internals::RunMethodRethrow<::System::Object*>(nullptr, ___internal_method, P_0);
}
inline ::Zenject::InjectTypeInfo* Zenject::PrefabInstantiator___c__DisplayClass15_0::__zenCreateInjectTypeInfo() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Zenject::PrefabInstantiator___c__DisplayClass15_0*>(), { "__zenCreateInjectTypeInfo", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::Zenject::InjectTypeInfo*>(nullptr, ___internal_method);
}
inline ::Zenject::PrefabInstantiator___c__DisplayClass15_0* Zenject::PrefabInstantiator___c__DisplayClass15_0::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Zenject::PrefabInstantiator___c__DisplayClass15_0*>());
}
// Ctor Parameters []
constexpr ::Zenject::PrefabInstantiator___c__DisplayClass15_0::PrefabInstantiator___c__DisplayClass15_0() {}
//  Writing Method size for method: ::Zenject::PrefabInstantiator._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Zenject::PrefabInstantiator::*)(
    ::Zenject::DiContainer*, ::Zenject::GameObjectCreationParameters*, ::System::Type*, ::System::Collections::Generic::IEnumerable_1<::System::Type*>*,
    ::System::Collections::Generic::IEnumerable_1<::Zenject::TypeValuePair>*, ::Zenject::IPrefabProvider*, ::System::Action_2<::Zenject::InjectContext*, ::System::Object*>*)>(
    &::Zenject::PrefabInstantiator::_ctor)> {
  constexpr static std::size_t size = 0xc0;
  constexpr static std::size_t addrs = 0x6e8824c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Zenject::PrefabInstantiator*>(),
                                                { ".ctor",
                                                  {},
                                                  { ::i2c::type_of<::Zenject::DiContainer*>(), ::i2c::type_of<::Zenject::GameObjectCreationParameters*>(), ::i2c::type_of<::System::Type*>(),
                                                    ::i2c::type_of<::System::Collections::Generic::IEnumerable_1<::System::Type*>*>(),
                                                    ::i2c::type_of<::System::Collections::Generic::IEnumerable_1<::Zenject::TypeValuePair>*>(), ::i2c::type_of<::Zenject::IPrefabProvider*>(),
                                                    ::i2c::type_of<::System::Action_2<::Zenject::InjectContext*, ::System::Object*>*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Zenject::PrefabInstantiator.get_GameObjectCreationParameters
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Zenject::GameObjectCreationParameters* (::Zenject::PrefabInstantiator::*)()>(
    &::Zenject::PrefabInstantiator::get_GameObjectCreationParameters)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x6e8830c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Zenject::PrefabInstantiator*>(), { "get_GameObjectCreationParameters", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Zenject::PrefabInstantiator.get_ArgumentTarget
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Type* (::Zenject::PrefabInstantiator::*)()>(&::Zenject::PrefabInstantiator::get_ArgumentTarget)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x6e88314;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Zenject::PrefabInstantiator*>(), { "get_ArgumentTarget", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Zenject::PrefabInstantiator.get_ExtraArguments
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Collections::Generic::List_1<::Zenject::TypeValuePair>* (::Zenject::PrefabInstantiator::*)()>(
    &::Zenject::PrefabInstantiator::get_ExtraArguments)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x6e8831c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Zenject::PrefabInstantiator*>(), { "get_ExtraArguments", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Zenject::PrefabInstantiator.GetPrefab
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityW<::UnityEngine::Object> (::Zenject::PrefabInstantiator::*)()>(&::Zenject::PrefabInstantiator::GetPrefab)> {
  constexpr static std::size_t size = 0xa4;
  constexpr static std::size_t addrs = 0x6e88324;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Zenject::PrefabInstantiator*>(), { "GetPrefab", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Zenject::PrefabInstantiator.Instantiate
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityW<::UnityEngine::GameObject> (::Zenject::PrefabInstantiator::*)(
    ::Zenject::InjectContext*, ::System::Collections::Generic::List_1<::Zenject::TypeValuePair>*, ::by_ref<::System::Action*>)>(&::Zenject::PrefabInstantiator::Instantiate)> {
  constexpr static std::size_t size = 0x1bc;
  constexpr static std::size_t addrs = 0x6e883c8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Zenject::PrefabInstantiator*>(),
                                                             { "Instantiate",
                                                               {},
                                                               { ::i2c::type_of<::Zenject::InjectContext*>(), ::i2c::type_of<::System::Collections::Generic::List_1<::Zenject::TypeValuePair>*>(),
                                                                 ::i2c::type_of<::by_ref<::System::Action*>>() } })));
    return ___internal_method;
  }
};
constexpr ::Zenject::IPrefabProvider*& Zenject::PrefabInstantiator::__cordl_internal_get__prefabProvider() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____prefabProvider;
}
constexpr ::Zenject::IPrefabProvider* const& Zenject::PrefabInstantiator::__cordl_internal_get__prefabProvider() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____prefabProvider;
}
constexpr void Zenject::PrefabInstantiator::__cordl_internal_set__prefabProvider(::Zenject::IPrefabProvider* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____prefabProvider = value;
}
constexpr ::Zenject::DiContainer*& Zenject::PrefabInstantiator::__cordl_internal_get__container() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____container;
}
constexpr ::Zenject::DiContainer* const& Zenject::PrefabInstantiator::__cordl_internal_get__container() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____container;
}
constexpr void Zenject::PrefabInstantiator::__cordl_internal_set__container(::Zenject::DiContainer* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____container = value;
}
constexpr ::System::Collections::Generic::List_1<::Zenject::TypeValuePair>*& Zenject::PrefabInstantiator::__cordl_internal_get__extraArguments() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____extraArguments;
}
constexpr ::System::Collections::Generic::List_1<::Zenject::TypeValuePair>* const& Zenject::PrefabInstantiator::__cordl_internal_get__extraArguments() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____extraArguments;
}
constexpr void Zenject::PrefabInstantiator::__cordl_internal_set__extraArguments(::System::Collections::Generic::List_1<::Zenject::TypeValuePair>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____extraArguments = value;
}
constexpr ::Zenject::GameObjectCreationParameters*& Zenject::PrefabInstantiator::__cordl_internal_get__gameObjectBindInfo() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____gameObjectBindInfo;
}
constexpr ::Zenject::GameObjectCreationParameters* const& Zenject::PrefabInstantiator::__cordl_internal_get__gameObjectBindInfo() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____gameObjectBindInfo;
}
constexpr void Zenject::PrefabInstantiator::__cordl_internal_set__gameObjectBindInfo(::Zenject::GameObjectCreationParameters* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____gameObjectBindInfo = value;
}
constexpr ::System::Type*& Zenject::PrefabInstantiator::__cordl_internal_get__argumentTarget() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____argumentTarget;
}
constexpr ::System::Type* const& Zenject::PrefabInstantiator::__cordl_internal_get__argumentTarget() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____argumentTarget;
}
constexpr void Zenject::PrefabInstantiator::__cordl_internal_set__argumentTarget(::System::Type* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____argumentTarget = value;
}
constexpr ::System::Collections::Generic::List_1<::System::Type*>*& Zenject::PrefabInstantiator::__cordl_internal_get__instantiateCallbackTypes() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____instantiateCallbackTypes;
}
constexpr ::System::Collections::Generic::List_1<::System::Type*>* const& Zenject::PrefabInstantiator::__cordl_internal_get__instantiateCallbackTypes() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____instantiateCallbackTypes;
}
constexpr void Zenject::PrefabInstantiator::__cordl_internal_set__instantiateCallbackTypes(::System::Collections::Generic::List_1<::System::Type*>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____instantiateCallbackTypes = value;
}
constexpr ::System::Action_2<::Zenject::InjectContext*, ::System::Object*>*& Zenject::PrefabInstantiator::__cordl_internal_get__instantiateCallback() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____instantiateCallback;
}
constexpr ::System::Action_2<::Zenject::InjectContext*, ::System::Object*>* const& Zenject::PrefabInstantiator::__cordl_internal_get__instantiateCallback() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____instantiateCallback;
}
constexpr void Zenject::PrefabInstantiator::__cordl_internal_set__instantiateCallback(::System::Action_2<::Zenject::InjectContext*, ::System::Object*>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____instantiateCallback = value;
}
inline void Zenject::PrefabInstantiator::_ctor(::Zenject::DiContainer* container, ::Zenject::GameObjectCreationParameters* gameObjectBindInfo, ::System::Type* argumentTarget,
                                               ::System::Collections::Generic::IEnumerable_1<::System::Type*>* instantiateCallbackTypes,
                                               ::System::Collections::Generic::IEnumerable_1<::Zenject::TypeValuePair>* extraArguments, ::Zenject::IPrefabProvider* prefabProvider,
                                               ::System::Action_2<::Zenject::InjectContext*, ::System::Object*>* instantiateCallback) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Zenject::PrefabInstantiator*>(),
                                              { ".ctor",
                                                {},
                                                { ::i2c::type_of<::Zenject::DiContainer*>(), ::i2c::type_of<::Zenject::GameObjectCreationParameters*>(), ::i2c::type_of<::System::Type*>(),
                                                  ::i2c::type_of<::System::Collections::Generic::IEnumerable_1<::System::Type*>*>(),
                                                  ::i2c::type_of<::System::Collections::Generic::IEnumerable_1<::Zenject::TypeValuePair>*>(), ::i2c::type_of<::Zenject::IPrefabProvider*>(),
                                                  ::i2c::type_of<::System::Action_2<::Zenject::InjectContext*, ::System::Object*>*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, container, gameObjectBindInfo, argumentTarget, instantiateCallbackTypes, extraArguments, prefabProvider,
                                                   instantiateCallback);
}
inline ::Zenject::GameObjectCreationParameters* Zenject::PrefabInstantiator::get_GameObjectCreationParameters() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Zenject::PrefabInstantiator*>(), { "get_GameObjectCreationParameters", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::Zenject::GameObjectCreationParameters*>(this, ___internal_method);
}
inline ::System::Type* Zenject::PrefabInstantiator::get_ArgumentTarget() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Zenject::PrefabInstantiator*>(), { "get_ArgumentTarget", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::System::Type*>(this, ___internal_method);
}
inline ::System::Collections::Generic::List_1<::Zenject::TypeValuePair>* Zenject::PrefabInstantiator::get_ExtraArguments() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Zenject::PrefabInstantiator*>(), { "get_ExtraArguments", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::List_1<::Zenject::TypeValuePair>*>(this, ___internal_method);
}
inline ::UnityW<::UnityEngine::Object> Zenject::PrefabInstantiator::GetPrefab() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Zenject::PrefabInstantiator*>(), { "GetPrefab", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::UnityW<::UnityEngine::Object>>(this, ___internal_method);
}
inline ::UnityW<::UnityEngine::GameObject> Zenject::PrefabInstantiator::Instantiate(::Zenject::InjectContext* context, ::System::Collections::Generic::List_1<::Zenject::TypeValuePair>* args,
                                                                                    ::by_ref<::System::Action*> injectAction) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Zenject::PrefabInstantiator*>(),
                                                           { "Instantiate",
                                                             {},
                                                             { ::i2c::type_of<::Zenject::InjectContext*>(), ::i2c::type_of<::System::Collections::Generic::List_1<::Zenject::TypeValuePair>*>(),
                                                               ::i2c::type_of<::by_ref<::System::Action*>>() } })));
  return ::cordl_internals::RunMethodRethrow<::UnityW<::UnityEngine::GameObject>>(this, ___internal_method, context, args, injectAction);
}
inline ::Zenject::PrefabInstantiator* Zenject::PrefabInstantiator::New_ctor(::Zenject::DiContainer* container, ::Zenject::GameObjectCreationParameters* gameObjectBindInfo,
                                                                            ::System::Type* argumentTarget, ::System::Collections::Generic::IEnumerable_1<::System::Type*>* instantiateCallbackTypes,
                                                                            ::System::Collections::Generic::IEnumerable_1<::Zenject::TypeValuePair>* extraArguments,
                                                                            ::Zenject::IPrefabProvider* prefabProvider,
                                                                            ::System::Action_2<::Zenject::InjectContext*, ::System::Object*>* instantiateCallback) {
  return THROW_UNLESS(::i2c::no_logger{},
                      ::i2c::new_ctor<::Zenject::PrefabInstantiator*>(container, gameObjectBindInfo, argumentTarget, instantiateCallbackTypes, extraArguments, prefabProvider, instantiateCallback));
}
/// @brief Convert operator to "::Zenject::IPrefabInstantiator"
constexpr Zenject::PrefabInstantiator::operator ::Zenject::IPrefabInstantiator*() noexcept {
  return static_cast<::Zenject::IPrefabInstantiator*>(static_cast<void*>(this));
}
/// @brief Convert to "::Zenject::IPrefabInstantiator"
constexpr ::Zenject::IPrefabInstantiator* Zenject::PrefabInstantiator::i___Zenject__IPrefabInstantiator() noexcept {
  return static_cast<::Zenject::IPrefabInstantiator*>(static_cast<void*>(this));
}
// Ctor Parameters []
constexpr ::Zenject::PrefabInstantiator::PrefabInstantiator() {}
