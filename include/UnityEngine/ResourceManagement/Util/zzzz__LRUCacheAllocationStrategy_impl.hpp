#pragma once
// IWYU pragma private; include "UnityEngine/ResourceManagement/Util/LRUCacheAllocationStrategy.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "UnityEngine/ResourceManagement/Util/zzzz__LRUCacheAllocationStrategy_def.hpp"
#include "System/Collections/Generic/zzzz__Dictionary_2_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "System/zzzz__Type_def.hpp"
#include "UnityEngine/ResourceManagement/Util/zzzz__IAllocationStrategy_def.hpp"
//  Writing Method size for method: ::UnityEngine::ResourceManagement::Util::LRUCacheAllocationStrategy._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::ResourceManagement::Util::LRUCacheAllocationStrategy::*)(int32_t, int32_t, int32_t, int32_t)>(
    &::UnityEngine::ResourceManagement::Util::LRUCacheAllocationStrategy::_ctor)> {
  constexpr static std::size_t size = 0x1e4;
  constexpr static std::size_t addrs = 0x6906514;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ResourceManagement::Util::LRUCacheAllocationStrategy*>(),
                                                             { ".ctor", {}, { ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ResourceManagement::Util::LRUCacheAllocationStrategy.GetPool
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Collections::Generic::List_1<::System::Object*>* (::UnityEngine::ResourceManagement::Util::LRUCacheAllocationStrategy::*)()>(
    &::UnityEngine::ResourceManagement::Util::LRUCacheAllocationStrategy::GetPool)> {
  constexpr static std::size_t size = 0x104;
  constexpr static std::size_t addrs = 0x6911fac;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ResourceManagement::Util::LRUCacheAllocationStrategy*>(), { "GetPool", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ResourceManagement::Util::LRUCacheAllocationStrategy.ReleasePool
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::ResourceManagement::Util::LRUCacheAllocationStrategy::*)(::System::Collections::Generic::List_1<::System::Object*>*)>(
    &::UnityEngine::ResourceManagement::Util::LRUCacheAllocationStrategy::ReleasePool)> {
  constexpr static std::size_t size = 0xd4;
  constexpr static std::size_t addrs = 0x69120b0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ResourceManagement::Util::LRUCacheAllocationStrategy*>(),
                                                                                           { "ReleasePool", {}, { ::i2c::type_of<::System::Collections::Generic::List_1<::System::Object*>*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ResourceManagement::Util::LRUCacheAllocationStrategy.New
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Object* (::UnityEngine::ResourceManagement::Util::LRUCacheAllocationStrategy::*)(::System::Type*, int32_t)>(
    &::UnityEngine::ResourceManagement::Util::LRUCacheAllocationStrategy::New)> {
  constexpr static std::size_t size = 0x15c;
  constexpr static std::size_t addrs = 0x6912184;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ResourceManagement::Util::LRUCacheAllocationStrategy*>(),
                                                                                           { "New", {}, { ::i2c::type_of<::System::Type*>(), ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ResourceManagement::Util::LRUCacheAllocationStrategy.Release
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::ResourceManagement::Util::LRUCacheAllocationStrategy::*)(int32_t, ::System::Object*)>(
    &::UnityEngine::ResourceManagement::Util::LRUCacheAllocationStrategy::Release)> {
  constexpr static std::size_t size = 0x174;
  constexpr static std::size_t addrs = 0x69122e0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ResourceManagement::Util::LRUCacheAllocationStrategy*>(),
                                                                                           { "Release", {}, { ::i2c::type_of<int32_t>(), ::i2c::type_of<::System::Object*>() } })));
    return ___internal_method;
  }
};
constexpr int32_t& UnityEngine::ResourceManagement::Util::LRUCacheAllocationStrategy::__cordl_internal_get_m_poolMaxSize() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_poolMaxSize;
}
constexpr int32_t const& UnityEngine::ResourceManagement::Util::LRUCacheAllocationStrategy::__cordl_internal_get_m_poolMaxSize() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_poolMaxSize;
}
constexpr void UnityEngine::ResourceManagement::Util::LRUCacheAllocationStrategy::__cordl_internal_set_m_poolMaxSize(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_poolMaxSize = value;
}
constexpr int32_t& UnityEngine::ResourceManagement::Util::LRUCacheAllocationStrategy::__cordl_internal_get_m_poolInitialCapacity() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_poolInitialCapacity;
}
constexpr int32_t const& UnityEngine::ResourceManagement::Util::LRUCacheAllocationStrategy::__cordl_internal_get_m_poolInitialCapacity() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_poolInitialCapacity;
}
constexpr void UnityEngine::ResourceManagement::Util::LRUCacheAllocationStrategy::__cordl_internal_set_m_poolInitialCapacity(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_poolInitialCapacity = value;
}
constexpr int32_t& UnityEngine::ResourceManagement::Util::LRUCacheAllocationStrategy::__cordl_internal_get_m_poolCacheMaxSize() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_poolCacheMaxSize;
}
constexpr int32_t const& UnityEngine::ResourceManagement::Util::LRUCacheAllocationStrategy::__cordl_internal_get_m_poolCacheMaxSize() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_poolCacheMaxSize;
}
constexpr void UnityEngine::ResourceManagement::Util::LRUCacheAllocationStrategy::__cordl_internal_set_m_poolCacheMaxSize(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_poolCacheMaxSize = value;
}
constexpr ::System::Collections::Generic::List_1<::System::Collections::Generic::List_1<::System::Object*>*>*&
UnityEngine::ResourceManagement::Util::LRUCacheAllocationStrategy::__cordl_internal_get_m_poolCache() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_poolCache;
}
constexpr ::System::Collections::Generic::List_1<::System::Collections::Generic::List_1<::System::Object*>*>* const&
UnityEngine::ResourceManagement::Util::LRUCacheAllocationStrategy::__cordl_internal_get_m_poolCache() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_poolCache;
}
constexpr void UnityEngine::ResourceManagement::Util::LRUCacheAllocationStrategy::__cordl_internal_set_m_poolCache(
    ::System::Collections::Generic::List_1<::System::Collections::Generic::List_1<::System::Object*>*>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_poolCache = value;
}
constexpr ::System::Collections::Generic::Dictionary_2<int32_t, ::System::Collections::Generic::List_1<::System::Object*>*>*&
UnityEngine::ResourceManagement::Util::LRUCacheAllocationStrategy::__cordl_internal_get_m_cache() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_cache;
}
constexpr ::System::Collections::Generic::Dictionary_2<int32_t, ::System::Collections::Generic::List_1<::System::Object*>*>* const&
UnityEngine::ResourceManagement::Util::LRUCacheAllocationStrategy::__cordl_internal_get_m_cache() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_cache;
}
constexpr void UnityEngine::ResourceManagement::Util::LRUCacheAllocationStrategy::__cordl_internal_set_m_cache(
    ::System::Collections::Generic::Dictionary_2<int32_t, ::System::Collections::Generic::List_1<::System::Object*>*>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_cache = value;
}
inline void UnityEngine::ResourceManagement::Util::LRUCacheAllocationStrategy::_ctor(int32_t poolMaxSize, int32_t poolCapacity, int32_t poolCacheMaxSize, int32_t initialPoolCacheCapacity) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ResourceManagement::Util::LRUCacheAllocationStrategy*>(),
                                                           { ".ctor", {}, { ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, poolMaxSize, poolCapacity, poolCacheMaxSize, initialPoolCacheCapacity);
}
inline ::System::Collections::Generic::List_1<::System::Object*>* UnityEngine::ResourceManagement::Util::LRUCacheAllocationStrategy::GetPool() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ResourceManagement::Util::LRUCacheAllocationStrategy*>(), { "GetPool", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::List_1<::System::Object*>*>(this, ___internal_method);
}
inline void UnityEngine::ResourceManagement::Util::LRUCacheAllocationStrategy::ReleasePool(::System::Collections::Generic::List_1<::System::Object*>* pool) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ResourceManagement::Util::LRUCacheAllocationStrategy*>(),
                                                                                         { "ReleasePool", {}, { ::i2c::type_of<::System::Collections::Generic::List_1<::System::Object*>*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, pool);
}
inline ::System::Object* UnityEngine::ResourceManagement::Util::LRUCacheAllocationStrategy::New(::System::Type* type, int32_t typeHash) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ResourceManagement::Util::LRUCacheAllocationStrategy*>(),
                                                                                         { "New", {}, { ::i2c::type_of<::System::Type*>(), ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<::System::Object*>(this, ___internal_method, type, typeHash);
}
inline void UnityEngine::ResourceManagement::Util::LRUCacheAllocationStrategy::Release(int32_t typeHash, ::System::Object* obj) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ResourceManagement::Util::LRUCacheAllocationStrategy*>(),
                                                                                         { "Release", {}, { ::i2c::type_of<int32_t>(), ::i2c::type_of<::System::Object*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, typeHash, obj);
}
inline ::UnityEngine::ResourceManagement::Util::LRUCacheAllocationStrategy*
UnityEngine::ResourceManagement::Util::LRUCacheAllocationStrategy::New_ctor(int32_t poolMaxSize, int32_t poolCapacity, int32_t poolCacheMaxSize, int32_t initialPoolCacheCapacity) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::UnityEngine::ResourceManagement::Util::LRUCacheAllocationStrategy*>(poolMaxSize, poolCapacity, poolCacheMaxSize, initialPoolCacheCapacity));
}
/// @brief Convert operator to "::UnityEngine::ResourceManagement::Util::IAllocationStrategy"
constexpr UnityEngine::ResourceManagement::Util::LRUCacheAllocationStrategy::operator ::UnityEngine::ResourceManagement::Util::IAllocationStrategy*() noexcept {
  return static_cast<::UnityEngine::ResourceManagement::Util::IAllocationStrategy*>(static_cast<void*>(this));
}
/// @brief Convert to "::UnityEngine::ResourceManagement::Util::IAllocationStrategy"
constexpr ::UnityEngine::ResourceManagement::Util::IAllocationStrategy*
UnityEngine::ResourceManagement::Util::LRUCacheAllocationStrategy::i___UnityEngine__ResourceManagement__Util__IAllocationStrategy() noexcept {
  return static_cast<::UnityEngine::ResourceManagement::Util::IAllocationStrategy*>(static_cast<void*>(this));
}
// Ctor Parameters []
constexpr ::UnityEngine::ResourceManagement::Util::LRUCacheAllocationStrategy::LRUCacheAllocationStrategy() {}
