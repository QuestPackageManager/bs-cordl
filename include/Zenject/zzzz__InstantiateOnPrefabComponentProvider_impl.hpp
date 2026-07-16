#pragma once
// IWYU pragma private; include "Zenject/InstantiateOnPrefabComponentProvider.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "Zenject/zzzz__InstantiateOnPrefabComponentProvider_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
#include "System/zzzz__Action_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "System/zzzz__Type_def.hpp"
#include "Zenject/zzzz__IPrefabInstantiator_def.hpp"
#include "Zenject/zzzz__IProvider_def.hpp"
#include "Zenject/zzzz__InjectContext_def.hpp"
#include "Zenject/zzzz__TypeValuePair_def.hpp"
//  Writing Method size for method: ::Zenject::InstantiateOnPrefabComponentProvider._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Zenject::InstantiateOnPrefabComponentProvider::*)(::System::Type*, ::Zenject::IPrefabInstantiator*)>(
    &::Zenject::InstantiateOnPrefabComponentProvider::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x6e83458;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Zenject::InstantiateOnPrefabComponentProvider*>(),
                                                                                           { ".ctor", {}, { ::i2c::type_of<::System::Type*>(), ::i2c::type_of<::Zenject::IPrefabInstantiator*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Zenject::InstantiateOnPrefabComponentProvider.get_IsCached
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Zenject::InstantiateOnPrefabComponentProvider::*)()>(&::Zenject::InstantiateOnPrefabComponentProvider::get_IsCached)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x6e83460;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Zenject::InstantiateOnPrefabComponentProvider*>(), { "get_IsCached", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Zenject::InstantiateOnPrefabComponentProvider.get_TypeVariesBasedOnMemberType
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Zenject::InstantiateOnPrefabComponentProvider::*)()>(
    &::Zenject::InstantiateOnPrefabComponentProvider::get_TypeVariesBasedOnMemberType)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x6e83468;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Zenject::InstantiateOnPrefabComponentProvider*>(), { "get_TypeVariesBasedOnMemberType", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Zenject::InstantiateOnPrefabComponentProvider.GetInstanceType
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Type* (::Zenject::InstantiateOnPrefabComponentProvider::*)(::Zenject::InjectContext*)>(
    &::Zenject::InstantiateOnPrefabComponentProvider::GetInstanceType)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x6e83470;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Zenject::InstantiateOnPrefabComponentProvider*>(), { "GetInstanceType", {}, { ::i2c::type_of<::Zenject::InjectContext*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Zenject::InstantiateOnPrefabComponentProvider.GetAllInstancesWithInjectSplit
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Zenject::InstantiateOnPrefabComponentProvider::*)(
    ::Zenject::InjectContext*, ::System::Collections::Generic::List_1<::Zenject::TypeValuePair>*, ::by_ref<::System::Action*>, ::System::Collections::Generic::List_1<::System::Object*>*)>(
    &::Zenject::InstantiateOnPrefabComponentProvider::GetAllInstancesWithInjectSplit)> {
  constexpr static std::size_t size = 0x16c;
  constexpr static std::size_t addrs = 0x6e83478;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Zenject::InstantiateOnPrefabComponentProvider*>(),
                                                             { "GetAllInstancesWithInjectSplit",
                                                               {},
                                                               { ::i2c::type_of<::Zenject::InjectContext*>(), ::i2c::type_of<::System::Collections::Generic::List_1<::Zenject::TypeValuePair>*>(),
                                                                 ::i2c::type_of<::by_ref<::System::Action*>>(), ::i2c::type_of<::System::Collections::Generic::List_1<::System::Object*>*>() } })));
    return ___internal_method;
  }
};
constexpr ::Zenject::IPrefabInstantiator*& Zenject::InstantiateOnPrefabComponentProvider::__cordl_internal_get__prefabInstantiator() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____prefabInstantiator;
}
constexpr ::Zenject::IPrefabInstantiator* const& Zenject::InstantiateOnPrefabComponentProvider::__cordl_internal_get__prefabInstantiator() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____prefabInstantiator;
}
constexpr void Zenject::InstantiateOnPrefabComponentProvider::__cordl_internal_set__prefabInstantiator(::Zenject::IPrefabInstantiator* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____prefabInstantiator = value;
}
constexpr ::System::Type*& Zenject::InstantiateOnPrefabComponentProvider::__cordl_internal_get__componentType() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____componentType;
}
constexpr ::System::Type* const& Zenject::InstantiateOnPrefabComponentProvider::__cordl_internal_get__componentType() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____componentType;
}
constexpr void Zenject::InstantiateOnPrefabComponentProvider::__cordl_internal_set__componentType(::System::Type* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____componentType = value;
}
inline void Zenject::InstantiateOnPrefabComponentProvider::_ctor(::System::Type* componentType, ::Zenject::IPrefabInstantiator* prefabInstantiator) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Zenject::InstantiateOnPrefabComponentProvider*>(),
                                                                                         { ".ctor", {}, { ::i2c::type_of<::System::Type*>(), ::i2c::type_of<::Zenject::IPrefabInstantiator*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, componentType, prefabInstantiator);
}
inline bool Zenject::InstantiateOnPrefabComponentProvider::get_IsCached() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Zenject::InstantiateOnPrefabComponentProvider*>(), { "get_IsCached", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline bool Zenject::InstantiateOnPrefabComponentProvider::get_TypeVariesBasedOnMemberType() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Zenject::InstantiateOnPrefabComponentProvider*>(), { "get_TypeVariesBasedOnMemberType", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline ::System::Type* Zenject::InstantiateOnPrefabComponentProvider::GetInstanceType(::Zenject::InjectContext* context) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Zenject::InstantiateOnPrefabComponentProvider*>(), { "GetInstanceType", {}, { ::i2c::type_of<::Zenject::InjectContext*>() } })));
  return ::cordl_internals::RunMethodRethrow<::System::Type*>(this, ___internal_method, context);
}
inline void Zenject::InstantiateOnPrefabComponentProvider::GetAllInstancesWithInjectSplit(::Zenject::InjectContext* context, ::System::Collections::Generic::List_1<::Zenject::TypeValuePair>* args,
                                                                                          ::by_ref<::System::Action*> injectAction, ::System::Collections::Generic::List_1<::System::Object*>* buffer) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Zenject::InstantiateOnPrefabComponentProvider*>(),
                                                           { "GetAllInstancesWithInjectSplit",
                                                             {},
                                                             { ::i2c::type_of<::Zenject::InjectContext*>(), ::i2c::type_of<::System::Collections::Generic::List_1<::Zenject::TypeValuePair>*>(),
                                                               ::i2c::type_of<::by_ref<::System::Action*>>(), ::i2c::type_of<::System::Collections::Generic::List_1<::System::Object*>*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, context, args, injectAction, buffer);
}
inline ::Zenject::InstantiateOnPrefabComponentProvider* Zenject::InstantiateOnPrefabComponentProvider::New_ctor(::System::Type* componentType, ::Zenject::IPrefabInstantiator* prefabInstantiator) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Zenject::InstantiateOnPrefabComponentProvider*>(componentType, prefabInstantiator));
}
/// @brief Convert operator to "::Zenject::IProvider"
constexpr Zenject::InstantiateOnPrefabComponentProvider::operator ::Zenject::IProvider*() noexcept {
  return static_cast<::Zenject::IProvider*>(static_cast<void*>(this));
}
/// @brief Convert to "::Zenject::IProvider"
constexpr ::Zenject::IProvider* Zenject::InstantiateOnPrefabComponentProvider::i___Zenject__IProvider() noexcept {
  return static_cast<::Zenject::IProvider*>(static_cast<void*>(this));
}
// Ctor Parameters []
constexpr ::Zenject::InstantiateOnPrefabComponentProvider::InstantiateOnPrefabComponentProvider() {}
