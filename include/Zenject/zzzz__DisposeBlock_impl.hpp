#pragma once
// IWYU pragma private; include "Zenject/DisposeBlock.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "Zenject/zzzz__DisposeBlock_def.hpp"
#include "System/Collections/Generic/zzzz__IEnumerable_1_def.hpp"
#include "System/Collections/Generic/zzzz__IList_1_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
#include "System/zzzz__IDisposable_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "Zenject/zzzz__DisposeBlock_def.hpp"
#include "Zenject/zzzz__IDespawnableMemoryPool_1_def.hpp"
#include "Zenject/zzzz__IMemoryPool_1_def.hpp"
#include "Zenject/zzzz__IMemoryPool_2_def.hpp"
#include "Zenject/zzzz__IMemoryPool_3_def.hpp"
#include "Zenject/zzzz__IMemoryPool_4_def.hpp"
#include "Zenject/zzzz__IMemoryPool_5_def.hpp"
#include "Zenject/zzzz__IMemoryPool_6_def.hpp"
#include "Zenject/zzzz__IMemoryPool_7_def.hpp"
#include "Zenject/zzzz__IMemoryPool_8_def.hpp"
#include "Zenject/zzzz__IMemoryPool_def.hpp"
#include "Zenject/zzzz__StaticMemoryPool_1_def.hpp"
// Ctor Parameters [CppParam { name: "Pool", ty: "::Zenject::IMemoryPool*", modifiers: "", def_value: Some("{}") }, CppParam { name: "Object", ty: "::System::Object*", modifiers: "", def_value:
// Some("{}") }]
constexpr ::Zenject::DisposeBlock_SpawnedObjectPoolPair::DisposeBlock_SpawnedObjectPoolPair(::Zenject::IMemoryPool* Pool, ::System::Object* Object) noexcept {
  this->Pool = Pool;
  this->Object = Object;
}
// Ctor Parameters []
constexpr ::Zenject::DisposeBlock_SpawnedObjectPoolPair::DisposeBlock_SpawnedObjectPoolPair() {}
//  Writing Method size for method: ::Zenject::DisposeBlock.NoDomainReloadInit
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)()>(&::Zenject::DisposeBlock::NoDomainReloadInit)> {
  constexpr static std::size_t size = 0x140;
  constexpr static std::size_t addrs = 0x6e98898;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Zenject::DisposeBlock*>(), { "NoDomainReloadInit", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Zenject::DisposeBlock.OnSpawned
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::Zenject::DisposeBlock*)>(&::Zenject::DisposeBlock::OnSpawned)> {
  constexpr static std::size_t size = 0x2c;
  constexpr static std::size_t addrs = 0x6e989d8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Zenject::DisposeBlock*>(), { "OnSpawned", {}, { ::i2c::type_of<::Zenject::DisposeBlock*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Zenject::DisposeBlock.OnDespawned
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::Zenject::DisposeBlock*)>(&::Zenject::DisposeBlock::OnDespawned)> {
  constexpr static std::size_t size = 0x3b8;
  constexpr static std::size_t addrs = 0x6e98a04;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Zenject::DisposeBlock*>(), { "OnDespawned", {}, { ::i2c::type_of<::Zenject::DisposeBlock*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Zenject::DisposeBlock.LazyInitializeDisposableList
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Zenject::DisposeBlock::*)()>(&::Zenject::DisposeBlock::LazyInitializeDisposableList)> {
  constexpr static std::size_t size = 0x110;
  constexpr static std::size_t addrs = 0x6e98dbc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Zenject::DisposeBlock*>(), { "LazyInitializeDisposableList", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Zenject::DisposeBlock.Add
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Zenject::DisposeBlock::*)(::System::IDisposable*)>(&::Zenject::DisposeBlock::Add)> {
  constexpr static std::size_t size = 0xf8;
  constexpr static std::size_t addrs = 0x6e98ecc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Zenject::DisposeBlock*>(), { "Add", {}, { ::i2c::type_of<::System::IDisposable*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Zenject::DisposeBlock.Remove
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Zenject::DisposeBlock::*)(::System::IDisposable*)>(&::Zenject::DisposeBlock::Remove)> {
  constexpr static std::size_t size = 0x68;
  constexpr static std::size_t addrs = 0x6e98fc4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Zenject::DisposeBlock*>(), { "Remove", {}, { ::i2c::type_of<::System::IDisposable*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Zenject::DisposeBlock.Spawn
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Zenject::DisposeBlock* (*)()>(&::Zenject::DisposeBlock::Spawn)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x6e9902c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Zenject::DisposeBlock*>(), { "Spawn", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Zenject::DisposeBlock.Dispose
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Zenject::DisposeBlock::*)()>(&::Zenject::DisposeBlock::Dispose)> {
  constexpr static std::size_t size = 0x88;
  constexpr static std::size_t addrs = 0x6e990ac;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Zenject::DisposeBlock*>(), { "Dispose", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Zenject::DisposeBlock._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Zenject::DisposeBlock::*)()>(&::Zenject::DisposeBlock::_ctor)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x6e99134;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Zenject::DisposeBlock*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
constexpr ::System::Collections::Generic::List_1<::System::IDisposable*>*& Zenject::DisposeBlock::__cordl_internal_get__disposables() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____disposables;
}
constexpr ::System::Collections::Generic::List_1<::System::IDisposable*>* const& Zenject::DisposeBlock::__cordl_internal_get__disposables() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____disposables;
}
constexpr void Zenject::DisposeBlock::__cordl_internal_set__disposables(::System::Collections::Generic::List_1<::System::IDisposable*>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____disposables = value;
}
constexpr ::System::Collections::Generic::List_1<::Zenject::DisposeBlock_SpawnedObjectPoolPair>*& Zenject::DisposeBlock::__cordl_internal_get__objectPoolPairs() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____objectPoolPairs;
}
constexpr ::System::Collections::Generic::List_1<::Zenject::DisposeBlock_SpawnedObjectPoolPair>* const& Zenject::DisposeBlock::__cordl_internal_get__objectPoolPairs() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____objectPoolPairs;
}
constexpr void Zenject::DisposeBlock::__cordl_internal_set__objectPoolPairs(::System::Collections::Generic::List_1<::Zenject::DisposeBlock_SpawnedObjectPoolPair>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____objectPoolPairs = value;
}
inline void Zenject::DisposeBlock::setStaticF__pool(::Zenject::StaticMemoryPool_1<::Zenject::DisposeBlock*>* value) {
  ::cordl_internals::setStaticField<::Zenject::StaticMemoryPool_1<::Zenject::DisposeBlock*>*, "_pool", ::Zenject::DisposeBlock*>(
      std::forward<::Zenject::StaticMemoryPool_1<::Zenject::DisposeBlock*>*>(value));
}
inline ::Zenject::StaticMemoryPool_1<::Zenject::DisposeBlock*>* Zenject::DisposeBlock::getStaticF__pool() {
  return ::cordl_internals::getStaticField<::Zenject::StaticMemoryPool_1<::Zenject::DisposeBlock*>*, "_pool", ::Zenject::DisposeBlock*>();
}
inline void Zenject::DisposeBlock::NoDomainReloadInit() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Zenject::DisposeBlock*>(), { "NoDomainReloadInit", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method);
}
inline void Zenject::DisposeBlock::OnSpawned(::Zenject::DisposeBlock* that) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Zenject::DisposeBlock*>(), { "OnSpawned", {}, { ::i2c::type_of<::Zenject::DisposeBlock*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, that);
}
inline void Zenject::DisposeBlock::OnDespawned(::Zenject::DisposeBlock* that) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Zenject::DisposeBlock*>(), { "OnDespawned", {}, { ::i2c::type_of<::Zenject::DisposeBlock*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, that);
}
inline void Zenject::DisposeBlock::LazyInitializeDisposableList() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Zenject::DisposeBlock*>(), { "LazyInitializeDisposableList", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
template <typename T> inline void Zenject::DisposeBlock::AddRange(::System::Collections::Generic::IList_1<T>* disposables) {
  static auto* ___internal_method_base =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::Zenject::DisposeBlock*>(), { "AddRange", { ::i2c::class_of<T>() }, { ::i2c::type_of<::System::Collections::Generic::IList_1<T>*>() } })));
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(___internal_method_base, { ::i2c::class_of<T>() })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, disposables);
}
inline void Zenject::DisposeBlock::Add(::System::IDisposable* disposable) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Zenject::DisposeBlock*>(), { "Add", {}, { ::i2c::type_of<::System::IDisposable*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, disposable);
}
inline void Zenject::DisposeBlock::Remove(::System::IDisposable* disposable) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Zenject::DisposeBlock*>(), { "Remove", {}, { ::i2c::type_of<::System::IDisposable*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, disposable);
}
template <typename T> inline void Zenject::DisposeBlock::StoreSpawnedObject(T obj, ::Zenject::IDespawnableMemoryPool_1<T>* pool) {
  static auto* ___internal_method_base =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Zenject::DisposeBlock*>(),
                                                           { "StoreSpawnedObject", { ::i2c::class_of<T>() }, { ::i2c::type_of<T>(), ::i2c::type_of<::Zenject::IDespawnableMemoryPool_1<T>*>() } })));
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(___internal_method_base, { ::i2c::class_of<T>() })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, obj, pool);
}
template <typename T> inline T Zenject::DisposeBlock::Spawn(::Zenject::IMemoryPool_1<T>* pool) {
  static auto* ___internal_method_base =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Zenject::DisposeBlock*>(), { "Spawn", { ::i2c::class_of<T>() }, { ::i2c::type_of<::Zenject::IMemoryPool_1<T>*>() } })));
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(___internal_method_base, { ::i2c::class_of<T>() })));
  return ::cordl_internals::RunMethodRethrow<T>(this, ___internal_method, pool);
}
template <typename TValue, typename TParam1> inline TValue Zenject::DisposeBlock::Spawn(::Zenject::IMemoryPool_2<TParam1, TValue>* pool, TParam1 p1) {
  static auto* ___internal_method_base = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::Zenject::DisposeBlock*>(),
                          { "Spawn", { ::i2c::class_of<TValue>(), ::i2c::class_of<TParam1>() }, { ::i2c::type_of<::Zenject::IMemoryPool_2<TParam1, TValue>*>(), ::i2c::type_of<TParam1>() } })));
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(___internal_method_base, { ::i2c::class_of<TValue>(), ::i2c::class_of<TParam1>() })));
  return ::cordl_internals::RunMethodRethrow<TValue>(this, ___internal_method, pool, p1);
}
template <typename TValue, typename TParam1, typename TParam2> inline TValue Zenject::DisposeBlock::Spawn(::Zenject::IMemoryPool_3<TParam1, TParam2, TValue>* pool, TParam1 p1, TParam2 p2) {
  static auto* ___internal_method_base =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Zenject::DisposeBlock*>(),
                                                           { "Spawn",
                                                             { ::i2c::class_of<TValue>(), ::i2c::class_of<TParam1>(), ::i2c::class_of<TParam2>() },
                                                             { ::i2c::type_of<::Zenject::IMemoryPool_3<TParam1, TParam2, TValue>*>(), ::i2c::type_of<TParam1>(), ::i2c::type_of<TParam2>() } })));
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(___internal_method_base, { ::i2c::class_of<TValue>(), ::i2c::class_of<TParam1>(), ::i2c::class_of<TParam2>() })));
  return ::cordl_internals::RunMethodRethrow<TValue>(this, ___internal_method, pool, p1, p2);
}
template <typename TValue, typename TParam1, typename TParam2, typename TParam3>
inline TValue Zenject::DisposeBlock::Spawn(::Zenject::IMemoryPool_4<TParam1, TParam2, TParam3, TValue>* pool, TParam1 p1, TParam2 p2, TParam3 p3) {
  static auto* ___internal_method_base = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::Zenject::DisposeBlock*>(),
                          { "Spawn",
                            { ::i2c::class_of<TValue>(), ::i2c::class_of<TParam1>(), ::i2c::class_of<TParam2>(), ::i2c::class_of<TParam3>() },
                            { ::i2c::type_of<::Zenject::IMemoryPool_4<TParam1, TParam2, TParam3, TValue>*>(), ::i2c::type_of<TParam1>(), ::i2c::type_of<TParam2>(), ::i2c::type_of<TParam3>() } })));
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::make_generic(___internal_method_base, { ::i2c::class_of<TValue>(), ::i2c::class_of<TParam1>(), ::i2c::class_of<TParam2>(), ::i2c::class_of<TParam3>() })));
  return ::cordl_internals::RunMethodRethrow<TValue>(this, ___internal_method, pool, p1, p2, p3);
}
template <typename TValue, typename TParam1, typename TParam2, typename TParam3, typename TParam4>
inline TValue Zenject::DisposeBlock::Spawn(::Zenject::IMemoryPool_5<TParam1, TParam2, TParam3, TParam4, TValue>* pool, TParam1 p1, TParam2 p2, TParam3 p3, TParam4 p4) {
  static auto* ___internal_method_base = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Zenject::DisposeBlock*>(),
                                              { "Spawn",
                                                { ::i2c::class_of<TValue>(), ::i2c::class_of<TParam1>(), ::i2c::class_of<TParam2>(), ::i2c::class_of<TParam3>(), ::i2c::class_of<TParam4>() },
                                                { ::i2c::type_of<::Zenject::IMemoryPool_5<TParam1, TParam2, TParam3, TParam4, TValue>*>(), ::i2c::type_of<TParam1>(), ::i2c::type_of<TParam2>(),
                                                  ::i2c::type_of<TParam3>(), ::i2c::type_of<TParam4>() } })));
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(___internal_method_base, { ::i2c::class_of<TValue>(), ::i2c::class_of<TParam1>(), ::i2c::class_of<TParam2>(),
                                                                                                                     ::i2c::class_of<TParam3>(), ::i2c::class_of<TParam4>() })));
  return ::cordl_internals::RunMethodRethrow<TValue>(this, ___internal_method, pool, p1, p2, p3, p4);
}
template <typename TValue, typename TParam1, typename TParam2, typename TParam3, typename TParam4, typename TParam5>
inline TValue Zenject::DisposeBlock::Spawn(::Zenject::IMemoryPool_6<TParam1, TParam2, TParam3, TParam4, TParam5, TValue>* pool, TParam1 p1, TParam2 p2, TParam3 p3, TParam4 p4, TParam5 p5) {
  static auto* ___internal_method_base = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::Zenject::DisposeBlock*>(),
                          { "Spawn",
                            { ::i2c::class_of<TValue>(), ::i2c::class_of<TParam1>(), ::i2c::class_of<TParam2>(), ::i2c::class_of<TParam3>(), ::i2c::class_of<TParam4>(), ::i2c::class_of<TParam5>() },
                            { ::i2c::type_of<::Zenject::IMemoryPool_6<TParam1, TParam2, TParam3, TParam4, TParam5, TValue>*>(), ::i2c::type_of<TParam1>(), ::i2c::type_of<TParam2>(),
                              ::i2c::type_of<TParam3>(), ::i2c::type_of<TParam4>(), ::i2c::type_of<TParam5>() } })));
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(___internal_method_base, { ::i2c::class_of<TValue>(), ::i2c::class_of<TParam1>(), ::i2c::class_of<TParam2>(), ::i2c::class_of<TParam3>(),
                                                                                       ::i2c::class_of<TParam4>(), ::i2c::class_of<TParam5>() })));
  return ::cordl_internals::RunMethodRethrow<TValue>(this, ___internal_method, pool, p1, p2, p3, p4, p5);
}
template <typename TValue, typename TParam1, typename TParam2, typename TParam3, typename TParam4, typename TParam5, typename TParam6>
inline TValue Zenject::DisposeBlock::Spawn(::Zenject::IMemoryPool_7<TParam1, TParam2, TParam3, TParam4, TParam5, TParam6, TValue>* pool, TParam1 p1, TParam2 p2, TParam3 p3, TParam4 p4, TParam5 p5,
                                           TParam6 p6) {
  static auto* ___internal_method_base = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Zenject::DisposeBlock*>(),
                                              { "Spawn",
                                                { ::i2c::class_of<TValue>(), ::i2c::class_of<TParam1>(), ::i2c::class_of<TParam2>(), ::i2c::class_of<TParam3>(), ::i2c::class_of<TParam4>(),
                                                  ::i2c::class_of<TParam5>(), ::i2c::class_of<TParam6>() },
                                                { ::i2c::type_of<::Zenject::IMemoryPool_7<TParam1, TParam2, TParam3, TParam4, TParam5, TParam6, TValue>*>(), ::i2c::type_of<TParam1>(),
                                                  ::i2c::type_of<TParam2>(), ::i2c::type_of<TParam3>(), ::i2c::type_of<TParam4>(), ::i2c::type_of<TParam5>(), ::i2c::type_of<TParam6>() } })));
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(___internal_method_base, { ::i2c::class_of<TValue>(), ::i2c::class_of<TParam1>(), ::i2c::class_of<TParam2>(), ::i2c::class_of<TParam3>(),
                                                                                       ::i2c::class_of<TParam4>(), ::i2c::class_of<TParam5>(), ::i2c::class_of<TParam6>() })));
  return ::cordl_internals::RunMethodRethrow<TValue>(this, ___internal_method, pool, p1, p2, p3, p4, p5, p6);
}
template <typename TValue, typename TParam1, typename TParam2, typename TParam3, typename TParam4, typename TParam5, typename TParam6, typename TParam7>
inline TValue Zenject::DisposeBlock::Spawn(::Zenject::IMemoryPool_8<TParam1, TParam2, TParam3, TParam4, TParam5, TParam6, TParam7, TValue>* pool, TParam1 p1, TParam2 p2, TParam3 p3, TParam4 p4,
                                           TParam5 p5, TParam6 p6, TParam7 p7) {
  static auto* ___internal_method_base = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::Zenject::DisposeBlock*>(),
                          { "Spawn",
                            { ::i2c::class_of<TValue>(), ::i2c::class_of<TParam1>(), ::i2c::class_of<TParam2>(), ::i2c::class_of<TParam3>(), ::i2c::class_of<TParam4>(), ::i2c::class_of<TParam5>(),
                              ::i2c::class_of<TParam6>(), ::i2c::class_of<TParam7>() },
                            { ::i2c::type_of<::Zenject::IMemoryPool_8<TParam1, TParam2, TParam3, TParam4, TParam5, TParam6, TParam7, TValue>*>(), ::i2c::type_of<TParam1>(), ::i2c::type_of<TParam2>(),
                              ::i2c::type_of<TParam3>(), ::i2c::type_of<TParam4>(), ::i2c::type_of<TParam5>(), ::i2c::type_of<TParam6>(), ::i2c::type_of<TParam7>() } })));
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::make_generic(___internal_method_base, { ::i2c::class_of<TValue>(), ::i2c::class_of<TParam1>(), ::i2c::class_of<TParam2>(), ::i2c::class_of<TParam3>(),
                                                                          ::i2c::class_of<TParam4>(), ::i2c::class_of<TParam5>(), ::i2c::class_of<TParam6>(), ::i2c::class_of<TParam7>() })));
  return ::cordl_internals::RunMethodRethrow<TValue>(this, ___internal_method, pool, p1, p2, p3, p4, p5, p6, p7);
}
template <typename T> inline ::System::Collections::Generic::List_1<T>* Zenject::DisposeBlock::SpawnList(::System::Collections::Generic::IEnumerable_1<T>* elements) {
  static auto* ___internal_method_base = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::Zenject::DisposeBlock*>(), { "SpawnList", { ::i2c::class_of<T>() }, { ::i2c::type_of<::System::Collections::Generic::IEnumerable_1<T>*>() } })));
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(___internal_method_base, { ::i2c::class_of<T>() })));
  return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::List_1<T>*>(this, ___internal_method, elements);
}
template <typename T> inline ::System::Collections::Generic::List_1<T>* Zenject::DisposeBlock::SpawnList() {
  static auto* ___internal_method_base = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Zenject::DisposeBlock*>(), { "SpawnList", { ::i2c::class_of<T>() }, {} })));
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(___internal_method_base, { ::i2c::class_of<T>() })));
  return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::List_1<T>*>(this, ___internal_method);
}
inline ::Zenject::DisposeBlock* Zenject::DisposeBlock::Spawn() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Zenject::DisposeBlock*>(), { "Spawn", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::Zenject::DisposeBlock*>(nullptr, ___internal_method);
}
inline void Zenject::DisposeBlock::Dispose() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Zenject::DisposeBlock*>(), { "Dispose", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Zenject::DisposeBlock::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Zenject::DisposeBlock*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::Zenject::DisposeBlock* Zenject::DisposeBlock::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Zenject::DisposeBlock*>());
}
/// @brief Convert operator to "::System::IDisposable"
constexpr Zenject::DisposeBlock::operator ::System::IDisposable*() noexcept {
  return static_cast<::System::IDisposable*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::IDisposable"
constexpr ::System::IDisposable* Zenject::DisposeBlock::i___System__IDisposable() noexcept {
  return static_cast<::System::IDisposable*>(static_cast<void*>(this));
}
// Ctor Parameters []
constexpr ::Zenject::DisposeBlock::DisposeBlock() {}
