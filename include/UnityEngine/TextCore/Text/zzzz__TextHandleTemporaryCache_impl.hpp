#pragma once
// IWYU pragma private; include "UnityEngine/TextCore/Text/TextHandleTemporaryCache.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "UnityEngine/TextCore/Text/zzzz__TextHandleTemporaryCache_def.hpp"
#include "System/Collections/Generic/zzzz__LinkedList_1_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "UnityEngine/TextCore/Text/zzzz__TextCacheEntry_def.hpp"
#include "UnityEngine/TextCore/Text/zzzz__TextHandle_def.hpp"
//  Writing Method size for method: ::UnityEngine::TextCore::Text::TextHandleTemporaryCache.ClearTemporaryCache
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::TextCore::Text::TextHandleTemporaryCache::*)()>(
    &::UnityEngine::TextCore::Text::TextHandleTemporaryCache::ClearTemporaryCache)> {
  constexpr static std::size_t size = 0x134;
  constexpr static std::size_t addrs = 0x70642d8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::TextCore::Text::TextHandleTemporaryCache*>(), { "ClearTemporaryCache", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::TextCore::Text::TextHandleTemporaryCache.AddTextInfoToCache
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::TextCore::Text::TextHandleTemporaryCache::*)(::UnityEngine::TextCore::Text::TextHandle*, int32_t)>(
    &::UnityEngine::TextCore::Text::TextHandleTemporaryCache::AddTextInfoToCache)> {
  constexpr static std::size_t size = 0x3b0;
  constexpr static std::size_t addrs = 0x7064448;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::TextCore::Text::TextHandleTemporaryCache*>(),
                                                             { "AddTextInfoToCache", {}, { ::i2c::type_of<::UnityEngine::TextCore::Text::TextHandle*>(), ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::TextCore::Text::TextHandleTemporaryCache.RemoveFromCache
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::TextCore::Text::TextHandleTemporaryCache::*)(::UnityEngine::TextCore::Text::TextHandle*)>(
    &::UnityEngine::TextCore::Text::TextHandleTemporaryCache::RemoveFromCache)> {
  constexpr static std::size_t size = 0x15c;
  constexpr static std::size_t addrs = 0x7064a88;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::TextCore::Text::TextHandleTemporaryCache*>(),
                                                                                           { "RemoveFromCache", {}, { ::i2c::type_of<::UnityEngine::TextCore::Text::TextHandle*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::TextCore::Text::TextHandleTemporaryCache.ResetEntryState
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::TextCore::Text::TextHandleTemporaryCache::*)(::UnityEngine::TextCore::Text::TextHandle*)>(
    &::UnityEngine::TextCore::Text::TextHandleTemporaryCache::ResetEntryState)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0x706440c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::TextCore::Text::TextHandleTemporaryCache*>(),
                                                                                           { "ResetEntryState", {}, { ::i2c::type_of<::UnityEngine::TextCore::Text::TextHandle*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::TextCore::Text::TextHandleTemporaryCache.RefreshCaching
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::TextCore::Text::TextHandleTemporaryCache::*)(::UnityEngine::TextCore::Text::TextHandle*)>(
    &::UnityEngine::TextCore::Text::TextHandleTemporaryCache::RefreshCaching)> {
  constexpr static std::size_t size = 0x104;
  constexpr static std::size_t addrs = 0x70647f8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::TextCore::Text::TextHandleTemporaryCache*>(),
                                                                                           { "RefreshCaching", {}, { ::i2c::type_of<::UnityEngine::TextCore::Text::TextHandle*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::TextCore::Text::TextHandleTemporaryCache.RecycleTextInfoFromCache
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::TextCore::Text::TextHandleTemporaryCache::*)(::UnityEngine::TextCore::Text::TextHandle*)>(
    &::UnityEngine::TextCore::Text::TextHandleTemporaryCache::RecycleTextInfoFromCache)> {
  constexpr static std::size_t size = 0x18c;
  constexpr static std::size_t addrs = 0x70648fc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::TextCore::Text::TextHandleTemporaryCache*>(),
                                                                                           { "RecycleTextInfoFromCache", {}, { ::i2c::type_of<::UnityEngine::TextCore::Text::TextHandle*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::TextCore::Text::TextHandleTemporaryCache.UpdateCurrentFrame
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::TextCore::Text::TextHandleTemporaryCache::*)()>(
    &::UnityEngine::TextCore::Text::TextHandleTemporaryCache::UpdateCurrentFrame)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0x7064be4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::TextCore::Text::TextHandleTemporaryCache*>(), { "UpdateCurrentFrame", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::TextCore::Text::TextHandleTemporaryCache._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::TextCore::Text::TextHandleTemporaryCache::*)()>(&::UnityEngine::TextCore::Text::TextHandleTemporaryCache::_ctor)> {
  constexpr static std::size_t size = 0x8c;
  constexpr static std::size_t addrs = 0x7064c24;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::TextCore::Text::TextHandleTemporaryCache*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
constexpr ::System::Collections::Generic::LinkedList_1<::UnityEngine::TextCore::Text::TextCacheEntry>*& UnityEngine::TextCore::Text::TextHandleTemporaryCache::__cordl_internal_get_s_Cache() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___s_Cache;
}
constexpr ::System::Collections::Generic::LinkedList_1<::UnityEngine::TextCore::Text::TextCacheEntry>* const&
UnityEngine::TextCore::Text::TextHandleTemporaryCache::__cordl_internal_get_s_Cache() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___s_Cache;
}
constexpr void UnityEngine::TextCore::Text::TextHandleTemporaryCache::__cordl_internal_set_s_Cache(::System::Collections::Generic::LinkedList_1<::UnityEngine::TextCore::Text::TextCacheEntry>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___s_Cache = value;
}
constexpr int32_t& UnityEngine::TextCore::Text::TextHandleTemporaryCache::__cordl_internal_get_currentFrame() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___currentFrame;
}
constexpr int32_t const& UnityEngine::TextCore::Text::TextHandleTemporaryCache::__cordl_internal_get_currentFrame() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___currentFrame;
}
constexpr void UnityEngine::TextCore::Text::TextHandleTemporaryCache::__cordl_internal_set_currentFrame(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___currentFrame = value;
}
constexpr ::System::Object*& UnityEngine::TextCore::Text::TextHandleTemporaryCache::__cordl_internal_get_syncRoot() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___syncRoot;
}
constexpr ::System::Object* const& UnityEngine::TextCore::Text::TextHandleTemporaryCache::__cordl_internal_get_syncRoot() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___syncRoot;
}
constexpr void UnityEngine::TextCore::Text::TextHandleTemporaryCache::__cordl_internal_set_syncRoot(::System::Object* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___syncRoot = value;
}
inline void UnityEngine::TextCore::Text::TextHandleTemporaryCache::ClearTemporaryCache() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::TextCore::Text::TextHandleTemporaryCache*>(), { "ClearTemporaryCache", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void UnityEngine::TextCore::Text::TextHandleTemporaryCache::AddTextInfoToCache(::UnityEngine::TextCore::Text::TextHandle* textHandle, int32_t hashCode) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::TextCore::Text::TextHandleTemporaryCache*>(),
                                                           { "AddTextInfoToCache", {}, { ::i2c::type_of<::UnityEngine::TextCore::Text::TextHandle*>(), ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, textHandle, hashCode);
}
inline void UnityEngine::TextCore::Text::TextHandleTemporaryCache::RemoveFromCache(::UnityEngine::TextCore::Text::TextHandle* handle) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::TextCore::Text::TextHandleTemporaryCache*>(),
                                                                                         { "RemoveFromCache", {}, { ::i2c::type_of<::UnityEngine::TextCore::Text::TextHandle*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, handle);
}
inline void UnityEngine::TextCore::Text::TextHandleTemporaryCache::ResetEntryState(::UnityEngine::TextCore::Text::TextHandle* handle) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::TextCore::Text::TextHandleTemporaryCache*>(),
                                                                                         { "ResetEntryState", {}, { ::i2c::type_of<::UnityEngine::TextCore::Text::TextHandle*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, handle);
}
inline void UnityEngine::TextCore::Text::TextHandleTemporaryCache::RefreshCaching(::UnityEngine::TextCore::Text::TextHandle* textHandle) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::TextCore::Text::TextHandleTemporaryCache*>(),
                                                                                         { "RefreshCaching", {}, { ::i2c::type_of<::UnityEngine::TextCore::Text::TextHandle*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, textHandle);
}
inline void UnityEngine::TextCore::Text::TextHandleTemporaryCache::RecycleTextInfoFromCache(::UnityEngine::TextCore::Text::TextHandle* textHandle) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::TextCore::Text::TextHandleTemporaryCache*>(),
                                                                                         { "RecycleTextInfoFromCache", {}, { ::i2c::type_of<::UnityEngine::TextCore::Text::TextHandle*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, textHandle);
}
inline void UnityEngine::TextCore::Text::TextHandleTemporaryCache::UpdateCurrentFrame() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::TextCore::Text::TextHandleTemporaryCache*>(), { "UpdateCurrentFrame", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void UnityEngine::TextCore::Text::TextHandleTemporaryCache::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::TextCore::Text::TextHandleTemporaryCache*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::UnityEngine::TextCore::Text::TextHandleTemporaryCache* UnityEngine::TextCore::Text::TextHandleTemporaryCache::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::UnityEngine::TextCore::Text::TextHandleTemporaryCache*>());
}
// Ctor Parameters []
constexpr ::UnityEngine::TextCore::Text::TextHandleTemporaryCache::TextHandleTemporaryCache() {}
