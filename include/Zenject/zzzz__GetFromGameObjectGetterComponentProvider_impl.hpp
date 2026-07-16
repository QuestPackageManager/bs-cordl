#pragma once
// IWYU pragma private; include "Zenject/GetFromGameObjectGetterComponentProvider.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "Zenject/zzzz__GetFromGameObjectGetterComponentProvider_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
#include "System/zzzz__Action_def.hpp"
#include "System/zzzz__Func_2_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "System/zzzz__Type_def.hpp"
#include "UnityEngine/zzzz__GameObject_def.hpp"
#include "Zenject/zzzz__IProvider_def.hpp"
#include "Zenject/zzzz__InjectContext_def.hpp"
#include "Zenject/zzzz__TypeValuePair_def.hpp"
//  Writing Method size for method: ::Zenject::GetFromGameObjectGetterComponentProvider._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Zenject::GetFromGameObjectGetterComponentProvider::*)(
    ::System::Type*, ::System::Func_2<::Zenject::InjectContext*, ::UnityW<::UnityEngine::GameObject>>*, bool)>(&::Zenject::GetFromGameObjectGetterComponentProvider::_ctor)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x6e82e74;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(
            ::i2c::class_of<::Zenject::GetFromGameObjectGetterComponentProvider*>(),
            { ".ctor", {}, { ::i2c::type_of<::System::Type*>(), ::i2c::type_of<::System::Func_2<::Zenject::InjectContext*, ::UnityW<::UnityEngine::GameObject>>*>(), ::i2c::type_of<bool>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Zenject::GetFromGameObjectGetterComponentProvider.get_IsCached
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Zenject::GetFromGameObjectGetterComponentProvider::*)()>(&::Zenject::GetFromGameObjectGetterComponentProvider::get_IsCached)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x6e82e80;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Zenject::GetFromGameObjectGetterComponentProvider*>(), { "get_IsCached", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Zenject::GetFromGameObjectGetterComponentProvider.get_TypeVariesBasedOnMemberType
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Zenject::GetFromGameObjectGetterComponentProvider::*)()>(
    &::Zenject::GetFromGameObjectGetterComponentProvider::get_TypeVariesBasedOnMemberType)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x6e82e88;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Zenject::GetFromGameObjectGetterComponentProvider*>(), { "get_TypeVariesBasedOnMemberType", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Zenject::GetFromGameObjectGetterComponentProvider.GetInstanceType
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Type* (::Zenject::GetFromGameObjectGetterComponentProvider::*)(::Zenject::InjectContext*)>(
    &::Zenject::GetFromGameObjectGetterComponentProvider::GetInstanceType)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x6e82e90;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Zenject::GetFromGameObjectGetterComponentProvider*>(), { "GetInstanceType", {}, { ::i2c::type_of<::Zenject::InjectContext*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Zenject::GetFromGameObjectGetterComponentProvider.GetAllInstancesWithInjectSplit
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Zenject::GetFromGameObjectGetterComponentProvider::*)(
    ::Zenject::InjectContext*, ::System::Collections::Generic::List_1<::Zenject::TypeValuePair>*, ::by_ref<::System::Action*>, ::System::Collections::Generic::List_1<::System::Object*>*)>(
    &::Zenject::GetFromGameObjectGetterComponentProvider::GetAllInstancesWithInjectSplit)> {
  constexpr static std::size_t size = 0x280;
  constexpr static std::size_t addrs = 0x6e82e98;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Zenject::GetFromGameObjectGetterComponentProvider*>(),
                                                             { "GetAllInstancesWithInjectSplit",
                                                               {},
                                                               { ::i2c::type_of<::Zenject::InjectContext*>(), ::i2c::type_of<::System::Collections::Generic::List_1<::Zenject::TypeValuePair>*>(),
                                                                 ::i2c::type_of<::by_ref<::System::Action*>>(), ::i2c::type_of<::System::Collections::Generic::List_1<::System::Object*>*>() } })));
    return ___internal_method;
  }
};
constexpr ::System::Func_2<::Zenject::InjectContext*, ::UnityW<::UnityEngine::GameObject>>*& Zenject::GetFromGameObjectGetterComponentProvider::__cordl_internal_get__gameObjectGetter() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____gameObjectGetter;
}
constexpr ::System::Func_2<::Zenject::InjectContext*, ::UnityW<::UnityEngine::GameObject>>* const& Zenject::GetFromGameObjectGetterComponentProvider::__cordl_internal_get__gameObjectGetter() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____gameObjectGetter;
}
constexpr void Zenject::GetFromGameObjectGetterComponentProvider::__cordl_internal_set__gameObjectGetter(::System::Func_2<::Zenject::InjectContext*, ::UnityW<::UnityEngine::GameObject>>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____gameObjectGetter = value;
}
constexpr ::System::Type*& Zenject::GetFromGameObjectGetterComponentProvider::__cordl_internal_get__componentType() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____componentType;
}
constexpr ::System::Type* const& Zenject::GetFromGameObjectGetterComponentProvider::__cordl_internal_get__componentType() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____componentType;
}
constexpr void Zenject::GetFromGameObjectGetterComponentProvider::__cordl_internal_set__componentType(::System::Type* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____componentType = value;
}
constexpr bool& Zenject::GetFromGameObjectGetterComponentProvider::__cordl_internal_get__matchSingle() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____matchSingle;
}
constexpr bool const& Zenject::GetFromGameObjectGetterComponentProvider::__cordl_internal_get__matchSingle() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____matchSingle;
}
constexpr void Zenject::GetFromGameObjectGetterComponentProvider::__cordl_internal_set__matchSingle(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____matchSingle = value;
}
inline void Zenject::GetFromGameObjectGetterComponentProvider::_ctor(::System::Type* componentType, ::System::Func_2<::Zenject::InjectContext*, ::UnityW<::UnityEngine::GameObject>>* gameObjectGetter,
                                                                     bool matchSingle) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(
          ::i2c::class_of<::Zenject::GetFromGameObjectGetterComponentProvider*>(),
          { ".ctor", {}, { ::i2c::type_of<::System::Type*>(), ::i2c::type_of<::System::Func_2<::Zenject::InjectContext*, ::UnityW<::UnityEngine::GameObject>>*>(), ::i2c::type_of<bool>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, componentType, gameObjectGetter, matchSingle);
}
inline bool Zenject::GetFromGameObjectGetterComponentProvider::get_IsCached() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Zenject::GetFromGameObjectGetterComponentProvider*>(), { "get_IsCached", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline bool Zenject::GetFromGameObjectGetterComponentProvider::get_TypeVariesBasedOnMemberType() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Zenject::GetFromGameObjectGetterComponentProvider*>(), { "get_TypeVariesBasedOnMemberType", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline ::System::Type* Zenject::GetFromGameObjectGetterComponentProvider::GetInstanceType(::Zenject::InjectContext* context) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Zenject::GetFromGameObjectGetterComponentProvider*>(), { "GetInstanceType", {}, { ::i2c::type_of<::Zenject::InjectContext*>() } })));
  return ::cordl_internals::RunMethodRethrow<::System::Type*>(this, ___internal_method, context);
}
inline void Zenject::GetFromGameObjectGetterComponentProvider::GetAllInstancesWithInjectSplit(::Zenject::InjectContext* context, ::System::Collections::Generic::List_1<::Zenject::TypeValuePair>* args,
                                                                                              ::by_ref<::System::Action*> injectAction,
                                                                                              ::System::Collections::Generic::List_1<::System::Object*>* buffer) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Zenject::GetFromGameObjectGetterComponentProvider*>(),
                                                           { "GetAllInstancesWithInjectSplit",
                                                             {},
                                                             { ::i2c::type_of<::Zenject::InjectContext*>(), ::i2c::type_of<::System::Collections::Generic::List_1<::Zenject::TypeValuePair>*>(),
                                                               ::i2c::type_of<::by_ref<::System::Action*>>(), ::i2c::type_of<::System::Collections::Generic::List_1<::System::Object*>*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, context, args, injectAction, buffer);
}
inline ::Zenject::GetFromGameObjectGetterComponentProvider*
Zenject::GetFromGameObjectGetterComponentProvider::New_ctor(::System::Type* componentType, ::System::Func_2<::Zenject::InjectContext*, ::UnityW<::UnityEngine::GameObject>>* gameObjectGetter,
                                                            bool matchSingle) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Zenject::GetFromGameObjectGetterComponentProvider*>(componentType, gameObjectGetter, matchSingle));
}
/// @brief Convert operator to "::Zenject::IProvider"
constexpr Zenject::GetFromGameObjectGetterComponentProvider::operator ::Zenject::IProvider*() noexcept {
  return static_cast<::Zenject::IProvider*>(static_cast<void*>(this));
}
/// @brief Convert to "::Zenject::IProvider"
constexpr ::Zenject::IProvider* Zenject::GetFromGameObjectGetterComponentProvider::i___Zenject__IProvider() noexcept {
  return static_cast<::Zenject::IProvider*>(static_cast<void*>(this));
}
// Ctor Parameters []
constexpr ::Zenject::GetFromGameObjectGetterComponentProvider::GetFromGameObjectGetterComponentProvider() {}
