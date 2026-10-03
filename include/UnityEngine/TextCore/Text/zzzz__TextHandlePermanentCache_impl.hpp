#pragma once
// IWYU pragma private; include "UnityEngine/TextCore/Text/TextHandlePermanentCache.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "UnityEngine/TextCore/Text/zzzz__TextHandlePermanentCache_def.hpp"
#include "System/Collections/Generic/zzzz__LinkedList_1_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "UnityEngine/TextCore/Text/zzzz__TextCacheEntry_def.hpp"
#include "UnityEngine/TextCore/Text/zzzz__TextHandle_def.hpp"
//  Writing Method size for method: ::UnityEngine::TextCore::Text::TextHandlePermanentCache.AddToCache
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::TextCore::Text::TextHandlePermanentCache::*)(::UnityEngine::TextCore::Text::TextHandle*)>(
    &::UnityEngine::TextCore::Text::TextHandlePermanentCache::AddToCache)> {
  constexpr static std::size_t size = 0x290;
  constexpr static std::size_t addrs = 0x7063c34;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::TextCore::Text::TextHandlePermanentCache*>(),
                                                                                           { "AddToCache", {}, { ::i2c::type_of<::UnityEngine::TextCore::Text::TextHandle*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::TextCore::Text::TextHandlePermanentCache.RemoveFromCache
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::TextCore::Text::TextHandlePermanentCache::*)(::UnityEngine::TextCore::Text::TextHandle*)>(
    &::UnityEngine::TextCore::Text::TextHandlePermanentCache::RemoveFromCache)> {
  constexpr static std::size_t size = 0x15c;
  constexpr static std::size_t addrs = 0x7064050;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::TextCore::Text::TextHandlePermanentCache*>(),
                                                                                           { "RemoveFromCache", {}, { ::i2c::type_of<::UnityEngine::TextCore::Text::TextHandle*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::TextCore::Text::TextHandlePermanentCache.ResetEntryState
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::TextCore::Text::TextHandlePermanentCache::*)(::UnityEngine::TextCore::Text::TextHandle*)>(
    &::UnityEngine::TextCore::Text::TextHandlePermanentCache::ResetEntryState)> {
  constexpr static std::size_t size = 0x34;
  constexpr static std::size_t addrs = 0x70641ac;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::TextCore::Text::TextHandlePermanentCache*>(),
                                                                                           { "ResetEntryState", {}, { ::i2c::type_of<::UnityEngine::TextCore::Text::TextHandle*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::TextCore::Text::TextHandlePermanentCache._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::TextCore::Text::TextHandlePermanentCache::*)()>(&::UnityEngine::TextCore::Text::TextHandlePermanentCache::_ctor)> {
  constexpr static std::size_t size = 0x8c;
  constexpr static std::size_t addrs = 0x706424c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::TextCore::Text::TextHandlePermanentCache*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
constexpr ::System::Collections::Generic::LinkedList_1<::UnityEngine::TextCore::Text::TextCacheEntry>*& UnityEngine::TextCore::Text::TextHandlePermanentCache::__cordl_internal_get_s_Cache() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___s_Cache;
}
constexpr ::System::Collections::Generic::LinkedList_1<::UnityEngine::TextCore::Text::TextCacheEntry>* const&
UnityEngine::TextCore::Text::TextHandlePermanentCache::__cordl_internal_get_s_Cache() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___s_Cache;
}
constexpr void UnityEngine::TextCore::Text::TextHandlePermanentCache::__cordl_internal_set_s_Cache(::System::Collections::Generic::LinkedList_1<::UnityEngine::TextCore::Text::TextCacheEntry>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___s_Cache = value;
}
constexpr ::System::Object*& UnityEngine::TextCore::Text::TextHandlePermanentCache::__cordl_internal_get_syncRoot() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___syncRoot;
}
constexpr ::System::Object* const& UnityEngine::TextCore::Text::TextHandlePermanentCache::__cordl_internal_get_syncRoot() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___syncRoot;
}
constexpr void UnityEngine::TextCore::Text::TextHandlePermanentCache::__cordl_internal_set_syncRoot(::System::Object* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___syncRoot = value;
}
inline void UnityEngine::TextCore::Text::TextHandlePermanentCache::AddToCache(::UnityEngine::TextCore::Text::TextHandle* textHandle) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::TextCore::Text::TextHandlePermanentCache*>(),
                                                                                         { "AddToCache", {}, { ::i2c::type_of<::UnityEngine::TextCore::Text::TextHandle*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, textHandle);
}
inline void UnityEngine::TextCore::Text::TextHandlePermanentCache::RemoveFromCache(::UnityEngine::TextCore::Text::TextHandle* textHandle) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::TextCore::Text::TextHandlePermanentCache*>(),
                                                                                         { "RemoveFromCache", {}, { ::i2c::type_of<::UnityEngine::TextCore::Text::TextHandle*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, textHandle);
}
inline void UnityEngine::TextCore::Text::TextHandlePermanentCache::ResetEntryState(::UnityEngine::TextCore::Text::TextHandle* handle) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::TextCore::Text::TextHandlePermanentCache*>(),
                                                                                         { "ResetEntryState", {}, { ::i2c::type_of<::UnityEngine::TextCore::Text::TextHandle*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, handle);
}
inline void UnityEngine::TextCore::Text::TextHandlePermanentCache::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::TextCore::Text::TextHandlePermanentCache*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::UnityEngine::TextCore::Text::TextHandlePermanentCache* UnityEngine::TextCore::Text::TextHandlePermanentCache::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::UnityEngine::TextCore::Text::TextHandlePermanentCache*>());
}
// Ctor Parameters []
constexpr ::UnityEngine::TextCore::Text::TextHandlePermanentCache::TextHandlePermanentCache() {}
