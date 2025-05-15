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
//  Writing Method size for method: ::Zenject::Internal::ZenPools.SpawnStatement
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Zenject::BindStatement* (*)()>(&::Zenject::Internal::ZenPools::SpawnStatement)> {
  constexpr static std::size_t size = 0x78;
  constexpr static std::size_t addrs = 0x4b59350;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Zenject::Internal::ZenPools*>::get(), "SpawnStatement",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Zenject::Internal::ZenPools.DespawnStatement
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::Zenject::BindStatement*)>(&::Zenject::Internal::ZenPools::DespawnStatement)> {
  constexpr static std::size_t size = 0x90;
  constexpr static std::size_t addrs = 0x4b593c8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Zenject::Internal::ZenPools*>::get(), "DespawnStatement", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Zenject::BindStatement*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Zenject::Internal::ZenPools.SpawnBindInfo
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Zenject::BindInfo* (*)()>(&::Zenject::Internal::ZenPools::SpawnBindInfo)> {
  constexpr static std::size_t size = 0x78;
  constexpr static std::size_t addrs = 0x4b59458;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Zenject::Internal::ZenPools*>::get(), "SpawnBindInfo",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Zenject::Internal::ZenPools.DespawnBindInfo
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::Zenject::BindInfo*)>(&::Zenject::Internal::ZenPools::DespawnBindInfo)> {
  constexpr static std::size_t size = 0x90;
  constexpr static std::size_t addrs = 0x4b594d0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Zenject::Internal::ZenPools*>::get(), "DespawnBindInfo", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Zenject::BindInfo*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Zenject::Internal::ZenPools.SpawnLookupId
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Zenject::Internal::LookupId* (*)(::Zenject::IProvider*, ::Zenject::BindingId)>(
    &::Zenject::Internal::ZenPools::SpawnLookupId)> {
  constexpr static std::size_t size = 0x9c;
  constexpr static std::size_t addrs = 0x4b59560;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Zenject::Internal::ZenPools*>::get(), "SpawnLookupId", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Zenject::IProvider*>::get(),
                                                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Zenject::BindingId>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Zenject::Internal::ZenPools.DespawnLookupId
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::Zenject::Internal::LookupId*)>(&::Zenject::Internal::ZenPools::DespawnLookupId)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x4b595fc;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Zenject::Internal::ZenPools*>::get(), "DespawnLookupId", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Zenject::Internal::LookupId*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Zenject::Internal::ZenPools.SpawnInjectContext
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Zenject::InjectContext* (*)(::Zenject::DiContainer*, ::System::Type*)>(
    &::Zenject::Internal::ZenPools::SpawnInjectContext)> {
  constexpr static std::size_t size = 0xa8;
  constexpr static std::size_t addrs = 0x4b5967c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Zenject::Internal::ZenPools*>::get(), "SpawnInjectContext", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Zenject::DiContainer*>::get(),
                                                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Type*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Zenject::Internal::ZenPools.DespawnInjectContext
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::Zenject::InjectContext*)>(&::Zenject::Internal::ZenPools::DespawnInjectContext)> {
  constexpr static std::size_t size = 0x90;
  constexpr static std::size_t addrs = 0x4b59724;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Zenject::Internal::ZenPools*>::get(), "DespawnInjectContext", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Zenject::InjectContext*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Zenject::Internal::ZenPools.SpawnInjectContext
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<::Zenject::InjectContext* (*)(::Zenject::DiContainer*, ::Zenject::InjectableInfo*, ::Zenject::InjectContext*, ::System::Object*, ::System::Type*, ::System::Object*)>(
        &::Zenject::Internal::ZenPools::SpawnInjectContext)> {
  constexpr static std::size_t size = 0xcc;
  constexpr static std::size_t addrs = 0x4b597b4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Zenject::Internal::ZenPools*>::get(), "SpawnInjectContext", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 6>{
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Zenject::DiContainer*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Zenject::InjectableInfo*>::get(),
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Zenject::InjectContext*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get(),
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Type*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get() })));
    return ___internal_method;
  }
};
inline void Zenject::Internal::ZenPools::setStaticF__contextPool(::Zenject::StaticMemoryPool_1<::Zenject::InjectContext*>* value) {
  ::cordl_internals::setStaticField<::Zenject::StaticMemoryPool_1<::Zenject::InjectContext*>*, "_contextPool",
                                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Zenject::Internal::ZenPools*>::get>(
      std::forward<::Zenject::StaticMemoryPool_1<::Zenject::InjectContext*>*>(value));
}
inline ::Zenject::StaticMemoryPool_1<::Zenject::InjectContext*>* Zenject::Internal::ZenPools::getStaticF__contextPool() {
  return ::cordl_internals::getStaticField<::Zenject::StaticMemoryPool_1<::Zenject::InjectContext*>*, "_contextPool",
                                           ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Zenject::Internal::ZenPools*>::get>();
}
inline void Zenject::Internal::ZenPools::setStaticF__lookupIdPool(::Zenject::StaticMemoryPool_1<::Zenject::Internal::LookupId*>* value) {
  ::cordl_internals::setStaticField<::Zenject::StaticMemoryPool_1<::Zenject::Internal::LookupId*>*, "_lookupIdPool",
                                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Zenject::Internal::ZenPools*>::get>(
      std::forward<::Zenject::StaticMemoryPool_1<::Zenject::Internal::LookupId*>*>(value));
}
inline ::Zenject::StaticMemoryPool_1<::Zenject::Internal::LookupId*>* Zenject::Internal::ZenPools::getStaticF__lookupIdPool() {
  return ::cordl_internals::getStaticField<::Zenject::StaticMemoryPool_1<::Zenject::Internal::LookupId*>*, "_lookupIdPool",
                                           ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Zenject::Internal::ZenPools*>::get>();
}
inline void Zenject::Internal::ZenPools::setStaticF__bindInfoPool(::Zenject::StaticMemoryPool_1<::Zenject::BindInfo*>* value) {
  ::cordl_internals::setStaticField<::Zenject::StaticMemoryPool_1<::Zenject::BindInfo*>*, "_bindInfoPool", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Zenject::Internal::ZenPools*>::get>(
      std::forward<::Zenject::StaticMemoryPool_1<::Zenject::BindInfo*>*>(value));
}
inline ::Zenject::StaticMemoryPool_1<::Zenject::BindInfo*>* Zenject::Internal::ZenPools::getStaticF__bindInfoPool() {
  return ::cordl_internals::getStaticField<::Zenject::StaticMemoryPool_1<::Zenject::BindInfo*>*, "_bindInfoPool",
                                           ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Zenject::Internal::ZenPools*>::get>();
}
inline void Zenject::Internal::ZenPools::setStaticF__bindStatementPool(::Zenject::StaticMemoryPool_1<::Zenject::BindStatement*>* value) {
  ::cordl_internals::setStaticField<::Zenject::StaticMemoryPool_1<::Zenject::BindStatement*>*, "_bindStatementPool",
                                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Zenject::Internal::ZenPools*>::get>(
      std::forward<::Zenject::StaticMemoryPool_1<::Zenject::BindStatement*>*>(value));
}
inline ::Zenject::StaticMemoryPool_1<::Zenject::BindStatement*>* Zenject::Internal::ZenPools::getStaticF__bindStatementPool() {
  return ::cordl_internals::getStaticField<::Zenject::StaticMemoryPool_1<::Zenject::BindStatement*>*, "_bindStatementPool",
                                           ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Zenject::Internal::ZenPools*>::get>();
}
template <typename T> inline ::System::Collections::Generic::HashSet_1<T>* Zenject::Internal::ZenPools::SpawnHashSet() {
  static auto* ___internal_method_base =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Zenject::Internal::ZenPools*>::get(), "SpawnHashSet",
                                               std::array<Il2CppClass const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T>::get() }, ::std::span<Il2CppType const* const, 0>())));
  static auto* ___internal_method =
      THROW_UNLESS(::il2cpp_utils::MakeGenericMethod(___internal_method_base, std::array<Il2CppClass const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T>::get() }));
  return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::HashSet_1<T>*, false>(nullptr, ___internal_method);
}
template <typename TKey, typename TValue> inline ::System::Collections::Generic::Dictionary_2<TKey, TValue>* Zenject::Internal::ZenPools::SpawnDictionary() {
  static auto* ___internal_method_base = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Zenject::Internal::ZenPools*>::get(), "SpawnDictionary",
      std::array<Il2CppClass const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TKey>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TValue>::get() },
      ::std::span<Il2CppType const* const, 0>())));
  static auto* ___internal_method =
      THROW_UNLESS(::il2cpp_utils::MakeGenericMethod(___internal_method_base, std::array<Il2CppClass const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TKey>::get(),
                                                                                                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TValue>::get() }));
  return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::Dictionary_2<TKey, TValue>*, false>(nullptr, ___internal_method);
}
inline ::Zenject::BindStatement* Zenject::Internal::ZenPools::SpawnStatement() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Zenject::Internal::ZenPools*>::get(), "SpawnStatement",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::Zenject::BindStatement*, false>(nullptr, ___internal_method);
}
inline void Zenject::Internal::ZenPools::DespawnStatement(::Zenject::BindStatement* statement) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Zenject::Internal::ZenPools*>::get(), "DespawnStatement", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Zenject::BindStatement*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, statement);
}
inline ::Zenject::BindInfo* Zenject::Internal::ZenPools::SpawnBindInfo() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Zenject::Internal::ZenPools*>::get(), "SpawnBindInfo",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::Zenject::BindInfo*, false>(nullptr, ___internal_method);
}
inline void Zenject::Internal::ZenPools::DespawnBindInfo(::Zenject::BindInfo* bindInfo) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Zenject::Internal::ZenPools*>::get(), "DespawnBindInfo", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Zenject::BindInfo*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, bindInfo);
}
template <typename TKey, typename TValue> inline void Zenject::Internal::ZenPools::DespawnDictionary(::System::Collections::Generic::Dictionary_2<TKey, TValue>* dictionary) {
  static auto* ___internal_method_base = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Zenject::Internal::ZenPools*>::get(), "DespawnDictionary",
      std::array<Il2CppClass const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TKey>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TValue>::get() },
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::Dictionary_2<TKey, TValue>*>::get() })));
  static auto* ___internal_method =
      THROW_UNLESS(::il2cpp_utils::MakeGenericMethod(___internal_method_base, std::array<Il2CppClass const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TKey>::get(),
                                                                                                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TValue>::get() }));
  return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, dictionary);
}
template <typename T> inline void Zenject::Internal::ZenPools::DespawnHashSet(::System::Collections::Generic::HashSet_1<T>* set) {
  static auto* ___internal_method_base =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Zenject::Internal::ZenPools*>::get(), "DespawnHashSet",
                                               std::array<Il2CppClass const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T>::get() },
                                               ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::HashSet_1<T>*>::get() })));
  static auto* ___internal_method =
      THROW_UNLESS(::il2cpp_utils::MakeGenericMethod(___internal_method_base, std::array<Il2CppClass const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T>::get() }));
  return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, set);
}
inline ::Zenject::Internal::LookupId* Zenject::Internal::ZenPools::SpawnLookupId(::Zenject::IProvider* provider, ::Zenject::BindingId bindingId) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Zenject::Internal::ZenPools*>::get(), "SpawnLookupId", std::span<Il2CppClass const* const, 0>(),
                                               ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Zenject::IProvider*>::get(),
                                                                                   ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Zenject::BindingId>::get() })));
  return ::cordl_internals::RunMethodRethrow<::Zenject::Internal::LookupId*, false>(nullptr, ___internal_method, provider, bindingId);
}
inline void Zenject::Internal::ZenPools::DespawnLookupId(::Zenject::Internal::LookupId* lookupId) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Zenject::Internal::ZenPools*>::get(), "DespawnLookupId", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Zenject::Internal::LookupId*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, lookupId);
}
template <typename T> inline ::System::Collections::Generic::List_1<T>* Zenject::Internal::ZenPools::SpawnList() {
  static auto* ___internal_method_base =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Zenject::Internal::ZenPools*>::get(), "SpawnList",
                                               std::array<Il2CppClass const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T>::get() }, ::std::span<Il2CppType const* const, 0>())));
  static auto* ___internal_method =
      THROW_UNLESS(::il2cpp_utils::MakeGenericMethod(___internal_method_base, std::array<Il2CppClass const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T>::get() }));
  return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::List_1<T>*, false>(nullptr, ___internal_method);
}
template <typename T> inline void Zenject::Internal::ZenPools::DespawnList(::System::Collections::Generic::List_1<T>* list) {
  static auto* ___internal_method_base =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Zenject::Internal::ZenPools*>::get(), "DespawnList",
                                               std::array<Il2CppClass const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T>::get() },
                                               ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::List_1<T>*>::get() })));
  static auto* ___internal_method =
      THROW_UNLESS(::il2cpp_utils::MakeGenericMethod(___internal_method_base, std::array<Il2CppClass const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T>::get() }));
  return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, list);
}
template <typename T> inline void Zenject::Internal::ZenPools::DespawnArray(::ArrayW<T, ::Array<T>*> arr) {
  static auto* ___internal_method_base =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Zenject::Internal::ZenPools*>::get(), "DespawnArray",
                                               std::array<Il2CppClass const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T>::get() },
                                               ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<T, ::Array<T>*>>::get() })));
  static auto* ___internal_method =
      THROW_UNLESS(::il2cpp_utils::MakeGenericMethod(___internal_method_base, std::array<Il2CppClass const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T>::get() }));
  return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, arr);
}
template <typename T> inline ::ArrayW<T, ::Array<T>*> Zenject::Internal::ZenPools::SpawnArray(int32_t length) {
  static auto* ___internal_method_base = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Zenject::Internal::ZenPools*>::get(), "SpawnArray",
                                                                                  std::array<Il2CppClass const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T>::get() },
                                                                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
  static auto* ___internal_method =
      THROW_UNLESS(::il2cpp_utils::MakeGenericMethod(___internal_method_base, std::array<Il2CppClass const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T>::get() }));
  return ::cordl_internals::RunMethodRethrow<::ArrayW<T, ::Array<T>*>, false>(nullptr, ___internal_method, length);
}
inline ::Zenject::InjectContext* Zenject::Internal::ZenPools::SpawnInjectContext(::Zenject::DiContainer* container, ::System::Type* memberType) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Zenject::Internal::ZenPools*>::get(), "SpawnInjectContext", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Zenject::DiContainer*>::get(),
                                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Type*>::get() })));
  return ::cordl_internals::RunMethodRethrow<::Zenject::InjectContext*, false>(nullptr, ___internal_method, container, memberType);
}
inline void Zenject::Internal::ZenPools::DespawnInjectContext(::Zenject::InjectContext* context) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Zenject::Internal::ZenPools*>::get(), "DespawnInjectContext", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Zenject::InjectContext*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, context);
}
inline ::Zenject::InjectContext* Zenject::Internal::ZenPools::SpawnInjectContext(::Zenject::DiContainer* container, ::Zenject::InjectableInfo* injectableInfo, ::Zenject::InjectContext* currentContext,
                                                                                 ::System::Object* targetInstance, ::System::Type* targetType, ::System::Object* concreteIdentifier) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Zenject::Internal::ZenPools*>::get(), "SpawnInjectContext", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 6>{
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Zenject::DiContainer*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Zenject::InjectableInfo*>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Zenject::InjectContext*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Type*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get() })));
  return ::cordl_internals::RunMethodRethrow<::Zenject::InjectContext*, false>(nullptr, ___internal_method, container, injectableInfo, currentContext, targetInstance, targetType, concreteIdentifier);
}
// Ctor Parameters []
constexpr ::Zenject::Internal::ZenPools::ZenPools() {}
