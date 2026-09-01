#pragma once
// IWYU pragma private; include "Zenject\GetFromPrefabComponentProvider.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "Zenject/zzzz__GetFromPrefabComponentProvider_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
#include "System/zzzz__Action_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "System/zzzz__Type_def.hpp"
#include "Zenject/zzzz__IPrefabInstantiator_def.hpp"
#include "Zenject/zzzz__IProvider_def.hpp"
#include "Zenject/zzzz__InjectContext_def.hpp"
#include "Zenject/zzzz__TypeValuePair_def.hpp"
//  Writing Method size for method: ::Zenject::GetFromPrefabComponentProvider._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Zenject::GetFromPrefabComponentProvider::*)(::System::Type*, ::Zenject::IPrefabInstantiator*, bool)>(
    &::Zenject::GetFromPrefabComponentProvider::_ctor)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x6e866a0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Zenject::GetFromPrefabComponentProvider*>(),
                                                             { ".ctor", {}, { ::i2c::type_of<::System::Type*>(), ::i2c::type_of<::Zenject::IPrefabInstantiator*>(), ::i2c::type_of<bool>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Zenject::GetFromPrefabComponentProvider.get_IsCached
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Zenject::GetFromPrefabComponentProvider::*)()>(&::Zenject::GetFromPrefabComponentProvider::get_IsCached)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x6e866ac;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Zenject::GetFromPrefabComponentProvider*>(), { "get_IsCached", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Zenject::GetFromPrefabComponentProvider.get_TypeVariesBasedOnMemberType
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Zenject::GetFromPrefabComponentProvider::*)()>(&::Zenject::GetFromPrefabComponentProvider::get_TypeVariesBasedOnMemberType)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x6e866b4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Zenject::GetFromPrefabComponentProvider*>(), { "get_TypeVariesBasedOnMemberType", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Zenject::GetFromPrefabComponentProvider.GetInstanceType
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Type* (::Zenject::GetFromPrefabComponentProvider::*)(::Zenject::InjectContext*)>(
    &::Zenject::GetFromPrefabComponentProvider::GetInstanceType)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x6e866bc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Zenject::GetFromPrefabComponentProvider*>(), { "GetInstanceType", {}, { ::i2c::type_of<::Zenject::InjectContext*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Zenject::GetFromPrefabComponentProvider.GetAllInstancesWithInjectSplit
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Zenject::GetFromPrefabComponentProvider::*)(::Zenject::InjectContext*, ::System::Collections::Generic::List_1<::Zenject::TypeValuePair>*,
                                                                                                           ::by_ref<::System::Action*>, ::System::Collections::Generic::List_1<::System::Object*>*)>(
    &::Zenject::GetFromPrefabComponentProvider::GetAllInstancesWithInjectSplit)> {
  constexpr static std::size_t size = 0x31c;
  constexpr static std::size_t addrs = 0x6e866c4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Zenject::GetFromPrefabComponentProvider*>(),
                                                             { "GetAllInstancesWithInjectSplit",
                                                               {},
                                                               { ::i2c::type_of<::Zenject::InjectContext*>(), ::i2c::type_of<::System::Collections::Generic::List_1<::Zenject::TypeValuePair>*>(),
                                                                 ::i2c::type_of<::by_ref<::System::Action*>>(), ::i2c::type_of<::System::Collections::Generic::List_1<::System::Object*>*>() } })));
    return ___internal_method;
  }
};
constexpr ::Zenject::IPrefabInstantiator*& Zenject::GetFromPrefabComponentProvider::__cordl_internal_get__prefabInstantiator() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____prefabInstantiator;
}
constexpr ::Zenject::IPrefabInstantiator* const& Zenject::GetFromPrefabComponentProvider::__cordl_internal_get__prefabInstantiator() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____prefabInstantiator;
}
constexpr void Zenject::GetFromPrefabComponentProvider::__cordl_internal_set__prefabInstantiator(::Zenject::IPrefabInstantiator* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____prefabInstantiator = value;
}
constexpr ::System::Type*& Zenject::GetFromPrefabComponentProvider::__cordl_internal_get__componentType() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____componentType;
}
constexpr ::System::Type* const& Zenject::GetFromPrefabComponentProvider::__cordl_internal_get__componentType() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____componentType;
}
constexpr void Zenject::GetFromPrefabComponentProvider::__cordl_internal_set__componentType(::System::Type* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____componentType = value;
}
constexpr bool& Zenject::GetFromPrefabComponentProvider::__cordl_internal_get__matchSingle() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____matchSingle;
}
constexpr bool const& Zenject::GetFromPrefabComponentProvider::__cordl_internal_get__matchSingle() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____matchSingle;
}
constexpr void Zenject::GetFromPrefabComponentProvider::__cordl_internal_set__matchSingle(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____matchSingle = value;
}
inline void Zenject::GetFromPrefabComponentProvider::_ctor(::System::Type* componentType, ::Zenject::IPrefabInstantiator* prefabInstantiator, bool matchSingle) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Zenject::GetFromPrefabComponentProvider*>(),
                                                           { ".ctor", {}, { ::i2c::type_of<::System::Type*>(), ::i2c::type_of<::Zenject::IPrefabInstantiator*>(), ::i2c::type_of<bool>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, componentType, prefabInstantiator, matchSingle);
}
inline bool Zenject::GetFromPrefabComponentProvider::get_IsCached() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Zenject::GetFromPrefabComponentProvider*>(), { "get_IsCached", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline bool Zenject::GetFromPrefabComponentProvider::get_TypeVariesBasedOnMemberType() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Zenject::GetFromPrefabComponentProvider*>(), { "get_TypeVariesBasedOnMemberType", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline ::System::Type* Zenject::GetFromPrefabComponentProvider::GetInstanceType(::Zenject::InjectContext* context) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Zenject::GetFromPrefabComponentProvider*>(), { "GetInstanceType", {}, { ::i2c::type_of<::Zenject::InjectContext*>() } })));
  return ::cordl_internals::RunMethodRethrow<::System::Type*>(this, ___internal_method, context);
}
inline void Zenject::GetFromPrefabComponentProvider::GetAllInstancesWithInjectSplit(::Zenject::InjectContext* context, ::System::Collections::Generic::List_1<::Zenject::TypeValuePair>* args,
                                                                                    ::by_ref<::System::Action*> injectAction, ::System::Collections::Generic::List_1<::System::Object*>* buffer) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Zenject::GetFromPrefabComponentProvider*>(),
                                                           { "GetAllInstancesWithInjectSplit",
                                                             {},
                                                             { ::i2c::type_of<::Zenject::InjectContext*>(), ::i2c::type_of<::System::Collections::Generic::List_1<::Zenject::TypeValuePair>*>(),
                                                               ::i2c::type_of<::by_ref<::System::Action*>>(), ::i2c::type_of<::System::Collections::Generic::List_1<::System::Object*>*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, context, args, injectAction, buffer);
}
inline ::Zenject::GetFromPrefabComponentProvider* Zenject::GetFromPrefabComponentProvider::New_ctor(::System::Type* componentType, ::Zenject::IPrefabInstantiator* prefabInstantiator,
                                                                                                    bool matchSingle) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Zenject::GetFromPrefabComponentProvider*>(componentType, prefabInstantiator, matchSingle));
}
/// @brief Convert operator to "::Zenject::IProvider"
constexpr Zenject::GetFromPrefabComponentProvider::operator ::Zenject::IProvider*() noexcept {
  return static_cast<::Zenject::IProvider*>(static_cast<void*>(this));
}
/// @brief Convert to "::Zenject::IProvider"
constexpr ::Zenject::IProvider* Zenject::GetFromPrefabComponentProvider::i___Zenject__IProvider() noexcept {
  return static_cast<::Zenject::IProvider*>(static_cast<void*>(this));
}
// Ctor Parameters []
constexpr ::Zenject::GetFromPrefabComponentProvider::GetFromPrefabComponentProvider() {}
