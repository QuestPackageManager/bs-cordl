#pragma once
// IWYU pragma private; include "Zenject/Internal/ZenPools.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "Zenject/Internal/zzzz__ZenPools_def.hpp"
#include "System/Collections/Generic/zzzz__Dictionary_2_def.hpp"
#include "System/Collections/Generic/zzzz__HashSet_1_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "System/zzzz__Type_def.hpp"
#include "Zenject/Internal/zzzz__LookupId_def.hpp"
#include "Zenject/zzzz__BindInfo_def.hpp"
#include "Zenject/zzzz__BindStatement_def.hpp"
#include "Zenject/zzzz__BindingId_def.hpp"
#include "Zenject/zzzz__DiContainer_def.hpp"
#include "Zenject/zzzz__IProvider_def.hpp"
#include "Zenject/zzzz__InjectContext_def.hpp"
#include "Zenject/zzzz__InjectableInfo_def.hpp"
#include "Zenject/zzzz__StaticMemoryPool_1_def.hpp"
//  Writing Method size for method: ::Zenject::Internal::ZenPools.NoDomainReloadInit
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)()>(&::Zenject::Internal::ZenPools::NoDomainReloadInit)> {
  constexpr static std::size_t size = 0x334;
  constexpr static std::size_t addrs = 0x6e9e538;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Zenject::Internal::ZenPools*>(), { "NoDomainReloadInit", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Zenject::Internal::ZenPools.SpawnStatement
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Zenject::BindStatement* (*)()>(&::Zenject::Internal::ZenPools::SpawnStatement)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x6e9e86c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Zenject::Internal::ZenPools*>(), { "SpawnStatement", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Zenject::Internal::ZenPools.DespawnStatement
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::Zenject::BindStatement*)>(&::Zenject::Internal::ZenPools::DespawnStatement)> {
  constexpr static std::size_t size = 0x98;
  constexpr static std::size_t addrs = 0x6e9e8ec;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Zenject::Internal::ZenPools*>(), { "DespawnStatement", {}, { ::i2c::type_of<::Zenject::BindStatement*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Zenject::Internal::ZenPools.SpawnBindInfo
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Zenject::BindInfo* (*)()>(&::Zenject::Internal::ZenPools::SpawnBindInfo)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x6e9e984;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Zenject::Internal::ZenPools*>(), { "SpawnBindInfo", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Zenject::Internal::ZenPools.DespawnBindInfo
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::Zenject::BindInfo*)>(&::Zenject::Internal::ZenPools::DespawnBindInfo)> {
  constexpr static std::size_t size = 0x98;
  constexpr static std::size_t addrs = 0x6e9ea04;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Zenject::Internal::ZenPools*>(), { "DespawnBindInfo", {}, { ::i2c::type_of<::Zenject::BindInfo*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Zenject::Internal::ZenPools.SpawnLookupId
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Zenject::Internal::LookupId* (*)(::Zenject::IProvider*, ::Zenject::BindingId)>(&::Zenject::Internal::ZenPools::SpawnLookupId)> {
  constexpr static std::size_t size = 0xa4;
  constexpr static std::size_t addrs = 0x6e9ea9c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(::i2c::class_of<::Zenject::Internal::ZenPools*>(), { "SpawnLookupId", {}, { ::i2c::type_of<::Zenject::IProvider*>(), ::i2c::type_of<::Zenject::BindingId>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Zenject::Internal::ZenPools.DespawnLookupId
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::Zenject::Internal::LookupId*)>(&::Zenject::Internal::ZenPools::DespawnLookupId)> {
  constexpr static std::size_t size = 0x88;
  constexpr static std::size_t addrs = 0x6e9eb40;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Zenject::Internal::ZenPools*>(), { "DespawnLookupId", {}, { ::i2c::type_of<::Zenject::Internal::LookupId*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Zenject::Internal::ZenPools.SpawnInjectContext
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Zenject::InjectContext* (*)(::Zenject::DiContainer*, ::System::Type*)>(&::Zenject::Internal::ZenPools::SpawnInjectContext)> {
  constexpr static std::size_t size = 0xa0;
  constexpr static std::size_t addrs = 0x6e9ebc8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(::i2c::class_of<::Zenject::Internal::ZenPools*>(), { "SpawnInjectContext", {}, { ::i2c::type_of<::Zenject::DiContainer*>(), ::i2c::type_of<::System::Type*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Zenject::Internal::ZenPools.DespawnInjectContext
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::Zenject::InjectContext*)>(&::Zenject::Internal::ZenPools::DespawnInjectContext)> {
  constexpr static std::size_t size = 0x98;
  constexpr static std::size_t addrs = 0x6e9ec68;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Zenject::Internal::ZenPools*>(), { "DespawnInjectContext", {}, { ::i2c::type_of<::Zenject::InjectContext*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Zenject::Internal::ZenPools.SpawnInjectContext
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Zenject::InjectContext* (*)(::Zenject::DiContainer*, ::Zenject::InjectableInfo*, ::Zenject::InjectContext*, ::System::Object*, ::System::Type*,
                                                                                     ::System::Object*)>(&::Zenject::Internal::ZenPools::SpawnInjectContext)> {
  constexpr static std::size_t size = 0xc4;
  constexpr static std::size_t addrs = 0x6e9ed00;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Zenject::Internal::ZenPools*>(),
                                                             { "SpawnInjectContext",
                                                               {},
                                                               { ::i2c::type_of<::Zenject::DiContainer*>(), ::i2c::type_of<::Zenject::InjectableInfo*>(), ::i2c::type_of<::Zenject::InjectContext*>(),
                                                                 ::i2c::type_of<::System::Object*>(), ::i2c::type_of<::System::Type*>(), ::i2c::type_of<::System::Object*>() } })));
    return ___internal_method;
  }
};
inline void Zenject::Internal::ZenPools::setStaticF__contextPool(::Zenject::StaticMemoryPool_1<::Zenject::InjectContext*>* value) {
  ::cordl_internals::setStaticField<::Zenject::StaticMemoryPool_1<::Zenject::InjectContext*>*, "_contextPool", ::Zenject::Internal::ZenPools*>(
      std::forward<::Zenject::StaticMemoryPool_1<::Zenject::InjectContext*>*>(value));
}
inline ::Zenject::StaticMemoryPool_1<::Zenject::InjectContext*>* Zenject::Internal::ZenPools::getStaticF__contextPool() {
  return ::cordl_internals::getStaticField<::Zenject::StaticMemoryPool_1<::Zenject::InjectContext*>*, "_contextPool", ::Zenject::Internal::ZenPools*>();
}
inline void Zenject::Internal::ZenPools::setStaticF__lookupIdPool(::Zenject::StaticMemoryPool_1<::Zenject::Internal::LookupId*>* value) {
  ::cordl_internals::setStaticField<::Zenject::StaticMemoryPool_1<::Zenject::Internal::LookupId*>*, "_lookupIdPool", ::Zenject::Internal::ZenPools*>(
      std::forward<::Zenject::StaticMemoryPool_1<::Zenject::Internal::LookupId*>*>(value));
}
inline ::Zenject::StaticMemoryPool_1<::Zenject::Internal::LookupId*>* Zenject::Internal::ZenPools::getStaticF__lookupIdPool() {
  return ::cordl_internals::getStaticField<::Zenject::StaticMemoryPool_1<::Zenject::Internal::LookupId*>*, "_lookupIdPool", ::Zenject::Internal::ZenPools*>();
}
inline void Zenject::Internal::ZenPools::setStaticF__bindInfoPool(::Zenject::StaticMemoryPool_1<::Zenject::BindInfo*>* value) {
  ::cordl_internals::setStaticField<::Zenject::StaticMemoryPool_1<::Zenject::BindInfo*>*, "_bindInfoPool", ::Zenject::Internal::ZenPools*>(
      std::forward<::Zenject::StaticMemoryPool_1<::Zenject::BindInfo*>*>(value));
}
inline ::Zenject::StaticMemoryPool_1<::Zenject::BindInfo*>* Zenject::Internal::ZenPools::getStaticF__bindInfoPool() {
  return ::cordl_internals::getStaticField<::Zenject::StaticMemoryPool_1<::Zenject::BindInfo*>*, "_bindInfoPool", ::Zenject::Internal::ZenPools*>();
}
inline void Zenject::Internal::ZenPools::setStaticF__bindStatementPool(::Zenject::StaticMemoryPool_1<::Zenject::BindStatement*>* value) {
  ::cordl_internals::setStaticField<::Zenject::StaticMemoryPool_1<::Zenject::BindStatement*>*, "_bindStatementPool", ::Zenject::Internal::ZenPools*>(
      std::forward<::Zenject::StaticMemoryPool_1<::Zenject::BindStatement*>*>(value));
}
inline ::Zenject::StaticMemoryPool_1<::Zenject::BindStatement*>* Zenject::Internal::ZenPools::getStaticF__bindStatementPool() {
  return ::cordl_internals::getStaticField<::Zenject::StaticMemoryPool_1<::Zenject::BindStatement*>*, "_bindStatementPool", ::Zenject::Internal::ZenPools*>();
}
inline void Zenject::Internal::ZenPools::NoDomainReloadInit() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Zenject::Internal::ZenPools*>(), { "NoDomainReloadInit", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method);
}
template <typename T> inline ::System::Collections::Generic::HashSet_1<T>* Zenject::Internal::ZenPools::SpawnHashSet() {
  static auto* ___internal_method_base = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Zenject::Internal::ZenPools*>(), { "SpawnHashSet", { ::i2c::class_of<T>() }, {} })));
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(___internal_method_base, { ::i2c::class_of<T>() })));
  return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::HashSet_1<T>*>(nullptr, ___internal_method);
}
template <typename TKey, typename TValue> inline ::System::Collections::Generic::Dictionary_2<TKey, TValue>* Zenject::Internal::ZenPools::SpawnDictionary() {
  static auto* ___internal_method_base =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Zenject::Internal::ZenPools*>(), { "SpawnDictionary", { ::i2c::class_of<TKey>(), ::i2c::class_of<TValue>() }, {} })));
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(___internal_method_base, { ::i2c::class_of<TKey>(), ::i2c::class_of<TValue>() })));
  return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::Dictionary_2<TKey, TValue>*>(nullptr, ___internal_method);
}
inline ::Zenject::BindStatement* Zenject::Internal::ZenPools::SpawnStatement() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Zenject::Internal::ZenPools*>(), { "SpawnStatement", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::Zenject::BindStatement*>(nullptr, ___internal_method);
}
inline void Zenject::Internal::ZenPools::DespawnStatement(::Zenject::BindStatement* statement) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Zenject::Internal::ZenPools*>(), { "DespawnStatement", {}, { ::i2c::type_of<::Zenject::BindStatement*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, statement);
}
inline ::Zenject::BindInfo* Zenject::Internal::ZenPools::SpawnBindInfo() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Zenject::Internal::ZenPools*>(), { "SpawnBindInfo", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::Zenject::BindInfo*>(nullptr, ___internal_method);
}
inline void Zenject::Internal::ZenPools::DespawnBindInfo(::Zenject::BindInfo* bindInfo) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Zenject::Internal::ZenPools*>(), { "DespawnBindInfo", {}, { ::i2c::type_of<::Zenject::BindInfo*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, bindInfo);
}
template <typename TKey, typename TValue> inline void Zenject::Internal::ZenPools::DespawnDictionary(::System::Collections::Generic::Dictionary_2<TKey, TValue>* dictionary) {
  static auto* ___internal_method_base = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::Zenject::Internal::ZenPools*>(),
                          { "DespawnDictionary", { ::i2c::class_of<TKey>(), ::i2c::class_of<TValue>() }, { ::i2c::type_of<::System::Collections::Generic::Dictionary_2<TKey, TValue>*>() } })));
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(___internal_method_base, { ::i2c::class_of<TKey>(), ::i2c::class_of<TValue>() })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, dictionary);
}
template <typename T> inline void Zenject::Internal::ZenPools::DespawnHashSet(::System::Collections::Generic::HashSet_1<T>* set) {
  static auto* ___internal_method_base = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::Zenject::Internal::ZenPools*>(), { "DespawnHashSet", { ::i2c::class_of<T>() }, { ::i2c::type_of<::System::Collections::Generic::HashSet_1<T>*>() } })));
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(___internal_method_base, { ::i2c::class_of<T>() })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, set);
}
inline ::Zenject::Internal::LookupId* Zenject::Internal::ZenPools::SpawnLookupId(::Zenject::IProvider* provider, ::Zenject::BindingId bindingId) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::Zenject::Internal::ZenPools*>(), { "SpawnLookupId", {}, { ::i2c::type_of<::Zenject::IProvider*>(), ::i2c::type_of<::Zenject::BindingId>() } })));
  return ::cordl_internals::RunMethodRethrow<::Zenject::Internal::LookupId*>(nullptr, ___internal_method, provider, bindingId);
}
inline void Zenject::Internal::ZenPools::DespawnLookupId(::Zenject::Internal::LookupId* lookupId) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Zenject::Internal::ZenPools*>(), { "DespawnLookupId", {}, { ::i2c::type_of<::Zenject::Internal::LookupId*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, lookupId);
}
template <typename T> inline ::System::Collections::Generic::List_1<T>* Zenject::Internal::ZenPools::SpawnList() {
  static auto* ___internal_method_base = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Zenject::Internal::ZenPools*>(), { "SpawnList", { ::i2c::class_of<T>() }, {} })));
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(___internal_method_base, { ::i2c::class_of<T>() })));
  return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::List_1<T>*>(nullptr, ___internal_method);
}
template <typename T> inline void Zenject::Internal::ZenPools::DespawnList(::System::Collections::Generic::List_1<T>* list) {
  static auto* ___internal_method_base = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::Zenject::Internal::ZenPools*>(), { "DespawnList", { ::i2c::class_of<T>() }, { ::i2c::type_of<::System::Collections::Generic::List_1<T>*>() } })));
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(___internal_method_base, { ::i2c::class_of<T>() })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, list);
}
template <typename T> inline void Zenject::Internal::ZenPools::DespawnArray(::ArrayW<T> arr) {
  static auto* ___internal_method_base =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Zenject::Internal::ZenPools*>(), { "DespawnArray", { ::i2c::class_of<T>() }, { ::i2c::type_of<::ArrayW<T>>() } })));
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(___internal_method_base, { ::i2c::class_of<T>() })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, arr);
}
template <typename T> inline ::ArrayW<T> Zenject::Internal::ZenPools::SpawnArray(int32_t length) {
  static auto* ___internal_method_base =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Zenject::Internal::ZenPools*>(), { "SpawnArray", { ::i2c::class_of<T>() }, { ::i2c::type_of<int32_t>() } })));
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(___internal_method_base, { ::i2c::class_of<T>() })));
  return ::cordl_internals::RunMethodRethrow<::ArrayW<T>>(nullptr, ___internal_method, length);
}
inline ::Zenject::InjectContext* Zenject::Internal::ZenPools::SpawnInjectContext(::Zenject::DiContainer* container, ::System::Type* memberType) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::Zenject::Internal::ZenPools*>(), { "SpawnInjectContext", {}, { ::i2c::type_of<::Zenject::DiContainer*>(), ::i2c::type_of<::System::Type*>() } })));
  return ::cordl_internals::RunMethodRethrow<::Zenject::InjectContext*>(nullptr, ___internal_method, container, memberType);
}
inline void Zenject::Internal::ZenPools::DespawnInjectContext(::Zenject::InjectContext* context) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Zenject::Internal::ZenPools*>(), { "DespawnInjectContext", {}, { ::i2c::type_of<::Zenject::InjectContext*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, context);
}
inline ::Zenject::InjectContext* Zenject::Internal::ZenPools::SpawnInjectContext(::Zenject::DiContainer* container, ::Zenject::InjectableInfo* injectableInfo, ::Zenject::InjectContext* currentContext,
                                                                                 ::System::Object* targetInstance, ::System::Type* targetType, ::System::Object* concreteIdentifier) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Zenject::Internal::ZenPools*>(),
                                                           { "SpawnInjectContext",
                                                             {},
                                                             { ::i2c::type_of<::Zenject::DiContainer*>(), ::i2c::type_of<::Zenject::InjectableInfo*>(), ::i2c::type_of<::Zenject::InjectContext*>(),
                                                               ::i2c::type_of<::System::Object*>(), ::i2c::type_of<::System::Type*>(), ::i2c::type_of<::System::Object*>() } })));
  return ::cordl_internals::RunMethodRethrow<::Zenject::InjectContext*>(nullptr, ___internal_method, container, injectableInfo, currentContext, targetInstance, targetType, concreteIdentifier);
}
// Ctor Parameters []
constexpr ::Zenject::Internal::ZenPools::ZenPools() {}
