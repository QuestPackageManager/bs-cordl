#pragma once
// IWYU pragma private; include "UnityEngine/TextCore/Text/TextHandlePermanentCache.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "UnityEngine/TextCore/Text/zzzz__TextHandlePermanentCache_def.hpp"
#include "System/Collections/Generic/zzzz__LinkedList_1_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "UnityEngine/TextCore/Text/zzzz__TextHandle_def.hpp"
#include "UnityEngine/TextCore/Text/zzzz__TextInfo_def.hpp"
//  Writing Method size for method: ::UnityEngine::TextCore::Text::TextHandlePermanentCache.AddTextInfoToCache
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::TextCore::Text::TextHandlePermanentCache::*)(::UnityEngine::TextCore::Text::TextHandle*)>(
    &::UnityEngine::TextCore::Text::TextHandlePermanentCache::AddTextInfoToCache)> {
  constexpr static std::size_t size = 0x234;
  constexpr static std::size_t addrs = 0x6c0d4d0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::UnityEngine::TextCore::Text::TextHandlePermanentCache*>(),
                                                                                          { ::i2c::class_of<::UnityEngine::TextCore::Text::TextHandlePermanentCache*>(), 4 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::TextCore::Text::TextHandlePermanentCache.RemoveTextInfoFromCache
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::TextCore::Text::TextHandlePermanentCache::*)(::UnityEngine::TextCore::Text::TextHandle*)>(
    &::UnityEngine::TextCore::Text::TextHandlePermanentCache::RemoveTextInfoFromCache)> {
  constexpr static std::size_t size = 0x12c;
  constexpr static std::size_t addrs = 0x6c0d704;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::TextCore::Text::TextHandlePermanentCache*>(),
                                                                                           { "RemoveTextInfoFromCache", {}, { ::i2c::type_of<::UnityEngine::TextCore::Text::TextHandle*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::TextCore::Text::TextHandlePermanentCache._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::TextCore::Text::TextHandlePermanentCache::*)()>(&::UnityEngine::TextCore::Text::TextHandlePermanentCache::_ctor)> {
  constexpr static std::size_t size = 0x8c;
  constexpr static std::size_t addrs = 0x6c0d830;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::TextCore::Text::TextHandlePermanentCache*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
constexpr ::System::Collections::Generic::LinkedList_1<::UnityEngine::TextCore::Text::TextInfo*>*& UnityEngine::TextCore::Text::TextHandlePermanentCache::__cordl_internal_get_s_TextInfoPool() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___s_TextInfoPool;
}
constexpr ::System::Collections::Generic::LinkedList_1<::UnityEngine::TextCore::Text::TextInfo*>* const&
UnityEngine::TextCore::Text::TextHandlePermanentCache::__cordl_internal_get_s_TextInfoPool() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___s_TextInfoPool;
}
constexpr void
UnityEngine::TextCore::Text::TextHandlePermanentCache::__cordl_internal_set_s_TextInfoPool(::System::Collections::Generic::LinkedList_1<::UnityEngine::TextCore::Text::TextInfo*>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___s_TextInfoPool = value;
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
inline void UnityEngine::TextCore::Text::TextHandlePermanentCache::AddTextInfoToCache(::UnityEngine::TextCore::Text::TextHandle* textHandle) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::UnityEngine::TextCore::Text::TextHandlePermanentCache*>(), 4 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, textHandle);
}
inline void UnityEngine::TextCore::Text::TextHandlePermanentCache::RemoveTextInfoFromCache(::UnityEngine::TextCore::Text::TextHandle* textHandle) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::TextCore::Text::TextHandlePermanentCache*>(),
                                                                                         { "RemoveTextInfoFromCache", {}, { ::i2c::type_of<::UnityEngine::TextCore::Text::TextHandle*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, textHandle);
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
