#pragma once
// IWYU pragma private; include "Zenject\PrefabGameObjectProvider.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "Zenject/zzzz__PrefabGameObjectProvider_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
#include "System/zzzz__Action_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "System/zzzz__Type_def.hpp"
#include "Zenject/zzzz__IPrefabInstantiator_def.hpp"
#include "Zenject/zzzz__IProvider_def.hpp"
#include "Zenject/zzzz__InjectContext_def.hpp"
#include "Zenject/zzzz__TypeValuePair_def.hpp"
//  Writing Method size for method: ::Zenject::PrefabGameObjectProvider._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Zenject::PrefabGameObjectProvider::*)(::Zenject::IPrefabInstantiator*)>(&::Zenject::PrefabGameObjectProvider::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x6e86cf0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Zenject::PrefabGameObjectProvider*>(), { ".ctor", {}, { ::i2c::type_of<::Zenject::IPrefabInstantiator*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Zenject::PrefabGameObjectProvider.get_IsCached
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Zenject::PrefabGameObjectProvider::*)()>(&::Zenject::PrefabGameObjectProvider::get_IsCached)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x6e86cf8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Zenject::PrefabGameObjectProvider*>(), { "get_IsCached", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Zenject::PrefabGameObjectProvider.get_TypeVariesBasedOnMemberType
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Zenject::PrefabGameObjectProvider::*)()>(&::Zenject::PrefabGameObjectProvider::get_TypeVariesBasedOnMemberType)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x6e86d00;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Zenject::PrefabGameObjectProvider*>(), { "get_TypeVariesBasedOnMemberType", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Zenject::PrefabGameObjectProvider.GetInstanceType
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Type* (::Zenject::PrefabGameObjectProvider::*)(::Zenject::InjectContext*)>(&::Zenject::PrefabGameObjectProvider::GetInstanceType)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x6e86d08;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Zenject::PrefabGameObjectProvider*>(), { "GetInstanceType", {}, { ::i2c::type_of<::Zenject::InjectContext*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Zenject::PrefabGameObjectProvider.GetAllInstancesWithInjectSplit
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Zenject::PrefabGameObjectProvider::*)(::Zenject::InjectContext*, ::System::Collections::Generic::List_1<::Zenject::TypeValuePair>*,
                                                                                                     ::by_ref<::System::Action*>, ::System::Collections::Generic::List_1<::System::Object*>*)>(
    &::Zenject::PrefabGameObjectProvider::GetAllInstancesWithInjectSplit)> {
  constexpr static std::size_t size = 0x154;
  constexpr static std::size_t addrs = 0x6e86d68;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Zenject::PrefabGameObjectProvider*>(),
                                                             { "GetAllInstancesWithInjectSplit",
                                                               {},
                                                               { ::i2c::type_of<::Zenject::InjectContext*>(), ::i2c::type_of<::System::Collections::Generic::List_1<::Zenject::TypeValuePair>*>(),
                                                                 ::i2c::type_of<::by_ref<::System::Action*>>(), ::i2c::type_of<::System::Collections::Generic::List_1<::System::Object*>*>() } })));
    return ___internal_method;
  }
};
constexpr ::Zenject::IPrefabInstantiator*& Zenject::PrefabGameObjectProvider::__cordl_internal_get__prefabCreator() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____prefabCreator;
}
constexpr ::Zenject::IPrefabInstantiator* const& Zenject::PrefabGameObjectProvider::__cordl_internal_get__prefabCreator() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____prefabCreator;
}
constexpr void Zenject::PrefabGameObjectProvider::__cordl_internal_set__prefabCreator(::Zenject::IPrefabInstantiator* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____prefabCreator = value;
}
inline void Zenject::PrefabGameObjectProvider::_ctor(::Zenject::IPrefabInstantiator* prefabCreator) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Zenject::PrefabGameObjectProvider*>(), { ".ctor", {}, { ::i2c::type_of<::Zenject::IPrefabInstantiator*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, prefabCreator);
}
inline bool Zenject::PrefabGameObjectProvider::get_IsCached() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Zenject::PrefabGameObjectProvider*>(), { "get_IsCached", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline bool Zenject::PrefabGameObjectProvider::get_TypeVariesBasedOnMemberType() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Zenject::PrefabGameObjectProvider*>(), { "get_TypeVariesBasedOnMemberType", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline ::System::Type* Zenject::PrefabGameObjectProvider::GetInstanceType(::Zenject::InjectContext* context) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Zenject::PrefabGameObjectProvider*>(), { "GetInstanceType", {}, { ::i2c::type_of<::Zenject::InjectContext*>() } })));
  return ::cordl_internals::RunMethodRethrow<::System::Type*>(this, ___internal_method, context);
}
inline void Zenject::PrefabGameObjectProvider::GetAllInstancesWithInjectSplit(::Zenject::InjectContext* context, ::System::Collections::Generic::List_1<::Zenject::TypeValuePair>* args,
                                                                              ::by_ref<::System::Action*> injectAction, ::System::Collections::Generic::List_1<::System::Object*>* buffer) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Zenject::PrefabGameObjectProvider*>(),
                                                           { "GetAllInstancesWithInjectSplit",
                                                             {},
                                                             { ::i2c::type_of<::Zenject::InjectContext*>(), ::i2c::type_of<::System::Collections::Generic::List_1<::Zenject::TypeValuePair>*>(),
                                                               ::i2c::type_of<::by_ref<::System::Action*>>(), ::i2c::type_of<::System::Collections::Generic::List_1<::System::Object*>*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, context, args, injectAction, buffer);
}
inline ::Zenject::PrefabGameObjectProvider* Zenject::PrefabGameObjectProvider::New_ctor(::Zenject::IPrefabInstantiator* prefabCreator) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Zenject::PrefabGameObjectProvider*>(prefabCreator));
}
/// @brief Convert operator to "::Zenject::IProvider"
constexpr Zenject::PrefabGameObjectProvider::operator ::Zenject::IProvider*() noexcept {
  return static_cast<::Zenject::IProvider*>(static_cast<void*>(this));
}
/// @brief Convert to "::Zenject::IProvider"
constexpr ::Zenject::IProvider* Zenject::PrefabGameObjectProvider::i___Zenject__IProvider() noexcept {
  return static_cast<::Zenject::IProvider*>(static_cast<void*>(this));
}
// Ctor Parameters []
constexpr ::Zenject::PrefabGameObjectProvider::PrefabGameObjectProvider() {}
