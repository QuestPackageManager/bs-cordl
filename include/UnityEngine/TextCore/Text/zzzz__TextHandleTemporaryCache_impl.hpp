#pragma once
// IWYU pragma private; include "UnityEngine\TextCore\Text\TextHandleTemporaryCache.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "UnityEngine/TextCore/Text/zzzz__TextHandleTemporaryCache_def.hpp"
#include "System/Collections/Generic/zzzz__LinkedList_1_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "UnityEngine/TextCore/Text/zzzz__TextHandle_def.hpp"
#include "UnityEngine/TextCore/Text/zzzz__TextInfo_def.hpp"
//  Writing Method size for method: ::UnityEngine::TextCore::Text::TextHandleTemporaryCache.ClearTemporaryCache
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::TextCore::Text::TextHandleTemporaryCache::*)()>(
    &::UnityEngine::TextCore::Text::TextHandleTemporaryCache::ClearTemporaryCache)> {
  constexpr static std::size_t size = 0xd8;
  constexpr static std::size_t addrs = 0x6c10e44;

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
  constexpr static std::size_t size = 0x480;
  constexpr static std::size_t addrs = 0x6c10f48;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::TextCore::Text::TextHandleTemporaryCache*>(),
                                                             { "AddTextInfoToCache", {}, { ::i2c::type_of<::UnityEngine::TextCore::Text::TextHandle*>(), ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::TextCore::Text::TextHandleTemporaryCache.RemoveTextInfoFromCache
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::TextCore::Text::TextHandleTemporaryCache::*)(::UnityEngine::TextCore::Text::TextHandle*)>(
    &::UnityEngine::TextCore::Text::TextHandleTemporaryCache::RemoveTextInfoFromCache)> {
  constexpr static std::size_t size = 0x1b0;
  constexpr static std::size_t addrs = 0x6c1176c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::UnityEngine::TextCore::Text::TextHandleTemporaryCache*>(),
                                                                                          { ::i2c::class_of<::UnityEngine::TextCore::Text::TextHandleTemporaryCache*>(), 4 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::TextCore::Text::TextHandleTemporaryCache.RefreshCaching
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::TextCore::Text::TextHandleTemporaryCache::*)(::UnityEngine::TextCore::Text::TextHandle*)>(
    &::UnityEngine::TextCore::Text::TextHandleTemporaryCache::RefreshCaching)> {
  constexpr static std::size_t size = 0x140;
  constexpr static std::size_t addrs = 0x6c113c8;

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
  constexpr static std::size_t size = 0x264;
  constexpr static std::size_t addrs = 0x6c11508;

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
  constexpr static std::size_t addrs = 0x6c1191c;

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
  constexpr static std::size_t addrs = 0x6c1195c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::TextCore::Text::TextHandleTemporaryCache*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
constexpr ::System::Collections::Generic::LinkedList_1<::UnityEngine::TextCore::Text::TextInfo*>*& UnityEngine::TextCore::Text::TextHandleTemporaryCache::__cordl_internal_get_s_TextInfoPool() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___s_TextInfoPool;
}
constexpr ::System::Collections::Generic::LinkedList_1<::UnityEngine::TextCore::Text::TextInfo*>* const&
UnityEngine::TextCore::Text::TextHandleTemporaryCache::__cordl_internal_get_s_TextInfoPool() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___s_TextInfoPool;
}
constexpr void
UnityEngine::TextCore::Text::TextHandleTemporaryCache::__cordl_internal_set_s_TextInfoPool(::System::Collections::Generic::LinkedList_1<::UnityEngine::TextCore::Text::TextInfo*>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___s_TextInfoPool = value;
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
inline void UnityEngine::TextCore::Text::TextHandleTemporaryCache::RemoveTextInfoFromCache(::UnityEngine::TextCore::Text::TextHandle* textHandle) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::UnityEngine::TextCore::Text::TextHandleTemporaryCache*>(), 4 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, textHandle);
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
